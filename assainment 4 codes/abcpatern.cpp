#include <iostream>
using namespace std;
int main()
{int n;
char ch;
cout<<"Please Enter number"<<endl;
cin>>n;
for(int i= 1;i<=n;i++)
{
ch='a';
for(int j=i;j<=n;j++)
{cout<<"  ";}
for(int j=1;j<=i;j++)
{cout<<" "<<ch;
ch++;}
cout<<endl;}

system("pause");
return 0;
}
	