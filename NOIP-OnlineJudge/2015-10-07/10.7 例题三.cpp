#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cout<<"�����һ����������" ;
	cin>>x;
	cout<<"����ڶ�����������";
	cin>>y;
	if(x>y)
	{
		cout<<"���������������ǣ�"<<x<<endl; 
		system("pause");
		return 0;
	}else if(x==y)
	{
		cout<<"��������һ����"<<endl;
		system("pause");
		return 0;
	}else if(x<y)
	{
		cout<<"���������������ǣ�"<<y<<endl;
		system("pause");
		return 0;
	}
	else
	return 0; 
}
