#ifndef SHAPES_H
#define SHAPES_H

#pragma once

class Shapes
{
public:
    Shapes(int r) : radius{r} {}
    virtual void draw() = 0;
protected:
    int radius{};
};

#endif