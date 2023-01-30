#include "Up_Line.h"
#include <iostream>
#include <string>

void Up_Line::draw()
{
    for(int i =1 ;i<=radius;i++)
    {
        std::cout<<"|\n";
    }
}