#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,n=0,sum=0;
	cout<<"������һ����λ������";
	cin>>n;
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	sum=a+b+c;
	cout<<"��λ����ÿλ���ֵ��ۼӺ�Ϊ��"<<sum<<endl;
	system("pause");
	return 0;
}
