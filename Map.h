#pragma once

#include "Game.hpp"

class Map
{

public:

	Map();
	~Map();

	void LoadMap();
	void DrawMap();

private:

	SDL_Rect src, dest;

	SDL_Texture* platform;
	SDL_Texture* background;

	int map[20][25];

};