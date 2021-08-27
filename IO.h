//
// Created by amora on 8/21/2021.
//

#ifndef TEACHING_WISH_IO_H
#define TEACHING_WISH_IO_H

class IO
{
public:
    virtual std::string receiveInput(std::string nums) = 0;
    virtual bool shouldExit() const = 0;
};

#endif //TEACHING_WISH_IO_H
