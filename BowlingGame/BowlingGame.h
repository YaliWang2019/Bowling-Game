#pragma once

#ifndef BOWLINGGAME_H
#define BOWLINGGAME_H

#include <vector>
using namespace std;

class BowlingGame
{
public:

	void Roll(int rolls);
	int Score();
	void RollMultiple(int times, int roll);

private:
	static const int Frames = 10;
	static const int counts = 10;
	vector<int> rolls;

	//int BallOne(const vector<int>::iterator pos);
	//int BallTwo(const vector<int>::iterator pos);
	//int BallThree(const vector<int>::iterator pos);
	
	//bool Spare(const vector<int>::iterator pos);
};

#endif 