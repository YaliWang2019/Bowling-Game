#include <iostream>
#include <numeric>
#include "BowlingGame.h"


void BowlingGame::Roll(int roll)
{
	rolls.push_back(roll);
}
void BowlingGame::RollMultiple(int times, int roll)
{
	for (int i = 0; i < times; i++)
		Roll(roll);
}
int BowlingGame::Score()
{
	int score = 0;
	for (int i = 0; i < rolls.size(); i++)
		score += rolls[i];
	return score;
}
