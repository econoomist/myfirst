#include<iostream>
#include<map>
using namespace std;
int main()
{
    int color,M,N,result=0;
    map<long long int,long int> count;
    cin >> M >> N;
    //定义一个数组用来存放次数，局部变量放在栈区 stack 数组将会非常长，栈溢出  编译会报错 
    for(int i=0;i<M*N;i++){  // 直接统计放入map中 不用存储数据 
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
