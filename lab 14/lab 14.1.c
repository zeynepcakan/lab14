#include <stdio.h>
#include <stdlib.h>

int buyuk1(int dizi[],int boyut){
	int i,max1=0;
	for(i=0; i<boyut; i++)
	{
		if(dizi[i]>max1)
			max1=dizi[i];
	}
	return max1;
}
int buyuk2(int dizi[],int boyut){
	int i,max2=0,max1=0;
	for(i=0; i<boyut; i++)
	{
		if(dizi[i]>max1)
			max1=dizi[i];
	}
	for(i=0; i<boyut; i++)
	{
		if(dizi[i]!=max1){
			if(dizi[i]>max2)
				max2=dizi[i];
		}
	}
	return max2; 
} 
int main() {
	int n;
	printf("please enter the value of elements: ");
	scanf("%d",&n);
	int i,dizi[n];
	for(i=0; i<n; i++)
	{
		printf("dizi[%d]=",i);
		scanf("%d",&dizi[i]);
	}
	printf("The biggest num is= %d\n",buyuk1(dizi,n));
	printf("The second bigger num is= %d",buyuk2(dizi,n));
	return 0;
}


