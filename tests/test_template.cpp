#include <gtest/gtest.h>

#include <dynamic.h>
#include "static.h"

TEST(test_template, OutputTest) {
	EXPECT_EQ(true, static_func());
	EXPECT_EQ(false, dynamic_func());
}
