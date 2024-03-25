#include <iostream>
#include "syringe.h"
using namespace std;
syringe SYR;
int main ()
{
    cout << "type" << "\t" << "dose" << "\t" << "number" << "\t" << "Single_Injection_Dose" << endl;
    for (int i = 1; i <= 18; i++)
    {
        SYR.opreate (1,0.8,i*10);
    }
    for (int i = 1; i <= 18; i++)
    {
        SYR.opreate (3,2,i*10);
    }
    for (int i = 1; i <= 18; i++)
    {
        SYR.opreate (3,3,i*10);
    }
    for (int i = 1; i <= 18; i++)
    {
        SYR.opreate (5,4,i*10);
    }
    for (int i = 1; i <= 18; i++)
    {
        SYR.opreate (5,5,i*10);
    }


    return 0;
}
