#include<iostream>

template <class T>
class Arithametic
{
private:
	T firstNum;
	T secondNum;
public:
	Arithametic();
	T add();
	T sub();
};

template<class T>
Arithametic<T>::Arithametic()
{
	std::cout << "Enter the first number: ";
	std::cin >> firstNum ;
	std::cout << "Enter the second number: ";
	std::cin >> secondNum;
}
template<class T>
T Arithametic<T>::add()
{
	T c;
	c = firstNum + secondNum;
	std::cout << "The addition is: " << c;
	return c;
}
template<class T>
T Arithametic<T>::sub()
{
	T c;
	c = firstNum - secondNum;
	std::cout << "The subtraction is: " << c;	
	return c;
}
int main()
{
	Arithametic<float> ar;
	ar.add();
	return 0;
}