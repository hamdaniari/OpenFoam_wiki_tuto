#include <iostream>
#include "basic5.H"
using namespace std;

main()
{
double d1=2.1;
double d2=3.7;
cout << "average: " << average(d1,d2) << endl;
}
double average (double x1, double x2)
{
    int nvalues = 2;
    return (x1+x2)/nvalues;
}
