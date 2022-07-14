#include<bits/stdc++.h>
#define length 8
using namespace std;
int main(){
	vector<int> arr ;
	vector<int>::iterator p= arr.begin();
	for( int i=0 ; i<length ; i++ ) arr.push_back(i*248 % 11);
	for(p=arr.begin();p!=arr.end();p++) cout << *p << endl;
	int temp;
	for(int i = 1 ; i < length ; i++){
		for(int j = 0 ; j < i ; j++ )
		if(arr[i] < arr[j] ){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			break; //找到位置交换后 必须结束循环 
		}
	
	}
	cout << "排序后:" << endl;
	for(p=arr.begin();p!=arr.end();p++) cout << *p << endl;
			
}
