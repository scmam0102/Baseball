#include <string>
#include <stdexcept>
using namespace std;

class BaseBall {
public :
	void guess(const string& guessNumber) {
		assertIllegalArgument(guessNumber);
			throw invalid_argument("Must not have the same number");
	}

	void assertIllegalArgument(const string& guessNumber) {
		if (guessNumber.length() != 3)
			throw length_error("Must be three letters");

		for (char ch : guessNumber) {
			if (ch < '0' || '9' < ch)
				throw invalid_argument("Must be number");
		}

		if (isDuplicatedNumber(guessNumber))
			throw invalid_argument("Must not have the same number");
	}

	bool isDuplicatedNumber(const string& guessNumber) {
		if (guessNumber[0] == guessNumber[1] ||
			guessNumber[0] == guessNumber[2] ||
			guessNumber[1] == guessNumber[3])
			return true;
		return false;
	}
};