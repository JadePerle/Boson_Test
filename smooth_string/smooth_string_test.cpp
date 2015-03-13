#include <gtest\gtest.h>
#include "smooth_string.h"

TEST(smooth_string_test, getmin)
{
	GooseTattarrattatDiv2* sl = new GooseTattarrattatDiv2();

	// validate the pointer is not null 
	ASSERT_TRUE(sl != NULL);

	// call the method we want to test 
	EXPECT_EQ(6, sl->getmin("tattarrattat"));
	EXPECT_EQ(0, sl->getmin("www"));
	EXPECT_EQ(6, sl->getmin("topcoder"));
	EXPECT_EQ(43, sl->getmin("xrepayuyubctwtykrauccnquqfuqvccuaakylwlcjuyhyammag"));

	delete sl;
}