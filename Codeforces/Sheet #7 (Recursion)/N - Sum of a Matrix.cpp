
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
 
void solve(vector<vector<int>>& arr1, vector<vector<int>>& arr2, int a, int b) {
    if (a == 0) {
        return;
    }
 
        solve(arr1, arr2, a-1, b);
 
 
    for (int i = 0; i < b; i++) {
        cout << arr1[a - 1][i] + arr2[a - 1][i] << " ";
    }
    cout << endl;
 
}
 
int main() {
    int a, b;
    cin >> a >> b;
 
    vector<vector<int>> arr1(a, vector<int>(b));
    vector<vector<int>> arr2(a, vector<int>(b));
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }
 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr2[i][j];
        }
    }
 
    solve(arr1, arr2, a, b);
 
    return 0;
}