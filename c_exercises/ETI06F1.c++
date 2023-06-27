#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    

    double r, d, h, sol2;
    const double pi = 3.14159265359;
   
        cin >> r >> d;

        h = (r*r) - ((d/2)*(d/2));

        sol2 = pi * h ;

        cout << fixed << setprecision(2)<< sol2 << endl;

    
	
	return 0;
}