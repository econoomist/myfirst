#include<iostream>
#include<map>
#include<time.h>
clock_t start,end;
using namespace std;
//爬楼梯 
//假设正在爬楼梯, 每次可以爬一步或两步,问爬n级楼梯有多少爬法
//f(n)=f(n-1)+f(n-2) 到达第n层时的走法
//f(1)显然为1,f(2)则可以有两种走法

//下面采用递归实现 
int louti(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else return louti(n-1)+louti(n-2);
} 
//递归实现计算结果很慢 


//考虑到f会被重复调用,如果将结果保存,那么就可以不重复调用了
map<int,int> temp;
int louti_map(int n){
	//map<int,int> temp;
	int a,b;
	if(n==1) return 1;
	else if(n==2) return 2;
	else {
		
		if(temp.find(n-1) != temp.end() ) a=temp[n-1];
		else {
			a = louti_map(n-1);
			temp.insert(make_pair(n-1,a));
		}
		
		if(temp.find(n-2) != temp.end()) b=temp[n-2];
		else{
			b = louti_map(n-2);
			temp.insert(make_pair(n-2,b));
		}
		return a+b;
	}
	
}
	
	

int main()
{
	//map temp;
	int n;
	cout << "输入n"<<endl;
	cin >> n;
	start = clock();
	cout << louti(n)<<endl;
	end = clock();
	cout <<"计算时间:" <<  ((double)(end-start))/CLK_TCK<<endl;
	
	start = clock();
	cout << louti_map(n)<<endl;	
	end = clock();
	cout <<"计算时间:" << ((double)(end-start))/CLK_TCK;
	
 } 
