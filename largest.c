#include<stdio.h>
int main(){
	int data[5],a;
	for(a=0;a<5;a++){
		printf("Input value %d :",a+1);
		scanf("%d",&data[a]);
	}
	int i,j,temp1,temp2;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(data[i]>data[j]){
				temp1=data[j];
				temp2=data[i];
				data[i]=temp1;
				data[j]=temp2;
			}
		}
	}
	
	for(a=0;a<5;a++){
		printf("%d",data[a]);
	}
	
	
	return 0;
}