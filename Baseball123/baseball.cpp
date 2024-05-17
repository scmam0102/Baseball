#include <string>
#include <stdexcept>
using namespace std;

struct GuessResult {
	bool solved;
	int strikes;
	int balls;
};

class BaseBall {
public :
	explicit BaseBall(const string& guessNumber) 
		: question(question) {

	}

	GuessResult guess(const string& guessNumber) {
		assertIllegalArgument(guessNumber);
		return { true, 3, 0 };
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

private:
	string question;
};