//
// Created by amora on 8/21/2021.
//

#include <sstream>
#include "CommandLineIO.h"

CommandLineIO::CommandLineIO(Calculator calc)
:
// initial class fields
    calc{calc},
    should_exit{false}
{
    // call methods
}

std::string CommandLineIO::receiveInput(std::string input)
{
    std::stringstream ss(input); // "add 4 and 6"
    std::string command;

    // + - / * ^ = == >> operators
    ss >> command; // "add"

    if (command == "add")
    {
        int x, y;
        std::string and_word;
        ss >> x;
        ss >> and_word;
        ss >> y;

        int sum = calc.addNumbers(x, y);

        return "sum: " + std::to_string(sum);
    }
    else if (command == "sub")
    {
        int x, y;
        std::string and_word;
        ss >> x;
        ss >> and_word;
        ss >> y;

        int sum = calc.subNumbers(x, y);
        return "sum: " + std::to_string(sum);

    }
    else if (command == "multiply")
    {
        int x,y;
        std::string and_word;
        ss >> x;
        ss >> and_word;
        ss >> y;

        int sum = calc.multNumbers(x,y);
        return "sum: " + std::to_string(sum);
    }
    else if (command == "sum") // "sum 11 9 10"
    {
        std::vector<int> numbers_to_sum;
        int number;

        while(ss >> number)
            numbers_to_sum.push_back(number);


        int sum = calc.sumNumbers(numbers_to_sum);
        return "sum: " + std::to_string(sum);
    }
    else if (command == "exit")
    {
        should_exit = true;
        return "Program exiting.";
    }

    return "Bad input.";
}

bool CommandLineIO::shouldExit() const
{
    return should_exit;
}
