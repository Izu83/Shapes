#include <iostream>
#include <string>
#include <iomanip>
#include "Shapes.h"
#include "Circle.h"
#include "Up_Line.h"
#include "Line.h"
#include "Right_Line.h"
#include "Square.h"


int main()
{
    std::string op{};
    do
    {
        std::cout<<"===========================\n1.Line\n2.Square\n3.Circle\n4.Exit\n===========================\n";
        std::cin>>op;
        if(op == "1")
        {
            system("cls");
            std::cout<<"Vertical Line: \n";
            std::cout<<"Enter the cm's you want your vertical line to be: ";
            int w{};
            std::cin>>w;
            Line *up = new Up_Line{w};
            up->draw();
            std::cout<<"\n\n===================================\n\n";
            std::cout<<"\n\n\nHorizontal Line:\n";
            std::cout<<"Enter the cm's you want your horizontal line to be: ";
            int h{};
            std::cin>>h;
            Line *right = new Right_Line{h};
            right->draw();
            std::cout<<"\n\n\n\n\n";
            system("pause");
            system("cls");
        }
        else if(op == "2")
        {
            system("cls");
            std::cout<<"Square: \n";
            std::cout<<"Enter the height: ";
            int height{};
            std::cin>>height;
            std::cout<<"Enter the width: ";
            int width{};
            std::cin>>width;
            Shapes *sqr = new Square{height, width};
            sqr->draw();
            std::cout<<"\n\n\n\n\n";
            system("pause");
            system("cls");
        }
        else if(op == "3")
        {
            system("cls");
            std::cout<<"Circle: \n";
            std::cout<<"Enter the radius: ";
            int radius{};
            std::cin>>radius;
            Shapes *circ = new Circle{radius};
            circ->draw();
            std::cout<<"\n\n\n\n\n";
            system("pause");
            system("cls");
        }
        else
        {
            std::cout<<"\n\n\nInvalid!\n\n\n";
        }
    } while(op != "4");
    return 0;
}