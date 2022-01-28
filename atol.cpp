// CPP program to illustrate
// working of atol() function.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char array of numbers
    char str1[] = "5672345";

    // Function calling to convert to a long int
    long int num1 = atol(str1);

    cout << "Number is " << num1 << "\n";

    // char array of numbers of spaces
    char str2[] = "134543563  8  ";

    // Function calling to convert to a long int
    long int num2 = atol(str2);

    cout << "Number is " << num2 << "\n";
    return 0;
}
