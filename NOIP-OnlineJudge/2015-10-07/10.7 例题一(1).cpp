#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cout<<"����a��ֵΪ��";
	cin>>a;
	cout<<"����b��ֵΪ��";
	cin>>b;
	c=b;
	b=a;
	a=c;
	cout<<"�������aΪ��"<<a<<endl;
	cout<<"�������bΪ��"<<b<<endl;
	system("pause");
	return 0;
 } 
