#pragma once

#include <SDL2/SDL.h>
#include <string>

class Grid;

class Display {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;

    const int windowSize = 600;

public:
    Display();

    void present();
    void reset();

    void drawGrid(); //le parametre = const Grid& grid
    void drawTile(int value, int row, int col);
    void drawScore(int score, int best);
    void drawMessage(const std::string& message);
};
