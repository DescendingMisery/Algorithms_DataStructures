#include <iostream>

/* call by value
int add(int a, int b)
{
	int c = a + b;
	return c;
}
int main()
{
	int num1 = 10, num2 = 15, sum;
	sum = add(num1, num2);
	printf("%i", sum);
	return 0;
}
*/
/* call by address
void swap(int* x, int* y)
{
	int temp = *x;  //*x means it access num1 because the * dereference the x, same goes for y
	*x = *y;
	*y = temp;
}
int main()
{
	int num1 = 10, num2 = 15;
	swap(&num1, &num2);
	printf("%i\n%i", num1, num2);
	return 0;
}
*/
/* passing by reference
void swap(int& x, int& y)
{
	int temp = x;  //*x means it access num1 because the * dereference the x, same goes for y
	x = y;
	//printf("x is %i\ny is %i\ntemp is %i\n", x, y, temp); // testing
	y = temp;
	
}
int main()
{
	int num1 = 10, num2 = 15;
	swap(num1, num2);
	printf("%i\n%i", num1, num2);
	
	return 0;
}
*/