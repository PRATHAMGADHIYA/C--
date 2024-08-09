#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
//	P //

	for(i=1;i<7;i++)
	{
			if(i == 1 ||i == 4)
			{
				cout <<"* * * *";
			}
			else if(i == 2 || i == 3)
			{
				cout <<"*      *";
			}
			else
			{
				cout <<"*";
			}
			system("Color 4"); 
		cout << endl;
	  }
		cout <<"\n\n\n";
		
//		R //
	  for(i=1;i<=7;i++)
	  {
	  	if(i == 1 || i == 4)
	  	{
	  		cout <<"* * * *" <<endl;
		}
		else if(i == 2 || i == 3)
		{
			cout <<"*      *" <<endl;
		}
		else if(i == 5)
		{
			cout <<"* *" <<endl;	
		}
		else if(i == 6)
		{
			cout <<"*   *" <<endl;
		}
		else
		{
			cout <<"*     *" <<endl;
		}
		
	  }
	   cout <<"\n\n\n";
//	   A //
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
	  cout <<"\n\n\n";
//	  T //
	  for(i=1;i<=7;i++)
	  {
	  	if(i == 1)
	  	{
			cout <<"* * * * *" <<endl;
		}
		else
		{
			cout <<"    *" <<endl;
		}
	  }
	  cout <<"\n\n\n";
//	  H //
	  for(i=1;i<=7;i++)
	  {
	  	if(i == 4)
	  	{
	  		cout <<"* * * * *" <<endl;	
		}
		else
		{
			cout <<"*       *" <<endl;
		}
	  }
	  cout <<"\n\n\n";
//	  A
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
	  cout <<"\n\n\n";
//	  M //
	  for(i=1;i<=7;i++)
	  {
	  	if(i == 1)
	  	{
	  		cout <<"      *     *" <<endl;	
		}
		else if(i == 2)
		{
			cout <<"     * *   * *" <<endl;
		}
		else if(i == 3)
		{
			cout <<"    *   * *   *" <<endl;
		}
		else if(i == 4)
		{
			cout <<"   *     *     *" <<endl;
		}
		else if(i == 5)
		{
			cout <<"  *             *" <<endl;
		}
		else if(i == 6)
		{
			cout <<" *               *" <<endl;
		}
		else
		{
			cout <<"*                 *" <<endl;
		}
	  }
	return 0;	
}
