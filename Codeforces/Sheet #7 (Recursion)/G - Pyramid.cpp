#include <iostream>
 
void printSpaces(int count) {
    if (count <= 0) {
        return;
    }
    std::cout << ' ';
    printSpaces(count - 1);
}
 
void printStars(int count) {
    if (count <= 0) {
        return;
    }
    std::cout << '*';
    printStars(count - 1);
}
 
void printPyramid(int n, int height) {
    if (height <= 0) {
        return;
    }
    printSpaces(height - 1);
    printStars(2 * n - (2 * height - 1));
    std::cout << '\n';
    printPyramid(n, height - 1);
}
 
int main() {
    int n;
    std::cin >> n;
    printPyramid(n, n);
    return 0;
}