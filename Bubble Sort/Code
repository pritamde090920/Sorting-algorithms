#include<stdio.h>
#define MAX 100

void bubble_sort(int arr[], int n){
	int flag=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			return ;
	}
}

int main(){
	int arr[MAX],i,n=0;
	do{
		printf("\nEnter 1 to enter new array element or 0 to stop:");
		scanf("%d",&i);
		if(i==1){
			printf("\nEnter the array element:");
			scanf("%d",&arr[n]);
			n++;
		}
	}while(i);
	printf("\nThe given array is:");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
	bubble_sort(arr,n);
	printf("\nThe sorted array is:");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
}
