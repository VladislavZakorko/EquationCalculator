//
//  main.cpp
//  EquationCalculator
//
//  Created by Владислав Закорко on 10.03.2023.
//

#include <iostream>
#include <cmath>

int DoubleEntry()
{
    double N;
    do{
        if ((std::cin >> N).good())
            return N;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cout << "The number is not a double. Try entering again:" << std::endl;
        }
    } while(true);
}

int main()
{
    
    std::cout << "This program finds the real roots of a quadratic equation of the form:\nax^2 + bx + c = 0" << std::endl;
    
    double a = 0, b = 0, c = 0;
    
    do{
        std::cout << "Enter a: ";
        a = DoubleEntry();
        if (a==0)
        {
            std::cout << "This program solves only quadratic equations, enter a different from 0" << std::endl;
            continue;
        }
        std::cout << "Enter b: ";
        b = DoubleEntry();
        std::cout << "Enter c: ";
        c = DoubleEntry();
        
    } while(a == 0);
    
    std::cout << "The introduced equation is:\n" << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    
    double D = b * b - 4 * a * c;
    std::cout << "The discriminant of the equation is: " << D << std::endl;
    
    if(D == 0)
    {
        double x = -b / (2 * a);
        std::cout << "The root of the equation is\nx=" << x << std::endl;
        return 0;
    }
    
    if(D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "The roots of this equation are\nx1=" << x1 << "\nx2=" << x2 << std::endl;
        return 0;
    }
    
    if(D < 0)
    {
        std::cout << "The discriminant is less than 0. This quadratic equation has no real roots." << std::endl;
        return 0;
    }
        
    return 1;
}
