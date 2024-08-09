#include <iostream>
using namespace std;

int primenum(int a, int i = 2)
{
    if (a <= 2) {
        return (a == 2) ;
    }
    if (a % i == 0) 
	{
     	return 0;
    }
    if (i * i > a) 
	{
        return 1;
    }
    return primenum(a, i + 1);
}

int Primenumber(int n) 
{
    if (n <= 1) {
        return 0;
    }
    Primenumber(n - 1);
    if (primenum(n)) 
	{
        cout << n << " ";
    }
}

int main() 
{
    cout << "Prime numbers between 1 and 50 are:" << endl;
    Primenumber(50);
    cout << endl;
    return 0;
}

