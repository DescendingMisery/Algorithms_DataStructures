#include <iostream>
#include <stdlib.h>
#include <string>


struct Student 
{
	int id;
	std::string name;
	int age;
	double grade;
	double gpa;
};
int main()
{
	Student* s1 = new Student;
	s1->id = 1;
	s1->name = "Raymart";
	s1->age = 12;
	s1->grade = 10;
	s1->gpa = 1.0;
	std::cout << s1->id << " " << s1->name << " " << s1->age << " " << s1->grade << " " << s1->gpa;
	return 0;
}