//#include<iostream>
//#include<stdio.h>
//// create a rectangle structures that uses pointers to it values, the rectangle
//// will also have calculations
//struct Rectangle
//{
//	int length;
//	int width;
//};
//void createDimen(struct Rectangle* s) 
//{
//	int len, wid;
//	std::cout << "Enter the lenght of your rectangle: ";
//	std::cin >> len;
//	std::cout << "Enter the width of your rectangle: ";
//	std::cin >> wid;
//	s->length = len;
//	s->width = wid;
//}
//int area(int l, int w)
//{
//	int a = l * w;
//	std::cout << a << std::endl;
//	return a;
//}
//int perimeter(int l, int w)
//{
//	int p = 2*(l + w);
//	std::cout << p << std::endl;
//	return p;
//}
//int main()
//{
//	struct Rectangle* s = new Rectangle ;
//	struct Rectangle s2;
//	createDimen(s);
//	createDimen(&s2); // dereference
//	area(s2.length, s2.width);
//	area(s->length, s->width);
//	perimeter(s->length, s->width);
//
//	delete s;
//	return 0;
//}