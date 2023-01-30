#ifndef RIGHT_LINE_H
#define RIGHT_LINE_H
#include "Line.h"
#pragma once

class Right_Line : public Line
{
public:
    Right_Line(int r) : Line{r} {}
    virtual void draw() override;
    virtual ~Right_Line() {}

private:

};

#endif