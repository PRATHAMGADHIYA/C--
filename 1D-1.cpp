#include <iostream>
using namespace std;

int main() 
{
    int arr[100]; 
    int size = 0;   
	int index, value;

    cout << "Enter the number of elements in the array:";
    cin >> size;
    cout << "Enter" << size << "elements for the array:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << "Enter element" << i << ":";
        cin >> arr[i];
    }

    cout << "Enter the index where you want to insert the value:";
    cin >> index;
    
    cout << "Enter the value you want to insert:";
    cin >> value;
    
    for (int i = size; i > index; --i) 
	{
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    ++size; 

    cout <<"Array after insertion:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

