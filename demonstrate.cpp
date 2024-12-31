//  Write a program to demonstrate function overloading by creating three
// functions named max:

// int max(int a, int b) to find the larger of two integers.
 
 
 #include <iostream>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}
int main() {
    cout << "Larger integer: " << max(5, 10) << endl;
    cout << "Larger floating-point number: " << max(5.5, 3.2) << endl;
    cout << "Larger character: " << max('a', 'b') << endl;

    return 0;
}