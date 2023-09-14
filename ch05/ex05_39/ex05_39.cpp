
#include <iostream>

 // Function template minimum header
 template <typename T>
 T minimum(T value1, T value2)
 {
    T minimumValue(value1);

    if (value2 < minimumValue) {
        minimumValue = value2;
    }

    return minimumValue;
 }

int main()
{
    std::cout << "Enter two integers separated by a space:  ";
    int int1{ 0 };
    int int2{ 0 };
    std::cin >> int1 >> int2;
    std::cout << "The minimum value is " << minimum(int1, int2);

    std::cout << "\n\nEnter two characters separated by a space:  ";
    char ch1;
    char ch2;
    std::cin >> ch1 >> ch2;
    std::cout << "The minimum value is " << minimum(ch1, ch2);

    std::cout << "\n\nEnter two floating-point numbers separated by a space:  ";
    double fp1;
    double fp2;
    std::cin >> fp1 >> fp2;
    std::cout << "The minimum value is " << minimum(fp1, fp2);

    std::cout << std::endl;
}