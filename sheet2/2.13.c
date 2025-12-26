/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float factorial(int n); // Declare the function before its use

int main()
{
	float sum = 0;
	for (int i = 0; i <21; i++)
	{
		sum+=1/factorial(i);
	}
	printf("%f", sum);
}
float factorial(int n)
{
	unsigned int factorial=1;
	while(n>0)
	{
		factorial *=n;
		n--;
	}
	return factorial;

}