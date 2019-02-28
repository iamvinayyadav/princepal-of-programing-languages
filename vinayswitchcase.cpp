#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	char c;
	cout<<"enter two numbers";
	cin>>a>>b;
	cout<<"enter operation";
	cin>>c;
   cout<<"result of two no. is";	
switch(c){
case'+':
	cout<<a+b;
break;
case'-':
	cout<<a-b;
break;
case'*':
	cout<<a*b;
break;
case'/':
	cout<<a/b;
break;
case'%':
cout<<a%b;
break;
}
return 0;
}
