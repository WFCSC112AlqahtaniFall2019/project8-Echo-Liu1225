//
// Created by 刘颖恒 on 2019/11/21.
//

#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

//default constructor
Data::Data() {
    country = "";
    Rank = 0.0;
    Score = 0.0;
    GDP = 0.0;
    Expectancy = 0.0;
}
// alternate constructor
Data::Data(string a, double b, double c, double d, double e) {
    country = a;
    Rank = b;
    Score = c;
    GDP = d;
    Expectancy = e;

}

//outstream operator
ostream& operator<<(ostream& os, const Data& pr) {
    os << pr.country << ": " << pr.Rank<< ", " << pr.Score<< "," << pr.GDP << ", "<< pr.Expectancy;
    return os;
}


bool operator>(const Data& hr, const Data &x) {
    return hr.GDP>x.GDP;
}

bool operator>=(const Data& hr, const Data &x) {
    return hr.GDP>x.GDP;
}

bool operator < (const Data& hr, const Data &x) {
    return hr.GDP < x.GDP;
}