/////////////////////////////////////////////////////////
//
//  Map.h
//      Structs and prototypes for the map class,
//      which stores actors in a user-defined grid
//
/////////////////////////////////////////////////////////

#ifndef __MAP_H
#define __MAP_H

#define MAP_MAX_HEIGHT 400
#define MAP_MAX_WIDTH 400

typedef struct Map {
    void *pMap [MAP_MAX_HEIGHT][MAP_MAX_WIDTH];
} Map;

#endif