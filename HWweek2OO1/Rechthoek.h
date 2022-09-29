/*
 * Rechthoek.h
 *
 *  Created on: 11 Sep 2022
 *      Author: Rachid
 */

#ifndef RECHTHOEK_H_
#define RECHTHOEK_H_
#include <iostream>
using namespace std;
#include "Vorm.h"
#include "math.h"


class Rechthoek : Vorm {
private: double breedte;
		 double hoogte;
public:
	Rechthoek(double breedte, double hoogte);
	double getOppervlakte(){
			return breedte * hoogte;
		}

	double getSomGraden(){
		return atan2 (hoogte, breedte);
	}

	virtual ~Rechthoek();




};

#endif /* RECHTHOEK_H_ */
