//
// Created by amora on 8/21/2021.
//

#ifndef TEACHING_WISH_COMMANDLINEIO_H
#define TEACHING_WISH_COMMANDLINEIO_H

#include <string>
#include "IO.h"
#include "Calculator.h"

class CommandLineIO : public IO
{
public:
    CommandLineIO(Calculator calc);
    std::string receiveInput(std::string input) override;
    bool shouldExit() const override;
protected:
    std::string addNumbers(std::string nums);
    std::string subNumbers(std::string nums);
    std::string sumNumbers(std::string nums);
    std::string multNumbers(std::string nums);
private:
    Calculator calc;
    bool should_exit;
};


#endif //TEACHING_WISH_COMMANDLINEIO_H
