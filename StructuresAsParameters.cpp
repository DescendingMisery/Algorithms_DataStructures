//#include <iostream>
//#include <stdio.h>
//
//struct rectangle { // pass by value
//	int length;
//	int width;
//};
//int area(struct rectangle r)
//{
//	r.length++;
//	int a = r.length * r.width;
//	return a;
//}
//int main()
//{
//	struct rectangle r = { 10 ,5 };
//	area(r);
//	printf("length: %d \nwidth: %d", r.length, r.width);
//	printf("\narea of the rectangle in the actual parameter is: %i", (r.length * r.width));
//	printf("\narea of the rectangle in area() function is: %i", area(r));
//	
//	return 0;
//}
//struct rectangle { // pass by reference
//	int length;
//	int width;
//};
//int area(struct rectangle* r1)
//{
//	r1->length++;
//	int a = r1->length * r1->width;
//	return a;
//}
//int main()
//{
//	struct rectangle r = { 10 ,5 };
//	area(&r);
//	printf("length: %d \nwidth: %d", r.length, r.width);
//	printf("\narea of the rectangle in the actual parameter is: %i", (r.length * r.width));
//
//	return 0;
//}
//struct Rectangle { // dynamic memory allocation 
//	int length;
//	int width;
//};
//struct Rectangle* createRect() 
//{
//	struct Rectangle* p = new Rectangle;
//	p->length = 15;
//	p->width = 7;
//	return p;
//}
//int main()
//{
//	struct Rectangle* ptr = createRect();// this allows the main function access and uses a pointer to the createRect() function
//	printf("length: %d \nwidth: %d", ptr->length, ptr->width);
//	return 0;
//}