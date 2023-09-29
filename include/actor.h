/////////////////////////////////////////////////////////
//
//  Actor.c
//      Structs & prototypes for the actor class 
//      (abstract class for stuff that fights)
//
/////////////////////////////////////////////////////////

#ifndef __ACTOR_H
#define __ACTOR_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Actor {
    int maxHP;
    int HP;
    
    int maxMP;
    int MP;

    int atkDmg;
    
    double atkSpd;
    double movSpd;
} Actor;

typedef Actor *ActorPtr;

void actorInit (ActorPtr, int, int, int, double, double);

void actorChangeHP (ActorPtr, int);

void actorChangeMP (ActorPtr, int);

#endif