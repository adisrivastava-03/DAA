#include<stdio.h>
void main(){
	int n,i,j,key;
	printf("Enter the Size of Array:- ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of Array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		key=a[i];
		j=i-1;
		while(key<a[j] & j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("SORTED ARRAY:-\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

