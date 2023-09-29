#include<stdio.h>
int binsearch(int a[],int lb,int ub,int key);
void main(){
	int n,i,pos=-1,key;
	printf("Enter the Size of Array:-");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of Array in Increasing order:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the Key to be searched:-");
	scanf("%d",&key);
	pos=binsearch(a,0,n,key);
	if(pos==-1)
		printf("Element not Found\n");
	else{
		printf("Element found at Index %d \n",pos);
	}
}

int binsearch(int a[],int lb,int ub,int key){
	int mid;
	mid=(ub+lb)/2;
	if(ub<lb)
		return -1;
	if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
		binsearch(a,lb,mid-1,key);
	else
		binsearch(a,mid+1,ub,key);
}
	
