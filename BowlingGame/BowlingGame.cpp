#include <iostream>
#include <numeric>
#include "BowlingGame.h"


void BowlingGame::Roll(int roll)
{
	rolls.push_back(roll);
}

int BowlingGame::Score()
{
	int score = 0;
	vector<int>::iterator pos = rolls.begin();
	for (int i = 0; i < 10; i++)
	{
		if (10 == *pos + *(pos + 1))
		{
			score += *pos + *(pos + 1) + *(pos + 2);
		}
		else {
			score += *pos + *(pos + 1);
		}
		pos += 2;
	}
	return score;
}