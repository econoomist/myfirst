#include<iostream>
#include<vector>
#include<map>
#include<time.h>
#define Maxsize 100
clock_t start,stop;
using namespace std;
template<class T>
//int length(T& nums){
//	return sizeof(nums)/sizeof(nums[0]);
//}
//��������������ͨ���β����������鳤�ȣ�ԭ�� ���ڲ��� 
//vectorģ���ṩ size() ���� �������鳤�� 
int fun(T& nums,int target) {
	
	int length =  sizeof(nums)/sizeof(*nums) ;
	for(int i=0;i<length;i++){
	}
	return 0;
}


int main()
{
//	vector<int> arr;
//	arr.size();
//	int a[]={21,22,23,24,27};
//	fun(a,1);
//	cout << sizeof(*a)/sizeof( a[0] ) << endl;
//	cout << *a;

//������������ ǰ���������Ĵ�С 
	freopen("E:\\gith\\myfirst\\leetcode�㷨500\\����֮�Ͳ�������.txt","r",stdin);
	int n,length,target,nums[Maxsize];
	cin >> n;
	for(int j=0;j<n;j++){
		start = clock();
		cin >>length;
		for(int i=0;i<length;i++)
			cin >> nums[i];
		cin >> target;
		map<int,int> temp;
		for(int i=0;i<length;i++){
			
			if(temp.find( target-nums[i]) == temp.end() )
				temp.insert(make_pair(nums[i],i));
				
				
			else 
			{
			int res = (temp.find(target-nums[i]))->second;
			cout << res << " " << i <<endl;
			break;
			
			}

	}
	stop = clock();
	
	}
	
	cout<<"\n" << ((double)(stop-start))/CLK_TCK;

}
