#include <iostream>
#include <vector>
#include <iomanip>
 
double array_sum(const std::vector<int>& arr, int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + array_sum(arr, n - 1);
}
 
double array_average(const std::vector<int>& arr, int n) {
    if (n == 0) {
        return 0;
    }
    return array_sum(arr, n) / n;
}
 
int main() {
    int n;
    std::cin >> n;
 
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
 
    double avg = array_average(arr, n);
    std::cout << std::fixed << std::setprecision(6) << avg << std::endl;
 
    return 0;
}