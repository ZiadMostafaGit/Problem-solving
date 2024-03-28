#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<ll> unique_elements;
    map<ll, int> element_indices;
    for (int i = 0; i < n; i++)
    {
        if (unique_elements.find(arr[i]) == unique_elements.end())
        {
            unique_elements.insert(arr[i]);
            element_indices[arr[i]] = i;
        }
    }

    if (unique_elements.size() >= k)
    {
        cout << "YES" << endl;
        int count = 0;
        for (auto it = unique_elements.begin(); it != unique_elements.end() && count < k; it++, count++)
        {
            cout << element_indices[*it] + 1 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}