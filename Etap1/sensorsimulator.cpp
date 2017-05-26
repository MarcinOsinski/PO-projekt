#include "sensorsimulator.h"

using namespace std;

SensorSimulator::SensorSimulator()
{
    srand(time(NULL));

    temp1 = (double)(rand() % 300) / 10;
    temp2 = (double)(rand() % 300) / 10;
    temp3 = (double)(rand() % 300) / 10;
    temp4 = (double)(rand() % 300) / 10;
}

SensorSimulator::~SensorSimulator()
{}

double SensorSimulator::get_temp1()
{
    return temp1;
}

double SensorSimulator::get_temp2()
{
    return temp2;
}

double SensorSimulator::get_temp3()
{
    return temp3;
}

double SensorSimulator::get_temp4()
{
    return temp4;
}


double SensorSimulator::delta()
{
    return (double)( - 5 + (rand() % 10)) / 10;
}

void SensorSimulator::write_to_file(vector<double> &vector_to_write)
{
    for(size_t i = 0; i < vector_to_write.size(); i++)
    {
        file << vector_to_write[i];
        file << ", ";
    }

    file << "\n\n";

}

void SensorSimulator::generate_temp(double previous_temp1, double previous_temp2,
                                        double previous_temp3, double previous_temp4, int how_many)
{
    file.open("Generated temps.txt", ios::out | ios::trunc);

    for (int a = 0; a < how_many; a++)
    {
        temp1 = previous_temp1 + delta();
        temps1.push_back(temp1);
    }
    write_to_file(temps1);

    for (int b = 0; b < how_many; b++)
    {
        temp2 = previous_temp2 + delta();
        temps2.push_back(temp2);
    }
    write_to_file(temps2);

    for (int c = 0; c < how_many; c++)
    {
        temp3 = previous_temp3 + delta();
        temps3.push_back(temp3);
    }
    write_to_file(temps3);

    for (int d = 0; d < how_many; d++)
    {
        temp4 = previous_temp4 + delta();
        temps4.push_back(temp4);
    }
    write_to_file(temps4);

    file.close();

    if(temps1.size() == 10)
        temps1.erase(temps1.begin());

    if(temps2.size() == 10)
        temps2.erase(temps2.begin());

    if(temps3.size() == 10)
        temps3.erase(temps3.begin());

    if(temps4.size() == 10)
        temps4.erase(temps4.begin());
}
