/////////////////////////////////////////////////////////
//
//  Thing.c
//      Structs & prototypes for the thing class 
//      (abstract class for anything that exists on the
//       map)
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "../include/thing.h"

void thingInit (ThingPtr pThing, int yCoord, int xCoord, int maxHP) {
    pThing->yCoord = yCoord;
    pThing->xCoord = xCoord;

    pThing->maxHP = maxHP;
    pThing->HP = maxHP;
}

void thingChangeHP (ThingPtr pThing, int hpDiff) {
    pThing->HP += hpDiff;
}

void thingMove (ThingPtr pThing, int yMov, int xMov) {
    pThing->yCoord += yMov;
    pThing->xCoord += xMov;
}

void thingSetCoords (ThingPtr pThing, int newYCoord, int newXCoord) {
    pThing->yCoord = newYCoord;
    pThing->xCoord = newXCoord;
}