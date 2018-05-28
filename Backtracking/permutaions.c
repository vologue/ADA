#include<stdio.h>
void printarr(int arr[30],int b){
	for(int i=0;i<b;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void permutate(int i,int arr[30],int b){
	if(i==b){
		printarr(arr,b);
	}
	else{
		int j;
		for(j=i;j<b;j++){
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			permutate(i+1,arr,b);
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
			
void main(){
	int arr[30],b;
	printf("Enter Array Size :");
	scanf("%d",&b);
	printf("\n Enter values");
	for(int i=0;i<b;i++){
		printf("\n Value %d :",i+1);
		scanf("%d",&arr[i]);
	}
	permutate(0,arr,b);
}
	
	
