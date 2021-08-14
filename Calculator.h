//
// Created by korisd on 8/14/21.
//

#ifndef TEACHING_WISH_CALCULATOR_H
#define TEACHING_WISH_CALCULATOR_H


#include <vector>

class Calculator
{

public:
    int addNumbers(int lhs, int rhs);

    int subNumbers(int lhs, int rhs);

    int sumNumbers(std::vector<int> numbers);

protected:
    int x;
private:
    int y;
};

//class Car
//{
//public:
//    void accelerate();
//    void steer(int direction);
//protected:
//    Radio radio;
//private:
//    Engine engine;
//    Steering steering;
//};
//
//class FordFocus : public Car
//{
//public:
//    void turnUpRadio();
//};


#endif //TEACHING_WISH_CALCULATOR_H
