#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0;
	cout<<"������һ����ݣ�";
	cin>>a;
	b=a%400;
	c=a%4;
	d=a%100;
	if(d==0)
	{
		if(b==0)
		{
			cout<<"����Ϊ���꣡"<<endl;
	        system("pause");
	        return 0;
		}else 
		cout<<"���겻�����꣡"<<endl;
	    system("pause");
	    return 0;	
	}else if(c==0)
	{
		cout<<"����Ϊ���꣡"<<endl;
		system("pause");
		return 0;
	}else
    cout<<"���겻�����꣡"<<endl;
	system("pause");
	return 0;
	
}
