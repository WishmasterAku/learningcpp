//
// Created by korisd on 8/14/21.
//

#include <gtest/gtest.h>
#include "Calculator.h"

TEST(CalculatorSuite, AddTwoNumbers_ProducesProperSumation)
{
    Calculator calc;

    ASSERT_EQ(10, calc.addNumbers(5, 5));
    ASSERT_EQ(8, calc.addNumbers(6, 2));
}

TEST(CalculatorSuite, SubtractTwoNumbers_ProducesProperDifference)
{
    Calculator calc;

    ASSERT_EQ(5,calc.subNumbers(10 , 5));
}

//std::vector<int> numbers;
//
//std::vector<int> numbers_2 = {10, 10, 10}; // copy-initialization
//std::vector<int> numbers_3 {10, 10, 10}; // direct-list-initialization
//    std::vector<int> numbers_4(10, 10, 10); // direct-initialization, doesn't work for vector

//int z; // in general you don't want to do this
//int x {5}; // RAII: Resource Acquisition is Initialization
//int y = 5; // acquiring Y, then assigning 5
//
//x = 6;

// don't do
//    int a;
//    int b;
//    int c;
//
//    a = somenumber();
//    if (a == 10)
//        b = differentnumber();

// do this
//    int a {somenumber()};
//    if (a == 10)
//    {
//        int b {differentnumber()};
//    }

TEST(CalculatorSuite, SumVectorOfNumbers_ProduceProperSum)
{
    Calculator calc;
    std::vector<int> nums {10, 15, 20};

    int result = calc.sumNumbers(nums);

    ASSERT_EQ(45, result);
    ASSERT_EQ(35, calc.sumNumbers({15, 20}));
}