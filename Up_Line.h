#ifndef UP_LINE_H
#define UP_LINE_H
#include "Line.h"
#pragma once

class Up_Line : public Line
{
public:
    Up_Line(int r) : Line{r} {}
    virtual void draw() override;
    virtual ~Up_Line() {}

private:

};



#endif