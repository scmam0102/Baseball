#include "pch.h"
#include "../Baseball123/baseball.cpp"
using namespace std;

class BaseballTestfixture : public testing::Test {
public :
	BaseBall game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(string(guessNumber));
			FAIL();
		}
		catch (exception e) {
			// PASS
		}
	}
};

TEST_F(BaseballTestfixture, ThrowExceptionWhenInvalidCase) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
}