//#include <iostream>
//#include <stdlib.h>
//#include <string>
//
//
//struct Rectangle
//{
//	int length;
//	int width;
//};
//void initialize(struct Rectangle* r, int l, int w)
//{
//	r->length = l;
//	r->width = w;
//}
//void changeDimen(struct Rectangle* r, int l, int w)
//{
//	r->length = l;
//	r->width = w;
//}
//int area(struct Rectangle* r)
//{
//	return r->length * r->width;
//}
//int main()
//{
//	struct Rectangle r;
//	initialize(&r, 10, 5);
//	area(&r);
//	printf("Before \n    Length: %i Width: %i Area: %i", r.length, r.width, area(&r));
//	changeDimen(&r, 18, 9);
//	area(&r);
//	printf("\nAfter \n    Length: %i Width: %i Area: %i", r.length, r.width, area(&r));
//	return 0;
//}
//
//
//
//
////struct Student 
////{
////	int id;
////	std::string name;
////	int age;
////	double grade;
////	double gpa;
////};
////int main()
////{
////	Student* s1 = new Student;
////	s1->id = 1;
////	s1->name = "Raymart";
////	s1->age = 12;
////	s1->grade = 10;
////	s1->gpa = 1.0;
////	std::cout << s1->id << " " << s1->name << " " << s1->age << " " << s1->grade << " " << s1->gpa;
////	return 0;
////}