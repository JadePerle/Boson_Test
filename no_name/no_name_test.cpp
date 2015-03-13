#include <gtest\gtest.h>
#include "no_name.h"

TEST(no_name_test, no_name)
{
	solution* sl = new solution();

	// validate the pointer is not null 
	ASSERT_TRUE(sl != NULL);

	string a = "abcadd";
	string b = "caadsd";
	string c = "ash";
	string d = "adash";
	string e = "bcddsfsfsadf";
	string f = "dsaha";

	// call the method we want to test 
	EXPECT_EQ(true, sl->no_name("", ""));
	EXPECT_EQ(false, sl->no_name(a, b));
	EXPECT_EQ(false, sl->no_name(a, c));
	EXPECT_EQ(false, sl->no_name(a, d));
	EXPECT_EQ(false, sl->no_name(a, e));
	EXPECT_EQ(true, sl->no_name(d, f));

	delete sl;
}