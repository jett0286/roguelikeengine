#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "../include/actor.h"
#include "../include/thing.h"

//colors
#define OCEAN_PAIR 1

//tiles
#define PLAYER_CHAR '@'

//ncurses nonsense
#define HIDE_CURSOR 0

double turns = 0.0;

WINDOW *create_newwin(int height, int width, int starty, int startx) {
	WINDOW *local_win;
	local_win = newwin (height, width, starty, startx);
	box (local_win, '|', '-');
	wrefresh (local_win);
	return local_win;
}

WINDOW *create_topleftwin (int height, int width) {
	WINDOW *local_win;
	local_win = newwin (height, width, 0, 0);
	box (local_win, '|', '-');
	wrefresh (local_win);
	return local_win;
}

WINDOW *create_toprightwin (int height, int width) {
	WINDOW *local_win;

	local_win = newwin (height, width, 0, getmaxx (stdscr) - width);
	box (local_win, '|', '-');
	wrefresh (local_win);
	return local_win;
}

void destroy_win(WINDOW *local_win)
{	
	/* box(local_win, ' ', ' '); : This won't produce the desired
	 * result of erasing the window. It will leave it's four corners 
	 * and so an ugly remnant of window. 
	 */
	wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	/* The parameters taken are 
	 * 1. win: the window on which to operate
	 * 2. ls: character to be used for the left side of the window 
	 * 3. rs: character to be used for the right side of the window 
	 * 4. ts: character to be used for the top side of the window 
	 * 5. bs: character to be used for the bottom side of the window 
	 * 6. tl: character to be used for the top left corner of the window 
	 * 7. tr: character to be used for the top right corner of the window 
	 * 8. bl: character to be used for the bottom left corner of the window 
	 * 9. br: character to be used for the bottom right corner of the window
	 */
	wrefresh(local_win);
	delwin(local_win);
}

int main () {
	WINDOW* pwGame;
	WINDOW* pwLog;
	WINDOW* pwItems;
	int ch;
	int height = 3;
	int width = 10;
	int terminalheight;
	int terminalwidth;

	//Initialize the screen
	initscr();
	start_color ();
	noecho();
	cbreak();
	keypad (stdscr, true);
	curs_set (HIDE_CURSOR);
	getmaxyx (stdscr, terminalheight, terminalwidth);

	printw("Press F1 to exit");
	refresh();
	pwGame = create_topleftwin (terminalheight * 0.6, terminalwidth * 0.6);
	pwLog = create_newwin (terminalheight * 0.4, terminalwidth * 0.6, terminalheight * 0.6, 0);
	pwItems = create_toprightwin (terminalheight * 0.5, terminalwidth * 0.4);

	while (true) {

	}
	// while((ch = getch()) != KEY_F(1))
	// {	switch(ch)
	// 	{	case KEY_LEFT:
	// 			destroy_win(pwGame);
	// 			pwGame = create_newwin(height, width, starty,--startx);
	// 			break;
	// 		case KEY_RIGHT:
	// 			destroy_win(pwGame);
	// 			pwGame = create_newwin(height, width, starty,++startx);
	// 			break;
	// 		case KEY_UP:
	// 			destroy_win(pwGame);
	// 			pwGame = create_newwin(height, width, --starty,startx);
	// 			break;
	// 		case KEY_DOWN:
	// 			destroy_win(pwGame);
	// 			pwGame = create_newwin(height, width, ++starty,startx);
	// 			break;	
	// 	}
	// }
		
	endwin();			/* End curses mode		  */
	return 0;
}

// // FLAGGED FOR REMOVAL
// bool canMove (int destY, int destX) {
// 	char returnVal = TRUE;

// 	if (0 > destY || destY >= 24 || 0 > destX || destX >= 80) {
// 		returnVal = FALSE;
// 	}

// 	return returnVal;
// }

// // FLAGGED FOR REMOVAL
// void playerPassTurns (double numTurns) {
// 	turns += numTurns;
// }

// int main()
// {
// 	int exit = 0;
// 	unsigned int userChar = 0;
// 	int playerY = 0;
// 	int playerX = 0;

// 	WINDOW *pwGame;

// 	int height = 3;
// 	int width = 10;
// 	int starty = (LINES - height) / 2;
// 	int startx = (COLS - width) / 2;

// 	//Initialize the screen
// 	initscr();
// 	start_color ();
// 	noecho();
// 	cbreak();
// 	keypad (stdscr, true);
// 	curs_set (HIDE_CURSOR);
// 	init_pair (OCEAN_PAIR, COLOR_BLUE, COLOR_BLACK); // FLAGGED FOR EDIT

// 	if (has_colors () == false) {
// 		printf ("Your terminal does not support color\n");
// 		endwin();
// 		return EXIT_FAILURE;
// 	}

// 	pwGame = create_newwin(height, width, 10, 10);

// 	while (!exit) {
// 		//mvwaddch (stdscr, playerY, playerX, PLAYER_CHAR); // FLAGGED FOR EDIT
// 		box (pwGame, '-', '|');
// 		wprintw (pwGame, "TESTING 123");
// 		wrefresh (pwGame);
// 		userChar = getch(); 
// 		switch (userChar) {
// 			case 'Q':
// 				exit = 1;
// 				break;
// 			case KEY_END:
// 			case '1':
// 				if (canMove (playerY + 1, playerX - 1)) {
// 					playerY++;
// 					playerX--;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_DOWN:
// 			case '2':
// 				if (canMove (playerY + 1, playerX)) {
// 					playerY++;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_NPAGE:
// 			case '3':
// 				if (canMove (playerY + 1, playerX + 1)) {
// 					playerY++;
// 					playerX++;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_LEFT:
// 			case '4':
// 				if (canMove (playerY, playerX - 1)) {
// 					playerX--;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case '.':
// 			case '5':
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_RIGHT:
// 			case '6':
// 				if (canMove (playerY, playerX + 1)) {
// 					playerX++;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_HOME:
// 			case '7':
// 				if (canMove (playerY - 1, playerX - 1)) {
// 					playerY--;
// 					playerX--;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_UP:
// 			case '8':
// 				if (canMove (playerY - 1, playerX)) {
// 					playerY--;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 			case KEY_PPAGE:
// 			case '9':
// 				if (canMove (playerY - 1, playerX + 1)) {
// 					playerY--;
// 					playerX++;
// 				}
// 				playerPassTurns (1.0);
// 				break;
// 		}
// 	}
// 	//End the program
// 	endwin();
// 	return 0;
// }