#include<iostream>
#include<queue>	//STL������� 
using namespace std;
int main()
{
	queue <int> q;  //����int�Ͷ���q 
	q.push(1);	//Ԫ����� 
	q.push(2);
	q.push(6);
	q.push(9);
	cout<<q.size()<<endl;	//�鿴���д�С 
	cout<<q.empty()<<endl;	//�鿴�����Ƿ�Ϊ�ա�Ϊ�����1����Ϊ�����0 
	cout<<q.front()<<endl;	//�鿴���е�һ��Ԫ�� �����ף� 
	cout<<q.back()<<endl;	//�鿴���� ���һ��Ԫ�� ����β�� 
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();  //����Ԫ�� 
	}
	return 0;
 } 
