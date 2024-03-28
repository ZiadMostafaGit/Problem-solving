#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;

priority_queue<int, vector<int>, greater<int>> p_queue;

   while (n--)
    {
        cin >> s;

        if (s == "push")
        {
            int num;
            cin >> num;
            p_queue.push(num);
        }
        else if (s == "pop")
        {
            if (!p_queue.empty())
            {
                p_queue.pop();
            }
        }
        else if (s == "top")
        {
            if (!p_queue.empty())
            {
                cout << p_queue.top() << endl;
            }
        }
    }

    return 0;
}
