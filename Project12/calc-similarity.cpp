#include <string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& answer) 
		: answer{answer} {
	}

	int getScore(string target) {
		int score = 0;
		int answerLen = answer.size();
		int targetLen = target.size();

		if (answerLen == targetLen) {
			return 60;
		}

		double longLen = max(answerLen, targetLen);
		double shortLen = min(answerLen, targetLen);

		if (longLen / shortLen >= 2) {
			return 0;
		}
		
		score = (1 - ((longLen - shortLen) / shortLen)) * 60;
		if (score > 60) score = 60;

		return score;
	}

private:
	string answer;
};
