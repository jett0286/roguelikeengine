#include <stdlib.h>
#include <stdio.h>

#define OBJ_IS_LIVING		0b00000001
#define OBJ_IS_ANIMATE		0b00000010
//add more flags

typedef struct StatBlock {
	int HP;
    int DV;
    int AV;
    char stateFlags;
} StatBlock;

void statBlockSetHP (StatBlock* pStatBlock, int HP) {
	pStatBlock->HP = HP;
}

void statBlockSetDV (StatBlock* pStatBlock, int DV) {
	pStatBlock->DV = DV;
}

void statBlockSetAV (StatBlock* pStatBlock, int AV) {
	pStatBlock->AV = AV;
}

void statBlockSetFlags (StatBlock* pStatBlock, char flags) {
	pStatBlock->stateFlags = pStatBlock->stateFlags | flags; //FIXME
}