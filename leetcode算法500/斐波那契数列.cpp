#include<iostream>
#include<map>
#include<time.h>
clock_t start,end;
using namespace std;
//��¥�� 
//����������¥��, ÿ�ο�����һ��������,����n��¥���ж�������
//f(n)=f(n-1)+f(n-2) �����n��ʱ���߷�
//f(1)��ȻΪ1,f(2)������������߷�

//������õݹ�ʵ�� 
int louti(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else return louti(n-1)+louti(n-2);
} 
//�ݹ�ʵ�ּ��������� 


//���ǵ�f�ᱻ�ظ�����,������������,��ô�Ϳ��Բ��ظ�������
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
	cout << "����n"<<endl;
	cin >> n;
	start = clock();
	cout << louti(n)<<endl;
	end = clock();
	cout <<"����ʱ��:" <<  ((double)(end-start))/CLK_TCK<<endl;
	
	start = clock();
	cout << louti_map(n)<<endl;	
	end = clock();
	cout <<"����ʱ��:" << ((double)(end-start))/CLK_TCK;
	
 } 
