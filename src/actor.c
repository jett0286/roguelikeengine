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

void actorInit (ActorPtr pActor, int maxHP, int maxMP, int atkDmg, double atkSpd, double movSpd) {
    pActor->maxHP = maxHP;
    pActor->HP = maxHP;

    pActor->maxMP = maxMP;
    pActor->MP = maxMP;

    pActor->atkDmg = atkDmg;

    pActor->atkSpd = atkSpd;
    pActor->movSpd = movSpd;
}

void actorChangeHP (ActorPtr pActor, int hpDiff) {
    pActor->HP += hpDiff;
}

void actorChangeMP (ActorPtr pActor, int mpDiff) {
    pActor->MP += mpDiff;
}