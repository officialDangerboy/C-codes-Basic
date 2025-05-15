#include<stdio.h>
void main(){
	int n,i=0;
	printf("enter a no.");
	scanf("%d",&n);
	int bin[n];
	while(n!=0){
	 bin[i]=n%2;
	 i++;
	 n=n/2;
	}
	while(i!=0){
		printf("%d",bin[i-1]);
		i--;
}	}
