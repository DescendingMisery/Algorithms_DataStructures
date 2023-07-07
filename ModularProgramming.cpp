//#include <iostream>
//#include <stdio.h>
//
//struct Shape
//{
//	int length;
//	int width;
//};
//void initializeShape(struct Shape* s)
//{
//	int len, wid;
//	std::cout << "Enter the length for your shape: ";
//	std::cin >> len;
//	std::cout << "Enter the width for your shape: ";
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
//	int p = 2 * (l + w);
//	std::cout << p;
//	return p;
//}
//int main()
//{
//	struct Shape* s = new Shape; // dynamic allocation
//	initializeShape(s);
//	area(s->length, s->width);
//	perimeter(s->length, s->width);
//	//std::cout << area(s.length, s.width) << std::endl;
//	//std::cout << perimeter(s.length, s.width);
//	delete s;
//	return 0;
//}