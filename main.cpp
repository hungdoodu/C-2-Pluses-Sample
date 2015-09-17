 #include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double stuff;
    cout << "Give me some input , please: " << flush;
    cin >> stuff;





     //prints 12.40
    if (stuff<0.0001)
    {
      cout << "That number is too small. Using 0.0001 instead.\n";
      stuff = 0.0001;
    }

    int n=1;
    double result = 4.00f;
    double tmp =4.00f;
    cout << "1:4" << endl;



    while (tmp/(2*n+1)>stuff)
    {
        //check if n is odd <=> 2*n+1 = 3, 7 , 11
        if (n % 2 == 1)
        {
            result = result - (tmp/(2*n+1));

        }
        else
        //if n is oven
        {
            result = result + (tmp/(2*n+1));

        }
        n=n+1;
       printf("%.5f\n", result);
    }

    return 0;
}
