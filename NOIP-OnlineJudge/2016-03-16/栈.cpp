#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(9);
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;  //�ǿ�Ϊ0����Ϊ1 
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
