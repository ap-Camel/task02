
#include <iostream>
#include "headers/Header.h"

int main()
{
    NameSpace::Rectangle r;
    NameSpace::Rectangle& r_ref = r;
    r.sideA = 3;
    r.sideB = 5;
    r.area = NameSpace::recArea(r_ref);
    r.perimeter = NameSpace::recPerim(r_ref);
    NameSpace::printOut(r);

    NameSpace::Circle c;
    NameSpace::Circle& c_ref = c;
    c.radius = 3;
    c.area = NameSpace::cirArea(c);
    c.perimeter = NameSpace::cirPerim(c);
    NameSpace::printOut(c);
}
