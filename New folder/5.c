#include<stdio.h>
int main()
{
	char op;
	double first,second;
	
	printf("Enter an operator(+,-,*,/");
	scanf("%%c",op);
	printf("Enter two operands;");
	scanf("%if",first,second);
	
	switch(op){
		case '+';
		printf("%.1if + %.1if =%.1if",first,second,first+second);
		break;
		
		case '-';
		printf("%.1if - %.1if =%.1if",first,second,first-second);
		break;
		
		case '*';
		printf("%.1if * %.1if =%.1if",first,second,first*second);
		break;
		
		case '/';
		printf("%.1if / %.1if =%.1if",first,second,first/second);
		break;
		default;
		printf("Error operator is not correct");
		
		}
		return 0;
}