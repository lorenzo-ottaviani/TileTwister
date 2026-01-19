#pragma once

#include "Grid.hpp"
#include "Display.h"
#include <SDL2/SDL.h>

class Game {
public:
    Game();
    ~Game();

    void run();

private:
    Grid grid;
    Display display;

    bool running;

    void processInput();
    void update();
    void render();
};
