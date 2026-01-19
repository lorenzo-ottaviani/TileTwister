#pragma once
#include <SDL2/SDL.h>

enum class Direction {
    NONE,
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class InputManager {
public:
    static Direction getDirection(const SDL_Event& event) {
        if(event.type == SDL_KEYDOWN) {
            switch(event.key.keysym.sym) {
                case SDLK_UP: return Direction::UP;
                case SDLK_DOWN: return Direction::DOWN;
                case SDLK_LEFT: return Direction::LEFT;
                case SDLK_RIGHT: return Direction::RIGHT;
                default: return Direction::NONE;
            }
        }
        return Direction::NONE;
    }
};
