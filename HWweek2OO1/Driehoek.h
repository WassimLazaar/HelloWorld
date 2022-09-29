/*
 * Driehoek.h
 *
 *  Created on: 11 Sep 2022
 *      Author: Rachid
 */

#ifndef DRIEHOEK_H_
#define DRIEHOEK_H_
#include <iostream>
using namespace std;
#include "Vorm.h"
#include "Math.h"

class Driehoek : Vorm {
private: double breedte;
		 double hoogte;
public:
	Driehoek(double breedte, double hoogte);
	double getOppervlakte(){
				return breedte * hoogte * 0.5;
			}
	double getSomGraden(){
			return atan2 (hoogte, breedte);
		}
	virtual ~Driehoek();
};

#endif /* DRIEHOEK_H_ */
