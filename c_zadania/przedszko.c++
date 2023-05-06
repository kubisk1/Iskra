#include<iostream>
using namespace std;

int NWD(int a, int b)
{
	int pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;  
  	}
    return a;
}

int main()
{
    
	unsigned int a, b, test;

    cin >> test;
    while(test--)
    {
	
        
        cin>>a>>b;
        
        //wyznaczenie NWW
        cout<<a/NWD(a, b)*b<<endl;
        
        // cin.ignore();
        // cin.get();
    }
	
	return 0;
}