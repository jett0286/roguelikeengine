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

// ACTOR FUNCTIONS
// SETUP
void actorInit (ActorPtr pActor) {
    pActor->pThing = malloc (sizeof (Thing));
}

void actorDelete (ActorPtr pActor) {
    free (pActor->pThing);
}

// CHANGERS
//Changers (add value of int)
void actorChangeMaxMP (ActorPtr pActor, int diffMaxMP) {
    pActor->maxMP += diffMaxMP;
}
void actorChangeMP (ActorPtr pActor, int diffMP) {
    pActor->MP += diffMP;
}

//Setters (set value of int/char)
void actorSetMaxMP (ActorPtr pActor, int newMaxMP) {
    pActor->maxMP = newMaxMP;
}
void actorSetMP (ActorPtr pActor, int newMP) {
    pActor->MP = newMP;
}
void actorSetAtkDmg (ActorPtr pActor, int newAtkDmg) {
    pActor->atkDmg = newAtkDmg;
}
void actorSetAtkSpd (ActorPtr pActor, double newAtkSpd) {
    pActor->atkSpd = newAtkSpd;
}
void actorSetMovSpd (ActorPtr pActor, double newMovSpd) {
    pActor->movSpd = newMovSpd;
}

//Getters
int actorGetMaxMP (ActorPtr pActor) {
    return pActor->maxMP;
}
int actorGetMP (ActorPtr pActor) {
    return pActor->MP;
}
int actorGetAtkDmg (ActorPtr pActor) {
    return pActor->atkDmg;
}
double actorGetAtkSpd (ActorPtr pActor) {
    return pActor->atkSpd;
}
double actorGetMovSpd (ActorPtr pActor) {
    return pActor->movSpd;
}

// THING FUNCTIONS
// CHANGERS
void actorChangeCoords (ActorPtr pActor, int yMov, int xMov) {
    thingChangeCoords (pActor->pThing, yMov, xMov);
}

void actorChangeMaxHP (ActorPtr pActor, int maxHPDiff) {
    thingChangeMaxHP (pActor->pThing, maxHPDiff);
}

void actorChangeHP (ActorPtr pActor, int HPDiff) {
    thingChangeHP (pActor->pThing, HPDiff);
}

// SETTERS
void actorSetCoords (ActorPtr pActor, int newYCoord, int newXCoord) {
    thingSetCoords (pActor->pThing, newYCoord, newXCoord);
}

void actorSetMaxHP (ActorPtr pActor, int newMaxHP) {
    thingSetMaxHP (pActor->pThing, newMaxHP);
}

void actorSetHP (ActorPtr pActor, int newHP) {
    thingSetHP (pActor->pThing, newHP);
}

void actorSetSpriteChar (ActorPtr pActor, char newSpriteChar) {
    thingSetSpriteChar (pActor->pThing, newSpriteChar);
}

void actorSetPriority (ActorPtr pActor, int newPriority) {
    thingSetPriority (pActor->pThing, newPriority);
}

void actorSetFlags (ActorPtr pActor, char newFlags) {
    thingSetFlags (pActor->pThing, newFlags);
}

// GETTERS

int actorGetY (ActorPtr pActor) {
    return thingGetY (pActor->pThing);
}

int actorGetX (ActorPtr pActor) {
    return thingGetX (pActor->pThing);
}

int actorGetMaxHP (ActorPtr pActor) {
    return thingGetMaxHP (pActor->pThing);
}

int actorGetHP (ActorPtr pActor) {
    return thingGetHP (pActor->pThing);
}

char actorGetSpriteChar (ActorPtr pActor) {
    return thingGetSpriteChar (pActor->pThing);    
}

int actorGetPriority (ActorPtr pActor) {
    return thingGetPriority (pActor->pThing);
}

char actorGetFlags (ActorPtr pActor) {
    return thingGetFlags (pActor->pThing);
}