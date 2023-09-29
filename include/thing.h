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

typedef struct Thing {
    int yCoord;
    int xCoord;

    int maxHP;
    int HP;
} Thing;

typedef Thing *ThingPtr;

void thingInit (ThingPtr, int, int, int);

void thingChangeHP (ThingPtr, int);

void thingMove (ThingPtr, int, int);

void thingSetCoords (ThingPtr, int, int);

#endif