#include<stdio.h>
main(){
	
	int i, b;
	
	printf("Enter Table : ");
	scanf("%d", &b);
	
	for(i=1;i<=10;i++){
		
		printf("%d * %d = %d\n", b, i, b*i);
		
	}
	
}