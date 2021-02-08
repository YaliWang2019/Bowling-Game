#include "Catch.hpp"

#include "BowlingGame.h"


//1. Gutter game scores zero - When you roll all misses, you get a total score of zero.
//2. All ones scores 20 - When you knock down one pin with each ball, your total score is 20.
//3. A spare in the first frame, followed by three pins, followed by all misses scores 16.
//4. A strike in the first frame, followed by threeand then four pins, followed by all misses, scores 24.
//5. A perfect game(12 strikes) scores 300.


TEST_CASE(BowlingGameTest, GutterGameScoresZero)
{
	BowlingGameTest* Bowling;
	rolls(20, 0);
	EXPECT_EQ(0, game->getScore());
}
