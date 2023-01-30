#include "Square.h"
#include <iostream>
void Square::draw()
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "#";
        }
        std::cout << '\n';
    }
}