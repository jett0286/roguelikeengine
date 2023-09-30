/////////////////////////////////////////////////////////
//
//  Screen.h
//      Structs and prototypes for the screen class,
//      which stores actors in a user-defined grid
//
/////////////////////////////////////////////////////////

#ifndef __SCREEN_H
#define __SCREEN_H

#include <stdlib.h>
#include <stdio.h>

#define SIZE_Y 24
#define SIZE_X 80

typedef struct Screen {
    void *screenGrid [SIZE_Y][SIZE_X];
} Screen;

#endif