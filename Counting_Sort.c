#include<stdio.h>
void counting_sort(int A[],int B[],int k,int n){
	int C[k+1],i;
	for(i=0;i<=k;i++)
		C[i]=0;
	for(i=0;i<n;i++)
		C[A[i]]=C[A[i]]+1;
	for(i=1;i<=k;i++)
		C[i]=C[i]+C[i-1];
	for(i=n-1;i>=0;i--){
		B[C[A[i]]-1]=A[i];
		C[A[i]]=C[A[i]]-1;
	}
	for(i=0;i<n;i++)
		printf(" %d ",B[i]);
}
void main(){
	int i,n,k;
	printf("Enter the Size of Array:-");
	scanf("%d",&n);
	printf("Enter the Max ( K ) value:-");
	scanf("%d",&k);
	int A[n],B[n];
	printf("Enter the Elements of Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("SORTED ARRAY\n");
	counting_sort(A,B,k,n);
}
