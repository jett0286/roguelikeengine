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

// void actorInit (ActorPtr pActor, int xCoord, int yCoord, int maxHP, char flags, int maxMP, int atkDmg, double atkSpd, double movSpd) {
//     thingInit (pActor->pThing, xCoord, yCoord, maxHP, flags);

//     pActor->maxMP = maxMP;
//     pActor->MP = maxMP;

//     pActor->atkDmg = atkDmg;

//     pActor->atkSpd = atkSpd;
//     pActor->movSpd = movSpd;
// }

void actorInit (ActorPtr pActor) {
    thingInit (pActor->pThing);

    pActor->maxMP = 0;
    pActor->MP = 0;

    pActor->atkDmg = 0;

    pActor->atkSpd = 0.0;
    pActor->movSpd = 0.0;
}


void actorChangeHP (ActorPtr pActor, int hpDiff) {
    thingChangeHP (pActor->pThing, hpDiff);
}

void actorChangeMP (ActorPtr pActor, int mpDiff) {
    pActor->MP += mpDiff;
}