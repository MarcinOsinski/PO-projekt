#ifndef SENSORSIMULATOR_H
#define SENSORSIMULATOR_H


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class SensorSimulator
{
private:
    double temp1, temp2, temp3, temp4;
    double min, max;

    vector<double>temps1;
    vector<double>temps2;
    vector<double>temps3;
    vector<double>temps4;

    fstream file;

    void write_to_file(vector<double> &vector_to_write);
    double delta();

public:
    SensorSimulator();
    ~SensorSimulator();

    void generate_temp(double previous_temp1, double previous_temp2,
                       double previous_temp3, double previous_temp4,
                       int how_many);

    double get_temp1(), get_temp2(), get_temp3(), get_temp4();
    double get_temps1(int index), get_temps2(int index), get_temps3(int index), get_temps4(int index);
    double get_min(), get_max();
};

#endif // SENSORSIMULATOR_H
