#pragma once

#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <SDL.h>

#include "Square.h"

#define PLAY_DIG 0
#define PLAY_FLAG 1

class MineField
{
private:
	int width, height;
	int percentBomb;
	std::vector<std::vector<Square>> grid;
	int nbBombs;
	int nbBombDiscovered;
	unsigned int seed;
public:
	MineField(int width, int height, int percentBomb, unsigned int seed);
	~MineField();
	int get_width();
	int get_height();
	int get_percentBomb();
	std::vector<std::vector<Square>> get_grid();
	Square get_square(int x, int y);
	void draw_gridASCII();
	void printStats();
	void play(int playType, int x, int y);
	void set_Squares(int screenWidth, int screenHeight, SDL_Renderer* screenRenderer);
	void draw(SDL_Renderer* renderer);
};

