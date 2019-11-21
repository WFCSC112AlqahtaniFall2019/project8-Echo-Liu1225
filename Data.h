//
// Created by 刘颖恒 on 2019/11/21.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H

#include <string>
#include <iostream>

using namespace std;

class Data {
public:
    Data ();
    Data(string a, double b, double c, double d, double e);
    friend ostream& operator<<(ostream& os, const Data& pr);
    friend bool operator >= (const Data& hr, const Data &x);
    friend bool operator < (const Data& hr, const Data &x);
    friend bool operator > (const Data& hr, const Data &x);

    string country;
    double Rank;
    double Score;
    double GDP;
    double Expectancy;

};


#endif //PROJECT7_DATA_H