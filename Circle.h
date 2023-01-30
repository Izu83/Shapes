#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shapes.h"
#pragma once

class Circle : public Shapes
{
public:
    Circle(int r);
    virtual ~Circle() {}
    virtual void draw() override;
    double dou_radius = radius;
};

#endif