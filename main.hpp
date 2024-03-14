
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int value;
         
        value = rand() % 100;

        return value;


        /***************************************************
         * Code your program here
         ***************************************************/
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/
        int med;

        if ((rdnum1 < rdnum2) && (rdnum1 > rdnum3))
        {
                med = rdnum1;
        }

        if ((rdnum2 < rdnum1) && (rdnum2 > rdnum3))
        {
                med = rdnum2;
        }

        if ((rdnum3 < rdnum1) && (rdnum3 > rdnum2))
        {
                med = rdnum3;
        }


        return med;
}