#include<stdio.h>
main(){
	
	int n, i, fact=1;
	
	printf("Enter Number to Find it Factorial : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		if(n<0){
			printf("Enter Correct Number");
		}
		fact = fact * i;
	}
	printf("Factorial Number of a %d : %d", n, fact);
	
}