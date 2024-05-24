#include<stdio.h>
main(){
	
	int num, sum, f_digit, l_digit;
	
	printf("Enter the First and Last Digit : ");
	scanf("%d", &num);
	
	f_digit = num % 10;
	
	l_digit = num;
	
	while(num>=10){
		
		num /= 10;
	}
	l_digit = num;
	
	sum = f_digit + l_digit;
	
	printf("Sum of First and Last Digit : %d", sum);
}