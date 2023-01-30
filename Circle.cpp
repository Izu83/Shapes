#include "Circle.h"
#include <iostream>
#include <string>
#include <cmath>
Circle::Circle(int r)
    : Shapes{r}
{
}

void Circle::draw()
{
    for (int y = -dou_radius; y <= dou_radius; y++) {
        for (int x = -dou_radius; x <= dou_radius; x++) {
            if (std::sqrt(x*x + y*y) <= dou_radius) {
                std::cout << '#';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}