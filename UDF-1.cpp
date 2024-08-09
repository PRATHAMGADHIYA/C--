#include <iostream>
using namespace std;


int sum(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() 
{
    int a,b, result,choice;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Press1 for sum" <<choice<<endl;
    cout <<" Press2 for subtraction" <<choice<<endl;
    cout <<" Press3 for multiply" <<choice<<endl;
    cout <<"Press4 for division" <<choice<<endl;
    cout << "Enter  your choice";
    cin >> choice;
 
 
    switch (choice) 
	{
        case1:
            result = sum(a,b);
            cin >> choice;
            break;
        case2:
            result = subtract(a,b);
            break;
        case3:
            result = multiply(a,b);
            break;
        case4:
            result = divide(a,b);
            break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    return 0;
}


int add(int a, int b) 
{
    return a + b;
}


int subtract(int a, int b)
{
    return a - b;
}


int multiply(int a, int b) 
{
    return a * b;
}


int divide(int a, int b) 
{
    return a / b;
}

