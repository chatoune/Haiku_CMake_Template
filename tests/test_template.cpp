#include <gtest/gtest.h>

#include <dynamic.h>
#include "static.h"

TEST(test_template, OutputTest) {
	EXPECT_EQ(false, static_func());
	EXPECT_EQ(true, dynamic_func());
}
