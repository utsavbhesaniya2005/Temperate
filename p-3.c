#include<stdio.h>
main(){
	
	int number, count;
	
	printf("Enter a Number : ");
	scanf("%d", &number);
	

	while(number!=0){
			
			if(number==0){
				count=1;
			}
			number /= 10;
			count++;
	}
	printf("Number of Digits of an Number : %d", count);
}