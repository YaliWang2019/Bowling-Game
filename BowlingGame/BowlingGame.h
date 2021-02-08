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

private:
	vector<int> rolls;
};

#endif 