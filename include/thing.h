/////////////////////////////////////////////////////////
//
//  Thing.h
//      Structs & prototypes for the thing class 
//      (abstract class for anything that exists on the
//       map)
//
/////////////////////////////////////////////////////////

#ifndef __THING_H
#define __THING_H

#include <stdlib.h>
#include <stdio.h>

#define IS_OCCLUDING    0b00000001
#define PH1             0b00000010
#define PH2             0b00000100
#define PH3             0b00001000
#define PH4             0b00010000
#define PH5             0b00100000
#define PH6             0b01000000
#define PH7             0b10000000


typedef struct Thing {
    int yCoord;
    int xCoord;

    int maxHP;
    int HP;

    //Rendering
    char spriteChar;
    int priority;

    char flags;
} Thing;

typedef Thing *ThingPtr;

//void thingInit (ThingPtr, int, int, int, char, int, char);

void thingInit (ThingPtr);

void thingChangeHP (ThingPtr, int);

void thingMove (ThingPtr, int, int);

void thingSetCoords (ThingPtr, int, int);

#endif