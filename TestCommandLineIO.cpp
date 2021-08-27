//
// Created by amora on 8/21/2021.
//

#include <gtest/gtest.h>
#include "Calculator.h"
#include "CommandLineIO.h"

/*
 * 1. Run the Program
 * 2. Outputs "Hello, I'm a calculator, my commands are...
 *    add <x> and <y> :: std::string good_input {"add 4 and 5"};
 *    sub <x> and <y>
 *    sum <x ... n>
 *    exit to end the program
 *    "
 *
 */

TEST(CommandLineIOSuite, BadInputReceivedReturnsAErrorMessage)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string bad_input       {"multiply"};
    std::string expected_output {"Bad input."};
    std::string actual_output   {io.receiveInput(bad_input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_FALSE(io.shouldExit());
}

TEST(CommandLineIOSuite, ExitCommandReceivedExitFlagSetToTrue)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string input {"exit"};
    std::string expected_output {"Program exiting."};
    std::string actual_output {io.receiveInput(input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_TRUE(io.shouldExit());
}

TEST(CommandLineIOSuite, AddCommandReceivedReturnsProperValue)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string input {"add 5 and 6"};
    std::string expected_output {"sum: 11"};
    std::string actual_output {io.receiveInput(input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_FALSE(io.shouldExit());
}

TEST(CommandLineIOSuite, SubCommandReceivedReturnsProperValue)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string input {"sub 11 and 6"};
    std::string expected_output {"sum: 5"};
    std::string actual_output {io.receiveInput(input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_FALSE(io.shouldExit());
}
TEST(CommandLineIOSuite, MultCommandReceivedReturnsProperValue)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string input {"mult 7 and 5"};
    std::string expected_output {"sum: 35"};
    std::string actual_output {io.receiveInput(input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_FALSE(io.shouldExit());
}

TEST(CommandLineIOSuite, SumCommandReceivedReturnsProperValue)
{
    Calculator calc {};
    CommandLineIO io {calc};

    std::string input {"sum 11 9 10"};
    std::string expected_output {"sum: 30"};
    std::string actual_output {io.receiveInput(input)};

    ASSERT_EQ(expected_output, actual_output);
    ASSERT_FALSE(io.shouldExit());
}