/////////////////////////////////////////////////////////
//
//  Thing.h
//      Structs & prototypes for the thing class 
//      (abstract class for anything that exists on the
//       map)
//
/////////////////////////////////////////////////////////

#ifndef __THING_H
#define __THING_H

#include <stdlib.h>
#include <stdio.h>

#define IS_OCCLUDING    0b00000001
#define PH1             0b00000010
#define PH2             0b00000100
#define PH3             0b00001000
#define PH4             0b00010000
#define PH5             0b00100000
#define PH6             0b01000000
#define PH7             0b10000000


typedef struct Thing {
    int yCoord;
    int xCoord;

    int maxHP;
    int HP;

    //Rendering
    char spriteChar;
    int priority;

    char flags;
} Thing;

typedef Thing *ThingPtr;

//void thingInit (ThingPtr, int, int, int, char, int, char);

//Setup
void thingInit (ThingPtr);

//Changers (add value of int)
void thingChangeCoords (ThingPtr, int, int);
void thingChangeMaxHP (ThingPtr, int);
void thingChangeHP (ThingPtr, int);

//Setters (set value of int/char)
void thingSetCoords (ThingPtr, int, int);
void thingSetMaxHP (ThingPtr, int);
void thingSetHP (ThingPtr, int);
void thingSetSpriteChar (ThingPtr, char);
void thingSetPriority (ThingPtr, int);
void thingSetFlags (ThingPtr, char);

//Getters
int thingGetY (ThingPtr);
int thingGetX (ThingPtr);
int thingGetMaxHP (ThingPtr);
int thingGetHP (ThingPtr);
char thingGetSpriteChar (ThingPtr);
int thingGetPriority (ThingPtr);
char thingGetFlags (ThingPtr);

#endif