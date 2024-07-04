#include "pch.h"
#include "../Project12/calc-similarity.cpp"

TEST(TestCaseName, whenHaveSameLength) {
	SimilarityChecker checker{ "ASD" };
	EXPECT_EQ(60, checker.getLengthScore("DSA"));
}

TEST(TestCaseName, whenHaveLongerMoreThanTwiceLength) {
	SimilarityChecker checker{ "A" };
	EXPECT_EQ(0, checker.getLengthScore("BB"));
}

TEST(TestCaseName, whenHaveDifferenctLength) {
	SimilarityChecker checker{ "AAABB" };
	EXPECT_EQ(20, checker.getLengthScore("BAA"));
}

TEST(TestCaseName, whenHaveDifferenctLength2) {
	SimilarityChecker checker{ "AA" };
	EXPECT_EQ(30, checker.getLengthScore("AAE"));
}

TEST(TestCaseName, whenHaveSameAlphabets) {
	SimilarityChecker checker{ "ASD" };
	EXPECT_EQ(40, checker.getAlphaScore("DSA"));
}

TEST(TestCaseName, whenHaveAllDiffAlphabets) {
	SimilarityChecker checker{ "A" };
	EXPECT_EQ(0, checker.getAlphaScore("BB"));
}

TEST(TestCaseName, whenHaveMaxPointAlphabets) {
	SimilarityChecker checker{ "AAABB" };
	EXPECT_EQ(40, checker.getAlphaScore("BA"));
}

TEST(TestCaseName, whenHaveSubPointAlphabets) {
	SimilarityChecker checker{ "AA" };
	EXPECT_EQ(20, checker.getAlphaScore("AAE"));
}
