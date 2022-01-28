#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int val;

///    val = true;       ///Non Zero
///    val = false;      //Zero
//    val = 0;
    val = -100;

    if(val)
    {
        puts("Worked");
    }
    else {
        puts("Not Worked");
    }

    printf("val : %d\n",val);

    return 0;
}
