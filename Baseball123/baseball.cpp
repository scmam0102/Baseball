#include <string>
#include <stdexcept>
using namespace std;

class BaseBall {
public :
	void guess(const string& str) {
		if (str.length() != 3)
			throw length_error("Must be three letters");

		for (char ch : str) {
			if (ch < '0' || '9' < ch)
				throw invalid_argument("Must be number");
		}
	}
};