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

void actorInit (ActorPtr pActor, int xCoord, int yCoord, int maxHP, int maxMP, int atkDmg, double atkSpd, double movSpd) {
    thingInit (pActor->pThing, xCoord, yCoord, maxHP);

    pActor->maxMP = maxMP;
    pActor->MP = maxMP;

    pActor->atkDmg = atkDmg;

    pActor->atkSpd = atkSpd;
    pActor->movSpd = movSpd;
}

void actorChangeHP (ActorPtr pActor, int hpDiff) {
    thingChangeHP (pActor->pThing, hpDiff);
}

void actorChangeMP (ActorPtr pActor, int mpDiff) {
    pActor->MP += mpDiff;
}