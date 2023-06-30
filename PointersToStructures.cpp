#include <iostream>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int width;
};
int main()
{
	Rectangle r = { 10, 5 };
	Rectangle* p = &r;
	printf("%i\n%i", p->length, p->width);

	Rectangle* s = new Rectangle; // dynamic allocation instead of the above
	s->length = 20;
	s->width = 90;
	printf("\n%i\n%i", s->length, s->width);

	return 0;

}