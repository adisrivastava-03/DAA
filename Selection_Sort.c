#include<stdio.h>
void main()
{	
	int n,i,j,temp,min_idx;
	printf("Enter the Size of Array:-");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of Array:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++){
		min_idx=i;
		for(j=i+1;j<n;j++){
			if(a[min_idx]>a[j]){
				min_idx=j;
			}
		}
		if(min_idx!=i){
			temp=a[min_idx];
			a[min_idx]=a[i];
			a[i]=temp;
		}
	}
	printf("SORTED ARRAY :-\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}


	
	
