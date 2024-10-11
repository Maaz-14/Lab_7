#include<stdio.h>
int main(){
	int num[9],i,sum=0;
	for (i=0;i<9;i++){
		printf("Enter number: ");
		scanf("%d",&num[i]);
		sum=sum+num[i];
	
	}
	printf("Input: [%d,%d,%d,%d,%d,%d,%d,%d,%d]",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8]);
	printf("\nOutput: %d ",sum);
	return 0;
}