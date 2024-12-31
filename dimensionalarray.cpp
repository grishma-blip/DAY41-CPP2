#include <iostream>
using namespace std;
int main()
 {
    int arr[10];
    std::cout << "Enter 10 integer values:" << std::endl;
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
    std::cout << "\nOriginal array:" << std::endl;
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    arr[4] = 200;
    std::cout << "Modified array after replacing the 5th value:" << std::endl;
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}