/////////////////////////////////////////////////////////
//
//  Actor.h
//      Structs & prototypes for the actor class 
//      (abstract class for stuff that fights)
//
/////////////////////////////////////////////////////////

#ifndef __ACTOR_H
#define __ACTOR_H

#include <stdlib.h>
#include <stdio.h>
#include "./thing.h"

typedef struct Actor {
    ThingPtr pThing;

    int maxMP;
    int MP;

    int atkDmg;
    
    double atkSpd;
    double movSpd;
} Actor;

typedef Actor *ActorPtr;

//Setup
void actorInit (ActorPtr);

// FROM THING

//Changers (add value of int)
void actorChangeCoords (ActorPtr, int, int);
void actorChangeMaxHP (ActorPtr, int);
void actorChangeHP (ActorPtr, int);

//Setters (set value of int/char)
void actorSetCoords (ActorPtr, int, int);
void actorSetMaxHP (ActorPtr, int);
void actorSetHP (ActorPtr, int);
void actorSetSpriteChar (ActorPtr, char);
void actorSetPriority (ActorPtr, int);
void actorSetFlags (ActorPtr, char);

//Getters
int actorGetY (ActorPtr);
int actorGetX (ActorPtr);
int actorGetMaxHP (ActorPtr);
int actorGetHP (ActorPtr);
char actorGetSpriteChar (ActorPtr);
int actorGetPriority (ActorPtr);
char actorGetFlags (ActorPtr);

// FOR ACTOR

#endif