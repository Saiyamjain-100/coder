#include<stdio.h>
void countsort(int arr[],int n,int brr[],int k);
int main()
{
	int i,k=10,n=6;
	int arr[6]={2,5,3,4,3,4};
	int brr[n];
      
	countsort(arr,n,brr,k);
			for(i=0;i<n;i++){
		printf("%d",brr[i]);
	}
	return 0;

}
void countsort(int arr[],int n,int brr[],int k){
	int count[k],i;
	for(i=0;i<k;i++){
		count[k]=0;
	}
	for(i=0;i<n;i++){
		count[arr[i]]=count[arr[i]]+1;
	}
	for(i=1;i<n;i++){
		count[i]=count[i]+count[i-1];
		
	}
	for(i=n-1;i>=0;i++){
		brr[count[arr[i]]]=arr[i];
		count[arr[i]]=count[arr[i]]-1;
	}
}


