#include<stdio.h>
#include<math.h>
void main(){
	int n,bin,i=0,j=0,res=0,r1;
	printf("enter a no.");
	scanf("%d",&n);
	bin=n;
	while(n!=0){
		i++;
	    n=n/10;
}
while(j<i){
		res+=(bin%2)*pow(2,j);
		bin=bin/10;
		j++;
	    
}
printf("%d",res);
}
