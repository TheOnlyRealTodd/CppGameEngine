#include <gtest\gtest.h>
#include <math\Vector2D.h>
using Math::Vector2D;

TEST(Vector2D, Constructor)
{
	Vector2D first(1, 2);
	EXPECT_EQ(1, first.x);
	EXPECT_EQ(2, first.y);
}
TEST(Vector2D, VectorAddition)
{
	Vector2D first(1, 2);
	Vector2D second(3, 4);

	Vector2D result = first + second;
	Vector2D result2 = second + first;

	EXPECT_FLOAT_EQ(4, result.x);
	EXPECT_FLOAT_EQ(6, result.y);

	EXPECT_FLOAT_EQ(result.x, result2.x);
	EXPECT_FLOAT_EQ(result.y, result2.y);
}

TEST(Vector2D, ScalarMultiplication) {
	Vector2D vec(-7, 3);
	Vector2D result = 8 * vec;
	Vector2D result2 = vec * 8;
	EXPECT_FLOAT_EQ(result.x, -56);
	EXPECT_FLOAT_EQ(result.y, 24);
	EXPECT_FLOAT_EQ(result.x, result2.x);
	EXPECT_FLOAT_EQ(result.y, result2.y);
}