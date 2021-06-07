#include<stdio.h>
#define MAX 100

void heapify(int arr[], int n, int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if (l<n && arr[l]>arr[largest])
        largest=l;
    if (r<n && arr[r]>arr[largest])
        largest=r;
    if (largest!=i){
		int temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
        heapify(arr,n, largest);
    }
}
 
void heap_sort(int arr[], int n){
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    for(int i=n-1;i>0;i--){
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
        heapify(arr,i,0);
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
	heap_sort(arr,n);
	printf("\nThe sorted array is:");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
	return 0;
}
