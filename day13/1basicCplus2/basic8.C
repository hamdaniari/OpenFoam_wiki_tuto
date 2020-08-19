#include <iostream>
using namespace std;
#include "tensor.H"
#include "symmTensor.H"
using namespace Foam;

int main()
{
tensor t1(1,2,3,4,5,6,7,8,9);
//cout << t1 << endl; cannot be compiled when trying to print t1
cout << "t1[0]: " << t1[0] << endl;
symmTensor st1(1,2,3,4,5,6);
//cout << st1 << endl;
cout << "st1[5]: " << st1[5] << endl;
return 0;
}

//g++ -std=c++0x basic8.C -DWM_DP -DWM_LABEL_SIZE=32 -I$FOAM_SRC/OpenFOAM/lnInclude -L$FOAM_LIBBIN/libOpenFOAM.so -o basic8; ./basic8
