//#include<stdlib.h>
//#include<iostream>
//
//int main()
//{
//	/*
//	int a = 10;
//	int *p; // declaration of pointer
//	p = &a; //assign address of a to p
//	printf("%i\n", a);
//	printf("%i", *p); // dereferenced p so it returns the value instead of the address p was assigned with
//	*/
//	
//	/* array creation in stacks
//	int a[5] = {2, 4, 6, 8, 10};
//	int* p;
//	p = a; // a pointer pointing to array seems like you don't need to assign address, but it acts as an actual array itself, directly accessing the data from the a[] array.
//
//	for (int i = 0; i < 5; i++) 
//	{
//		printf("%i\n", p[i]);
//	}
//	*/
//
//	/* array creation in heap for c
//	int* p;
//	p = (int*)malloc(5 * sizeof(int));
//	p[0] = 10;
//	p[1] = 15;
//	p[2] = 14;
//	p[3] = 21;
//	p[4] = 31;
//
//	for (int i = 0; i < 5; i++)
//		printf("%i\n", p[i]);
//	*/
//	
//	/* array creation in heap for c++
//	int* p;
//	p = new int[5]; // dynamic allocation of pointer, assigning.
//	p[0] = 10;
//	p[1] = 15;
//	p[2] = 14;
//	p[3] = 21;
//	p[4] = 31;
//	for ( int i = 0; i < 5; i++ )
//		printf("%i\n", p[i]);
//	delete[] p; // must always release the memory after using a dynamic allocation because we created it in heap
//	*/
//	
//	
//
//	int* p1;
//	char* p2;
//	float* p3;
//	double* p4;
//	struct rectangle* p5;
//
//	std::cout << sizeof(p1) << std::endl;
//	std::cout << sizeof(p2) << std::endl;
//	std::cout << sizeof(p3) << std::endl;
//	std::cout << sizeof(p4) << std::endl;
//	std::cout << sizeof(p5) << std::endl; // this proves that pointer share the same size for everything, size of 8 bytes.
//		
//
//	
//	return 0;
//}
//struct rectangle
//	{
//		int length;
//		int height;
//	};
