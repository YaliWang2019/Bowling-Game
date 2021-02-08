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
	for (int i = 0; i < Frames; i++)
	{
		if (counts == BallOne(pos) + BallTwo(pos))
		{
			score += BallOne(pos) + BallTwo(pos) + *(pos + 2);
		}
		else {
			score += BallOne(pos) + BallTwo(pos);
		}
		pos += 2;
	}
	return score;
}

int BallOne(const vector<int>::iterator pos)
{
	return *pos;
}
int BallTwo(const vector<int>::iterator pos)
{
	return *(pos + 1);
}
int BallThree(const vector<int>::iterator pos)
{
	return *(pos + 2);
}
bool Spare(const vector<int>::iterator pos)
{
	return counts == BallOne(pos) + BallTwo(pos);
}