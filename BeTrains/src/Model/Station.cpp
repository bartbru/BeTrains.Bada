/*
 * Station.cpp
 *
 *  Created on: 21-nov-2010
 *  Author: Bart Bruynooghe
 */

#include "Model/Station.h"

Station::~Station() {
}

int Station::getLatitude(){
	return latitude;
}
int Station::getLongtitude(){
	return longtitude;
}
String Station::getCountry(){
	return country;
}
String Station::getName(){
	return name;
}
