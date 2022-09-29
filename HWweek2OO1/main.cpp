/*
 * main.cpp
 *
 *  Created on: 11 Sep 2022
 *      Author: Rachid
 */



/*
 * Do not adapt this file!!!
 */
#include "Driehoek.h"
#include "Rechthoek.h"

#include <iostream>

int main()
{
    Vorm *driehoek  = new Driehoek( 6.0, 8.0 );
    Vorm *rechthoek = new Rechthoek( 6.0, 8.0 );

    std::cout << driehoek ->getOppervlakte() << " " << driehoek ->getSomGraden() << std::endl;
    std::cout << rechthoek->getOppervlakte() << " " << rechthoek->getSomGraden() << std::endl;

    delete driehoek;
    delete rechthoek;

    return 0;
}
