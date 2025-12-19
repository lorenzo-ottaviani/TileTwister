#include "../include/Grid.hpp"
#include <SDL.h>
#include <cstdlib> 

Grid::Grid(){
    reset();
}

void Grid::reset(){

    for (int i=0; i < 4; i++ ){
        for (int j=0; j < 4; j++){
            cases[i][j] = 0;
        }
    }
}

void Grid::addTiles(){
    int i, j;
    do {
        i = rand() % 4;
        j = rand() % 4; 
    } while ( cases[i][j] !=0);
    int value = (rand() % 2 == 0) ? 2 : 4;
    cases [i][j] = value; 
}

