#include<bits/stdc++.h>

using namespace std;

clock_t start,stop;
//冒泡排序 
void bubble(int *arr,int length){
	int temp=0;
	for(int i=0;i< length ; i++){
		for(int j=0;j<length-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}		
		}	
	}	
}

// 冒泡的排序的优化 选择排序  减少交换次数
void select_sort(int *arr,int length){
	int index=0,temp1=0,temp2=0;
	
	for(int i=0;i<length;i++){
		index = i;
		for(int j=i;j<length;j++){
			if(arr[j]>arr[index]) {
			index=j;
		}
		temp2 = arr[i];
		arr[i] = arr[index];
		arr[index] = temp2;	
	}
} 
}

void insert_sort(int *arr,int length){
	
	for(int i=1;i<length;i++){
		for(int j=0;j<i;j++ )
		{
			if(arr[1]<arr[j]) continue;
		}
		
		
		
	}
	
	
}



int main()
{
	
	int a[] = {1,5,2,1,4,1,10,2,6};
	int b[] = {1,5,2,1,4,1,10,2,6};
	for(int i=1;i<10000000;i++){
	*a = *b;
	bubble(a,9);}
	stop = clock();
	
	cout << "时间" << (int)(stop-start)/CLK_TCK<< endl;

	for(int i=0;i<9;i++) cout << a[i] << endl;
	
	start = clock();

	for(int i=0;i<10000000;i++)
	select_sort(b,9);
	stop = clock();
	cout << "时间" << (int)(stop-start)/CLK_TCK<< endl;	
	for(int i=0;i<9;i++) cout << a[i] << endl;
	
	
}
