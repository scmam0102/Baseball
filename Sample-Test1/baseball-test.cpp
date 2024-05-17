#include "pch.h"
#include "../Baseball123/baseball.cpp"
using namespace std;

TEST(BaseballGame, ThrowExceptionWithInputLengthIsUnmatched) {
	BaseBall game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}