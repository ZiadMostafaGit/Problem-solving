#include <iostream>
#include <stack>
using namespace std;

int main() {


    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    stack<long long> st;
    long long currentMax =0;

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;

            if (x > currentMax) {
                st.push(2 * x - currentMax);
                currentMax = x;
            } else {
                st.push(x);
            }
        } else if (type == 2) {
            if (st.top() > currentMax) {
                currentMax = 2 * currentMax - st.top();
            }
            st.pop();
        }

        cout << currentMax << endl;
    }

    return 0;
}


/*5
1 5
1 3
1 6
2
2
*/
