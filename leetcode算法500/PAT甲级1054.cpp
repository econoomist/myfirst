#include<iostream>
#include<map>
using namespace std;
int main()
{
    int color,M,N,result=0;
    map<long long int,long int> count;
    cin >> M >> N;
    //����һ������������Ŵ������ֲ���������ջ�� stack ���齫��ǳ�����ջ���  ����ᱨ�� 
    for(int i=0;i<M*N;i++){  // ֱ��ͳ�Ʒ���map�� ���ô洢���� 
    cin>>color;
    if(count.find(color)==count.end())
        count.insert(make_pair(color,1));
    else
        count[color] = count[color] + 1;
    }
    
    map<long long int,long int>::iterator p= count.begin();
    map<long long int,long int>::iterator res_p= count.begin();
    for(;p!=count.end(); p++)
    {
        if(p->second > result){
            result = p->second;
            res_p = p;}
    }
    cout << res_p->first;
}
