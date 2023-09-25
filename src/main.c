#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{
	int exit = 0;
	char userChar = 'A';
	initscr();
	while (!exit) {
		mvprintw(0, 0, "Hello World !!! %c", userChar);
		refresh();
		userChar = getch();
	}
	endwin();
	return 0;
}