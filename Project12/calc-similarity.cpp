#include <string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& answer) 
		: answer{answer} {
	}

	int getScore(string target) {
		int longLen = getLongLength(answer, target);
		int shortLen = getShortLength(answer, target);

		if (isSameLength(longLen, shortLen)) return MAX_LENGTH_POINT;
		if (isLongerLength(longLen, shortLen)) return MIN_LENGHT_POINT;

		return getGapLengthScore(longLen, shortLen);
	}

	int getLongLength(string input1, string input2)
	{
		return max(input1.length(), input2.length());
	}

	int getShortLength(string input1, string input2)
	{
		return min(input1.length(), input2.length());
	}

	bool isSameLength(int input1, int input2) {
		if (input1 == input2) return true;
		return false;
	}

	bool isLongerLength(int input1, int input2) {
		return input1 >= input2 * 2;
	}

	int getGapLengthScore(int input1, int input2) {
		int gap = input1 - input2;
		return MAX_LENGTH_POINT - MAX_LENGTH_POINT * gap / input2;
	}

private:
	string answer;
	const int MAX_LENGTH_POINT = 60;
	const int MIN_LENGHT_POINT = 0;
};
