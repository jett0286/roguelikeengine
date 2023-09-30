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

// CHANGERS
void thingChangeCoords (ThingPtr pThing, int yMov, int xMov) {
    pThing->yCoord += yMov;
    pThing->xCoord += xMov;
}

void thingChangeMaxHP (ThingPtr pThing, int maxHPDiff) {
    pThing->maxHP += maxHPDiff;
}

void thingChangeHP (ThingPtr pThing, int HPDiff) {
    pThing->HP += HPDiff;
}

// SETTERS
void thingSetCoords (ThingPtr pThing, int newYCoord, int newXCoord) {
    pThing->yCoord = newYCoord;
    pThing->xCoord = newXCoord;
}

void thingSetMaxHP (ThingPtr pThing, int newMaxHP) {
    pThing->maxHP = newMaxHP;
}

void thingSetHP (ThingPtr pThing, int newHP) {
    pThing->HP = newHP;
}

void thingSetSpriteChar (ThingPtr pThing, char newSpriteChar) {
    pThing->spriteChar = newSpriteChar;
}

void thingSetPriority (ThingPtr pThing, int newPriority) {
    pThing->priority = newPriority;
}

void thingSetFlags (ThingPtr pThing, char newFlags) {
    pThing->flags = newFlags;
}

// GETTERS

int thingGetY (ThingPtr pThing) {
    return pThing->yCoord;
}

int thingGetX (ThingPtr pThing) {
    return pThing->xCoord;
}

int thingGetMaxHP (ThingPtr pThing) {
    return pThing->maxHP;
}

int thingGetHP (ThingPtr pThing) {
    return pThing->HP;
}

char thingGetSpriteChar (ThingPtr pThing) {
    return pThing->spriteChar;    
}

int thingGetPriority (ThingPtr pThing) {
    return pThing->priority;
}

char thingGetFlags (ThingPtr pThing) {
    return pThing->flags;
}