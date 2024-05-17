#include <string>
#include <stdexcept>
using namespace std;

class BaseBall {
public :
	void guess(string str) {
		throw length_error("Must be three letters");
	}
};