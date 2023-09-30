#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "../include/actor.h"

//colors
#define OCEAN_PAIR 1

//tiles
#define PLAYER_CHAR '@'

//ncurses nonsense
#define HIDE_CURSOR 0

double turns = 0.0;

// FLAGGED FOR REMOVAL
bool canMove (int destY, int destX) {
	char returnVal = TRUE;

	if (0 > destY || destY >= 24 || 0 > destX || destX >= 80) {
		returnVal = FALSE;
	}

	return returnVal;
}

// FLAGGED FOR REMOVAL
void playerPassTurns (double numTurns) {
	turns += numTurns;
}

int main()
{
	int exit = 0;
	unsigned int userChar = 0;
	int playerY = 0;
	int playerX = 0;

	//Initialize the screen
	initscr();
	start_color ();
	noecho();
	cbreak();
	keypad (stdscr, true);
	curs_set (HIDE_CURSOR);
	init_pair (OCEAN_PAIR, COLOR_BLUE, COLOR_BLACK); // FLAGGED FOR EDIT
	if (has_colors () == false) {
		printf ("Your terminal does not support color\n");
		endwin();
		return EXIT_FAILURE;
	}

	while (!exit) {
		clear();
		mvprintw (1, 0, "Player Y: %d", playerY); // FLAGGED FOR REMOVAL
		mvprintw (2, 0, "Player X: %d", playerX); // FLAGGED FOR REMOVAL
		mvprintw (3, 0, "Turns passed: %f", turns); // FLAGGED FOR REMOVAL
		mvprintw (4, 0, "Last Key Pressed: %d", userChar); // FLAGGED FOR REMOVAL
		attron(COLOR_PAIR(OCEAN_PAIR)); // FLAGGED FOR EDIT
		mvaddch (playerY, playerX, PLAYER_CHAR); // FLAGGED FOR EDIT
		attroff(COLOR_PAIR(OCEAN_PAIR)); // FLAGGED FOR EDIT
		refresh();
		userChar = getch(); 
		switch (userChar) {
			case 'Q':
				exit = 1;
				break;
			case KEY_END:
			case '1':
				if (canMove (playerY + 1, playerX - 1)) {
					playerY++;
					playerX--;
				}
				playerPassTurns (1.0);
				break;
			case KEY_DOWN:
			case '2':
				if (canMove (playerY + 1, playerX)) {
					playerY++;
				}
				playerPassTurns (1.0);
				break;
			case KEY_NPAGE:
			case '3':
				if (canMove (playerY + 1, playerX + 1)) {
					playerY++;
					playerX++;
				}
				playerPassTurns (1.0);
				break;
			case KEY_LEFT:
			case '4':
				if (canMove (playerY, playerX - 1)) {
					playerX--;
				}
				playerPassTurns (1.0);
				break;
			case '.':
			case '5':
				playerPassTurns (1.0);
				break;
			case KEY_RIGHT:
			case '6':
				if (canMove (playerY, playerX + 1)) {
					playerX++;
				}
				playerPassTurns (1.0);
				break;
			case KEY_HOME:
			case '7':
				if (canMove (playerY - 1, playerX - 1)) {
					playerY--;
					playerX--;
				}
				playerPassTurns (1.0);
				break;
			case KEY_UP:
			case '8':
				if (canMove (playerY - 1, playerX)) {
					playerY--;
				}
				playerPassTurns (1.0);
				break;
			case KEY_PPAGE:
			case '9':
				if (canMove (playerY - 1, playerX + 1)) {
					playerY--;
					playerX++;
				}
				playerPassTurns (1.0);
				break;
		}
	}
	//End the program
	endwin();
	return 0;
}