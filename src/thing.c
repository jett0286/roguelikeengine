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

// void thingInit (ThingPtr pThing, int yCoord, int xCoord, int maxHP, char spriteChar, int priority, char) {
//     pThing->yCoord = yCoord;
//     pThing->xCoord = xCoord;

//     pThing->maxHP = maxHP;
//     pThing->HP = maxHP;

//     pThing->flags = flags;
// }

void thingInit (ThingPtr pThing) {
    pThing->yCoord = 0;
    pThing->xCoord = 0;
    
    pThing->maxHP = 0;
    pThing->HP = 0;

    pThing->spriteChar = '?';
    pThing->priority = 0;
    
    pThing->flags = 0;
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