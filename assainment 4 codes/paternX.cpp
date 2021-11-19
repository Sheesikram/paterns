#include <iostream>
using namespace std;
int main()
{int n;
cout<<"Please Enter the number (limit)"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{for(int j =1;j<=n;j++)
{if (i==j||i+j==n+1)//this will print only
cout<<"* ";
else
cout<<"  ";
}cout<<endl;
		
	
}
	
	
	
system("pause");
return 0;	
}
