#include "pch.h"
#include "../Project12/calc-similarity.cpp"

TEST(TestCaseName, whenHaveSameLength) {
	SimilarityChecker checker{ "ASD" };
	EXPECT_EQ(60, checker.getScore("DSA"));
}

TEST(TestCaseName, whenHaveLongerMoreThanTwiceLength) {
	SimilarityChecker checker{ "A" };
	EXPECT_EQ(0, checker.getScore("BB"));
}

TEST(TestCaseName, whenHaveDifferenctLength) {
	SimilarityChecker checker{ "AAABB" };
	EXPECT_EQ(20, checker.getScore("BAA"));
}

TEST(TestCaseName, whenHaveDifferenctLength2) {
	SimilarityChecker checker{ "AA" };
	EXPECT_EQ(30, checker.getScore("AAE"));
}
