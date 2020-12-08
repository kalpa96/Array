#include<stdio.h>
int main(){

	float data[10];
	int a;
	for(a=0;a<10;a++){
		printf("Enter number %d : ",a+1);
		scanf("%f",&data[a]);
	}
	
	int i,j;
	float temp1,temp2;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(data[i]>data[j]){
				temp1=data[j];
				temp2=data[i];
				data[i]=temp1;
				data[j]=temp2;
			}
		}
	}
	
	int k;
	for(k=0;k<10;k++){
		printf("%.1f   ",data[k]);
	}
	return 0;
}