/////////////////////////////////////////////////////////
//
//  Actor.c
//      Functions for the actor class (abstract class for
//      stuff that fights)
//
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "../include/actor.h"

// CHANGERS
void actorChangeCoords (ActorPtr pActor, int yMov, int xMov) {
    pActor->pThing->yCoord += yMov;
    pActor->pThing->xCoord += xMov;
}

void actorChangeMaxHP (ActorPtr pActor, int maxHPDiff) {
    pActor->pThing->maxHP += maxHPDiff;
}

void actorChangeHP (ActorPtr pActor, int HPDiff) {
    pActor->pThing->HP += HPDiff;
}

// SETTERS
void actorSetCoords (ActorPtr pActor, int newYCoord, int newXCoord) {
    pActor->pThing->yCoord = newYCoord;
    pActor->pThing->xCoord = newXCoord;
}

void actorSetMaxHP (ActorPtr pActor, int newMaxHP) {
    pActor->pThing->maxHP = newMaxHP;
}

void actorSetHP (ActorPtr pActor, int newHP) {
    pActor->pThing->HP = newHP;
}

void actorSetSpriteChar (ActorPtr pActor, char newSpriteChar) {
    pActor->pThing->spriteChar = newSpriteChar;
}

void actorSetPriority (ActorPtr pActor, int newPriority) {
    pActor->pThing->priority = newPriority;
}

void actorSetFlags (ActorPtr pActor, char newFlags) {
    pActor->pThing->flags = newFlags;
}

// GETTERS

int actorGetY (ActorPtr pActor) {
    return pActor->pThing->yCoord;
}

int actorGetX (ActorPtr pActor) {
    return pActor->pThing->xCoord;
}

int actorGetMaxHP (ActorPtr pActor) {
    return pActor->pThing->maxHP;
}

int actorGetHP (ActorPtr pActor) {
    return pActor->pThing->HP;
}

char actorGetSpriteChar (ActorPtr pActor) {
    return pActor->pThing->spriteChar;    
}

int actorGetPriority (ActorPtr pActor) {
    return pActor->pThing->priority;
}

char actorGetFlags (ActorPtr pActor) {
    return pActor->pThing->flags;
}