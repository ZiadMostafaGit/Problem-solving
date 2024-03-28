#include <iostream>
#include <string>
 
std::string decimalToBinary(int n)
{
    if (n == 0)
    {
        return "";
    }
 
    std::string binary = decimalToBinary(n / 2);
    binary += std::to_string(n % 2);
 
    return binary;
}
 
int main()
{
    int t;
    std::cin >> t;
 
    for (int i = 0; i < t; ++i)
    {
        int n;
        std::cin >> n;
 
        std::string binary = decimalToBinary(n);
        std::cout << binary << std::endl;
    }
 
    return 0;
}
