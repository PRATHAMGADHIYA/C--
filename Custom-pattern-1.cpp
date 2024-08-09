#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			if(k==1 ||k==3)
			{
			  cout << k;
		    }
		else
		{
			cout << j;
		}
	  }
	  cout << endl;
	}
	return 0;
}
