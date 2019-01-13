#include "pch.h"
#include "Factorials.h"

TEST(FactorialTests, factorials)
{
	Factorials factorial;
	ASSERT_EQ(1, factorial.Calculate(1));
	ASSERT_EQ(2, factorial.Calculate(2));
	ASSERT_EQ(6, factorial.Calculate(3));
	ASSERT_EQ(3628800, factorial.Calculate(10));

}


