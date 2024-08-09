#include <iostream>

using namespace std;

int i(int a,int i) 
{
    if (a <= 1) 
	{
     	cout <<endl;   
    }
    for (i = 2; i * i <= a; i++) 
	{
        if (a % i == 0) 
		{
          cout <<endl;
        }
    }
}

int main() 
{
	int i;
    cout << "Prime numbers between 1 and 50 are:" << endl;
    for (i = 2; i <= 50; i++) 
	{
        if (i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

