#ifndef FSTREAM
#define FSTREAM
#include <fstream>
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef CMATH
#define CMATH
#include <cmath>
#endif

#ifndef VECTOR
#define VECTOR
#include <vector>
#endif

#define PI 3.14159265

const double kB = 8.61707e-5;
const int liczba=500;
//std::string name_of_control_file="control_file.dat";
extern std::ofstream control_output;	//(name_of_control_file.c_str(),std::ios :: app);

//std :: ofstream control_output;
int myRound( double fValue);
double set_prec(double x, double prec = 4);

const int control_atom=99; //must be set to 0 if want see sth

double integral_data(std::vector<double> &X, std::vector<double> &Y, double a);
float CalculateTrapezoidArea(float sideA, float sideB, float height);
double rad2degree(double kat_in);
double degree2rad(double kat_in);
