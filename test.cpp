#include "pch.h"

TEST(TestCaseName, TestName) {

	using namespace  std;

	char* arr = "Hello world";
	cout << strlen(arr) << endl;
	

	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}