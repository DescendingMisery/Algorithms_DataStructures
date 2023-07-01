#include <iostream>

/* Example passing address in Array Parameter
void func(int* A, int n) // arrays can only be passed by address
{
	for (int i =0; i < n; i++)
	{
		std::cout << A[i] << std::endl;
	}
}
int main()
{
	int A[] = { 2, 4, 6, 8, 10 };
	int n = 5;
	func(A, n);
	
	for (int x : A)
		std::cout << x << " ";

	return 0;
}
*/
/* return an array created in heap
int* fun(int size)
{
	int* p;
	p = new int[size]; // created in heap
	for (int i = 0; i < size; i++)
	{
		p[i] = i + 1;
	}
	return p;
}
int main()
{
	int* ptr, sz = 5;
	ptr = fun(sz);

	for (int i = 0; i < sz; i++)
		std::cout << ptr[i] << std::endl;
	return 0;
}
*/