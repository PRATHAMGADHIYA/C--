#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	  {
	  	if(i == 1 || i == 4)
	  	{
	  		cout <<"* * * * *" <<endl;
		}
		else
		{
			cout <<"*       *" <<endl;
		}
	  }
	 
	  
	  for(i=1;i<=7;i++)
	  {
	  	if(i == 1 || i == 4 || i == 7)
	  	{
	  		cout <<"*****" <<endl;	
		}
		else
		{
			cout <<"*    *" <<endl;
		}
		cout << endl;
	  }	
	  cout <<"\n\n\n" <<endl;
	   return 0;
}

