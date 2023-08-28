//#include <stdio.h>
//#include <iostream>
//int powerFunc1(int m, int n)
//{
//    if (n == 0)
//        return 1;
//    return powerFunc1(m, n - 1) * m;
//}
//
//int powerFunc2(int m, int n)
//{
//
//    if (n == 0)
//    {
//
//        return 1;
//    }
//    else
//        if (n % 2 == 0)
//        {
//
//            return powerFunc2(m * m, n / 2); // even power    
//        }
//    return m * powerFunc2(m * m, (n - 1) / 2); // odd power
//}
//
//void function()
//{
//    int a, b;
//    std::cout << "Enter your m\n";
//    std::cin >> a;
//
//    std::cout << "Enter your n\n";
//    std::cin >> b;
//
//    int result = powerFunc2(a, b);
//    printf("%d", result);
//
//}
//
//int main()
//{
//    function();
//    return 0;
//}
