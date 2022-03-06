
#include <iostream>
#include "headers/Header.h"

int main()
{
    char quit = ' ';

    NameSpace::Rectangle r;
    NameSpace::Rectangle& r_ref = r;

    NameSpace::Circle c;
    NameSpace::Circle& c_ref = c;

    bool recEntered = false;
    bool cirEntered = false;
    

    while (quit != 'q') {

        std::cout << "\n\n\n\n" << std::endl;
        std::cout << "press A for entering values for the width and length of the rectangle" << std::endl;
        std::cout << "press B for calculating area of the rectangle" << std::endl;
        std::cout << "press C for calculating parameter of the rectangle" << std::endl;
        std::cout << "============================================================" << std::endl;
        std::cout << "press D for entering radius of the circle" << std::endl;
        std::cout << "press E for calculating area of the circle" << std::endl;
        std::cout << "press F for calculating parameter of the circle" << std::endl;
        std::cout << "============================================================" << std::endl;
        std::cout << "press G to resize the rectangle" << std::endl;
        std::cout << "press H to resize the circle" << std::endl;
        std::cout << "============================================================" << std::endl;
        std::cout << "press I to print the rectangle information" << std::endl;
        std::cout << "press J to print the circle information" << std::endl;
        std::cout << "============================================================" << std::endl;
        std::cout << "press anything else to quit\n\n\n\n" << std::endl;
        std::cin >> quit;

        

        switch (quit) {

        case 'A':
        case 'a':

            std::cout << "please enter the value for the length: " << std::endl;
            std::cin >> r.sideA;
            std::cout << "please enter the value for the width: " << std::endl;
            std::cin >> r.sideB;

            recEntered = true;

            break;

        case 'B':
        case 'b':

            if (recEntered)
            {
                r.area = NameSpace::recArea(r_ref);
                std::cout << "the area is : " << r.area << std::endl;
                std::cin.get();
            }
            else
                std::cout << "please enter the value for the sides first" << std::endl;

            break;

        case 'C':
        case 'c':
            
            if (recEntered)
            {
                r.parameter = NameSpace::recParam(r_ref);
                std::cout << "the parameter is : " << r.parameter << std::endl;
                std::cin.get();
            }                
            else
                std::cout << "please enter the value for the sides first" << std::endl;

            break;

        case 'D':
        case 'd':

            std::cout << "please enter the value for the radius: " << std::endl;
            std::cin >> c.radius;

            cirEntered = true;

            break;

        case 'E':
        case 'e':

            if (cirEntered)
            {
                c.area = NameSpace::cirArea(c_ref);
                std::cout << "the area is : " << c.area << std::endl;
                std::cin.get();
            }                
            else
                std::cout << "please enter the value for the radius first" << std::endl;

            break;

        case 'F':
        case 'f':

            if (cirEntered)
            {
                c.parameter = NameSpace::cirParam(c_ref);
                std::cout << "the parameter is : " << c.parameter << std::endl;
                std::cin.get();
            }                
            else
                std::cout << "please enter the value for the radius first" << std::endl;

            break;

        case 'G':
        case 'g':

            if (recEntered) {
                int value;
                std::cout << "please enter the value to be multiplied by" << std::endl;
                std::cin >> value;

                NameSpace::resize(r_ref, value);
            }
            else
                std::cout << "please enter the value for the sides first" << std::endl;

            break;

        case 'H':
        case 'h':

            if (cirEntered) {
                int value;
                std::cout << "please enter the value to be multiplied by" << std::endl;
                std::cin >> value;

                NameSpace::resize(c_ref, value);
            }
            else
                std::cout << "please enter the value for the sides first" << std::endl;

            break;

        case 'I':
        case 'i':

            NameSpace::printOut(r_ref);

            break;

        case 'J':
        case 'j':

            NameSpace::printOut(c_ref);

            break;

        default:
            quit = 'q';
        }

    }


    std::cout << "you have quit" << std::endl;
    std::cin;
    return 0;
    /*
        NameSpace::Rectangle r;
    NameSpace::Rectangle& r_ref = r;
    r.sideA = 3;
    r.sideB = 5;
    r.area = NameSpace::recArea(r_ref);
    r.parameter = NameSpace::recParam(r_ref);
    NameSpace::printOut(r);

    NameSpace::Circle c;
    NameSpace::Circle& c_ref = c;
    c.radius = 3;
    c.area = NameSpace::cirArea(c);
    c.parameter = NameSpace::cirParam(c);
    NameSpace::printOut(c);
    */
    
}
