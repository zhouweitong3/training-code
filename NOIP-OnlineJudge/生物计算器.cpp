#include<iostream>
#include <ctype.h>
#include <ctype.h>
using namespace std;
int main()
{
	loop1:long double i=0,a=0,b=0,resulta=0,resultb=0;
    cout<<"�����백��������";
    cin>>a;
    if(a<0)
    {
    	cout<<"������������"<<endl;
    	system("pause");
    	cout<<""<<endl;
        goto loop1;
	}
	else if()
    cout<<""<<endl;
    cout<<"��������������";
    cin>>b;
    cout<<""<<endl;
    if(a==b)
        {
        	cout<<"��ʱ�޷������ļ����������������ݣ�"<<endl;
        	cout<<""<<endl;
        	system("pause");
        	cout<<""<<endl;
        	goto loop1;
		}
        else if(a<b)
        {
        	cout<<"����������������޷����㣬�������������ݣ�"<<endl;
        	cout<<""<<endl;
        	system("pause");
        	cout<<""<<endl;
        	goto loop1;
		}
    resulta=a-b;
    resultb=b;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"�ļ���Ϊ��"<<resulta<<endl;
    cout<<""<<endl;
    cout<<"������С��Ŀ��"<<resultb<<endl;
    cout<<""<<endl;
    cout<<"�Ȼ���С��Ŀ��"<<resultb<<endl;
    cout<<""<<endl;
    system("pause");
    return 0;
}
