//
// Created by korisd on 8/14/21.
//

#include "Calculator.h"

int Calculator::addNumbers(int lhs, int rhs)
{
    return lhs + rhs;
}

int Calculator::subNumbers(int lhs, int rhs)
{
    return lhs - rhs;
}

//    int counter {0};

// With a While Looop
//    while (counter < numbers.size())
//    {
//        sum += numbers[counter++];
//    }

// With a for loop

// for ( initial value; condition; increment )
//    for (int counter {0}; counter < numbers.size(); counter++)
//    {
//        sum += numbers[counter];
//    }

// bad example
//    int size = numbers.size();
//    for (int counter {0}; counter < size; counter++)
//    {
//        sum += numbers[counter];
//        size = 10;
//    }

int Calculator::sumNumbers(std::vector<int> numbers)
{
    int sum {0};

    for (auto element : numbers) // numbers {10, 25, 50}
        sum += element;

    return sum;
}

