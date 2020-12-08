#include<stdio.h>
int main(){
	int data[10],a;
	
	for(a=0;a<10;a++){
		printf("Enter number %d : ",a+1);
		scanf("%d",&data[a]);
	}
	
	int newData[10];
	int x=0;
	int i=0;
	while(x<10){
		int y=0;
		int r=0;
		while(y<10){
			if(data[x]==newData[y]){
				r=1;
				break;
			}
			y++;
		}
		if(r==0){
			newData[i]=data[x];
			i++;
		}
		x++;
	}
	int n;
	for(n=0;n<i;n++){
		printf(" %d ",newData[n]);
	}
	return 0;
}