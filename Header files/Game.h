//
// Created by fdesmet on 21/02/2022.
//

#ifndef SKELETON_GAME_H
#define SKELETON_GAME_H

#include "../SDL/SDL.h"

class Game
{
public:
    Game();
    bool Initialize();
    void RunLoop();
    void Shutdown();

private:
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();

    SDL_Window * mWindow;

    bool mIsRunning;
};
#endif //SKELETON_GAME_H
