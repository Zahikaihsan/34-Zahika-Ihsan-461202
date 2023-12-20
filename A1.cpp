// Zahika Ihsan 
#include <iostream>
using namespace std;
int main ()
{
	int x;
	cout<<"Enter the size of the longest string.";
	cin>>x;
	char Array1[x+1],Array2[x+1];
	cout<<"Enter the elements of first and second string.";
	cin>>Array1;
	cin>>Array2;
	int count=0;
	for (int i=0;i<=x;i++)
	{if (Array1[i]!=Array2[i])
	count++;
	}
	if (count==0)
{for (int j=0;j<=x/2;j++)
swap (Array1[j],Array2[x-j]);
for (int j=0;j<=x;j++)
cout<<Array1[j]<<endl;
cout<<"Strings made unequal by rotating one.";
cout<<""<<endl;
}
else cout<<"The strings are unequal."<<endl;
return 0;
	}
