#include <unistd.h>

void  fputchar(char c)
{
    write(1, &c, 1);
}

void  combi2(int A, int B)
{
	int a;
	int b;
	int c;
	int d; 

		a=A/10;
		b=A%10;
		c=B/10;
		d=B%10;


  fputchar(a+'0');
  fputchar(b+'0');
  fputchar(' ');
  fputchar(c+'0');
  fputchar(d+'0');
  if (a==9 && b==8 && c==9 && d==9)
  {
    return;
  }
 else
 {
	fputchar(',');
        fputchar(' ');
  }
}

void ft_print_comb2(void)
{

	int A;
	int B;

	A=0;

	while(A <=98)
	{
		B = A+1;
		while(B <=99)
		{
			combi2(A,B);
			B++;
		}
		A++;
	}
}
