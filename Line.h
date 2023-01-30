#ifndef LINE_H
#define LINE_H
#include "Shapes.h"
#pragma once
#include <iostream>
class Line : public Shapes
{
public:
    Line(int r) : Shapes{r} {}
    virtual ~Line() {}
};

#endif