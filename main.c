#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	//추가함.
	int aa, bb, cc;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &aa, &operator, &bb);
	
	switch (operator)
	{
		case '+':
			cc = add(aa, bb);
			break;
		case '-':
			cc = sub(aa, bb);
			break;
		case '*':
			cc = multi(aa, bb);
			break;
		case '/':
			cc = div(aa, bb);
			break;
	}
	
	printf("result is %d.\n", cc);
	
	return 0;
}
