#include<stdio.h>
#include<conio.h>
int linearsearch(int[5],int);
int main()
{
	int n,i,a[5],store;
	printf ("enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements to be searched");
	scanf("%d",&n);
	store=linearsearch(a,n);
	if(store==1)
	printf("found");
	else
	printf("not found");
	return 0;
}
int linearsearch(int a[5],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		if(a[i]==n)
 		return 1;
 }
 return 0;
}