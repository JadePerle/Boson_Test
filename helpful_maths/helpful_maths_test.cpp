#include <gtest\gtest.h>
#include "helpful_maths.h"

TEST(helpful_maths_test, print_maths)
{
	solution* sl = new solution();

	// validate the pointer is not null 
	ASSERT_TRUE(sl != NULL);

	string str1 = "3+2+1";
	string str2 = "1+1+3+1+3";
	string str3 = "2";

	int *r1 = new int[r_length];
	int *r2 = new int[r_length];
	int *r3 = new int[r_length];

	r1 = sl->helpful_maths(str1);
	r2 = sl->helpful_maths(str2);
	r3 = sl->helpful_maths(str3);

	// call the method we want to test 
	EXPECT_STREQ("1+2+3",sl->print_maths(r1).c_str());
	EXPECT_STREQ("1+1+1+3+3", sl->print_maths(r2).c_str());
	EXPECT_STREQ("2", sl->print_maths(r3).c_str());

	delete sl;
}