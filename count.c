#include<stdio.h>
int main(){
	int data[10],a,b=0;
	for(a=0;a<10;a++){
		printf("Enter number %d :",a+1);
		scanf("%d",&data[a]);
		int n=data[a];
		while(n!=0){
			if(n%10==2)
				b++;
			n=n/10;
		}
	}
	printf("Answer = %d ",b);
	
	return 0;
}