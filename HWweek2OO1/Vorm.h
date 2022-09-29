/*
 * Vorm.h
 *
 *  Created on: 11 Sep 2022
 *      Author: Rachid
 */

#ifndef VORM_H_
#define VORM_H_
#include <iostream>
using namespace std;
#include "math.h"
class Vorm {
public:

	virtual double getOppervlakte(){
		return 0.0;
	}

	virtual double getSomGraden(){
		return 0.0;
	}


	Vorm();
	virtual ~Vorm();
};

#endif /* VORM_H_ */
