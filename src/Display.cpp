#include "Display.h"
#include "Grid.h"
#include <SDL2/SDL.h>
#include <iostream>

Display::Display(){

    window = SDL_CreateWindow(
        "Tiles Twisted",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        windowSize,
        windowSize,
        SDL_WINDOW_SHOWN
    );

    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);



}

void Display::reset(){
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Display::drawGrid(){
    // Fond général
    SDL_SetRenderDrawColor(renderer, 250, 248, 239, 255);
    SDL_RenderClear(renderer);
    
    const int sizeGrid = 4;
    const int margin = 100;
    const int cellPadding = 15;
    const int spaceDisponible = windowSize - 2 * margin;
    const int cellSize = (spaceDisponible - cellPadding * (sizeGrid + 1)) / sizeGrid;
    
    SDL_Rect gridBg = {margin, margin, spaceDisponible, spaceDisponible};
    SDL_SetRenderDrawColor(renderer, 187, 173, 160, 255);
    SDL_RenderFillRect(renderer, &gridBg);
    
    SDL_SetRenderDrawColor(renderer, 205, 193, 180, 255);
    for (int row = 0; row < sizeGrid; ++row) {
        for (int col = 0; col < sizeGrid; ++col) {
            SDL_Rect cell = {
                margin + cellPadding + col * (cellSize + cellPadding),
                margin + cellPadding + row * (cellSize + cellPadding),
                cellSize,
                cellSize
            };
            SDL_RenderFillRect(renderer, &cell);
        }
    }
    
    SDL_RenderPresent(renderer);
}

void Display::drawScore(int score, int best){

}

void Display::drawMessage(const std::string& message){

}

