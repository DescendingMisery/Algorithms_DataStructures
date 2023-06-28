#include <iostream>
#include <stdio.h>
using namespace std;

/*
struct Rectangle
{
	int length;
	int width;
	char x;
}; 
struct Rectangle r2; // avoid doing shit like this, it has security breaches and access violations.
					// This is known as Global Variable
int main()
{
	struct Rectangle r;
	r.length = 10;
	r.width = 5;
	struct Rectangle r3 = { 15,18 };
	cout << r.width << endl;
	printf("%d\n", r3.length);
	printf("%lu", sizeof(r3)); // this prints the size of the r3 struct in bytes
	// r3.length = 20;
	// r3.width = 25; // these manually changes the length and width of r3 struct.
	return 0;
}
*/