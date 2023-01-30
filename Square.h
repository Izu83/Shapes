#ifndef SQUARE_H
#define SQUARE_H
#include "Line.h"
#pragma once

class Square : public Line
{
public:
    int &width = radius;
    int height{};
    Square(int w, int h) : Line{w}, height{h}
    {

    }
    virtual void draw() override;
    virtual ~Square() {}

private:

};

#endif