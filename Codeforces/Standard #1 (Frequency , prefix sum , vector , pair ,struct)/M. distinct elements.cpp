#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    vector<ll> uniq_array(arr.begin(), last);

    for (int i=0;i<q;i++)
    {
        ll x;
        cin >> x;

        auto it = lower_bound(uniq_array.begin(), uniq_array.end(), x);
        int index = it - uniq_array.begin();
        int size = uniq_array.size();

        if (it != uniq_array.end() && *it == x) {
            cout << index << " " << size - index - 1 << endl;
        } else {
            cout << index << " " << size - index << endl;
        }
    }

    return 0;
}