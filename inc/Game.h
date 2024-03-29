//
// Created by fdesmet on 21/02/2022.
//

#pragma once

class SDL_Window;

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

	SDL_Window* Window;

	bool IsRunning;
};
