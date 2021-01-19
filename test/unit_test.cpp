#include "../Battle.hpp"
#include <gtest/gtest.h>


TEST(Tests, warriortest) {
    expected=2;
    EXPECT_EQ(expected, 2);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}