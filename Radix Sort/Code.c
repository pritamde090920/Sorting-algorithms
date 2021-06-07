#include<stdio.h>
#define MAX 100
 
int getMax(int arr[], int n){
    int m=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>m)
            m=arr[i];
    return m;
}

void countSort(int arr[], int n, int exp){
    int output[n];
    int i,count[10]={0};
    for(i=0;i<n;i++)
        count[(arr[i]/exp)%10]++;
    for(i=1;i<10;i++)
        count[i]+=count[i-1];
    for (i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(i=0;i<n;i++)
        arr[i]=output[i];
}

void radix_sort(int arr[], int n){
    int m=getMax(arr,n);
    for(int exp=1;m/exp>0;exp*=10)
        countSort(arr, n, exp);
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
	radix_sort(arr,n);
	printf("\nThe sorted array is:");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
}
