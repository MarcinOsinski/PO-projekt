#ifndef SENSORSIMULATOR_H
#define SENSORSIMULATOR_H


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>


using namespace std;

class SensorSimulator
{
private:
    double temp1, temp2, temp3, temp4;

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
};

#endif // SENSORSIMULATOR_H
