#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue <int> pq;  //���� priority_queue �������ȶ��� 
	pq.push(1);
	pq.push(5);
	pq.push(3);
	pq.push(9);
	cout<<pq.size()<<endl;
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		/*���ȶ��е��ص㣺Ԫ���Զ�����
		���ʱ���ɴ�С���*/ 
		pq.pop();
	}
	return 0;
}
