#include<stdio.h>
int main(){
	int arr[]={5,3,1,4,2};
	int a_score=0;
	int i=0;
	int b_score=0;
	int low=0;
	int high=4;
	int arr_sum=0;
	for(int i=0;i<5;i++){
		arr_sum=arr_sum+arr[i];
	}
	while(low<high){
		if(i%2==0){
			if(arr[low]>arr[high]){
				arr_sum=arr_sum-arr[high];
				a_score=a_score+arr_sum;
				--high;

				
				}
				
			
			else{
				
				arr_sum=arr_sum-arr[low];
				a_score=a_score+arr_sum;
				++low;

				
			}
		}
		else{
			if(arr[low]>arr[high]){
				arr_sum=arr_sum-arr[low];
				b_score=b_score+arr_sum;
				++low;
			}
				
			else{
				arr_sum=arr_sum-arr[high];
				b_score=b_score+arr_sum;
				
				--high;
				
			}
		}
		i=i+1;

	}
	printf("%d",a_score-b_score);





	return 0;
}