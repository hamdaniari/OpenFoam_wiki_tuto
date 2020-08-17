#include <iostream>
using namespace std;
#include "tensor.H"
#include "symmTensor.H"
using namespace Foam;

int main()
{
tensor t1(1,2,3,4,5,6,7,8,9);
cout << "t1[0]: " << t1[0] << endl;
symmTensor st1(1,2,3,4,5,6);
cout << "st1[5]: " << st1[5] << endl;
return 0;
}
