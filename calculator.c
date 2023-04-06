#include <stdio.h>
int main()
{char ch;
printf("Enter the operator sign=");
scanf("%c", &ch);
switch(ch)
	{case '+':
	{	int a,b,c;
		scanf("%d %d", &a, &b);
		c=a+b;
		printf("%d", c);
	}
			break;
	case '-':
	{	int a,b,c;
		scanf("%d %d", &a, &b);
		c=a-b;
		printf("%d", c);
	}
			break;
	case '*':
	{	int a,b,c;
		scanf("%d %d", &a, &b);
		c=a*b;
		printf("%d", c);
	}
			break;
	case '/':
	{	float a,b,c;
		scanf("%f %f", &a, &b);
		c=a/b;
		printf("%f", c);
	}
			break;
	default:printf("Enter valid operator");
	}
	return 0;
}

