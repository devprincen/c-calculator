#include <stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int a, b;
    char operator;
    clrscr();

    printf("Enter 1st number:- ");
    scanf("%d", &a);
    printf("enter 2nd number:- ");
    scanf("%d", &b);

    printf("\t\t\t Choose one operator: \n");
    printf("Addition +\n");
    printf("Subtraction  -\n");
    printf("Multiplication *\n");
    printf("Devision /\n");
    scanf("\n %c", &operator);

    switch (operator){
	case '+':
	printf("That your Additional of two number %d and %d is %d", a, b, a + b);
	break ;

	case '-':
	printf("That your Subtraction of two number %d and %d is %d",a, b, a - b);
	break ;

	case '*':
	printf("That your Multiplication of two number %d and %d is %d", a, b, a * b);
	break ;

	case '/':
	if (b != 0){
	    printf("That your Devision of two number %d and %d is %d", a, b, a / b);
	} else{
	    printf("zero is not devision");
	}
	break ;

	default :
	printf("that's invalid operator");
}

    getch();


}

