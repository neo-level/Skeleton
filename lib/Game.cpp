//
// Created by Frederik Desmet on 24/05/2023.
//

#include "Game.h"

#include "SDL/SDL.h"

Game::Game()
{
	Window = nullptr;
	IsRunning = false;
}

bool Game::Initialize()
{
	if (int sdlResult{ SDL_Init(SDL_INIT_VIDEO) }; sdlResult != 0)
	{
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return false;
	}

	Window = SDL_CreateWindow("Skeleton", 100, 100, 1024, 768, 0);
	if (not Window)
	{
		SDL_Log("Failed to create window: %s", SDL_GetError());
		return false;
	}

	return true;
}
void Game::RunLoop()
{

}
void Game::Shutdown()
{

}
void Game::ProcessInput()
{

}
void Game::UpdateGame()
{

}
void Game::GenerateOutput()
{

}
