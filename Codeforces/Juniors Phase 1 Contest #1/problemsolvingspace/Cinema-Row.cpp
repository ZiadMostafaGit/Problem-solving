// #include <iostream>
// #include <vector>
// using namespace std;
// typedef long long ll;

// int main()
// {

//     ll n;
//     cin >> n;
//     vector<int> arr(n + 2, 0);
//     for (int i = 1; i < n + 1; i++)
//     {
//         cin >> arr[i];
//     }

//     int size = arr.size();
//     int index = 0;

//     for (int i = 1; i < size - 1; i++)
//     {

//         if (arr[i] > arr[index] && arr[i] > arr[i + 1])
//         {
//             cout << "both" << endl;
//         }
//         else if (arr[i] > arr[index] && arr[i] < arr[i + 1])
//         {

//             cout << "left" << endl;
//         }
//         else if (arr[i] < arr[index] && arr[i] > arr[i + 1])
//         {

//             cout << "right" << endl;
//         }
//         else
//         {
//             cout << "none" << endl;
//         }
//         index++;
//     }
//// }
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main1()
//{
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n;
//    cin >> n;
//    int a[n];
//    int pl[n];
//    int pr[n];
//    int The_max = INT32_MIN;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        The_max = max(The_max, a[i]);
//        pl[i] = The_max;
//    }
//    The_max = INT32_MIN;
//
//    for (int i = n - 1; i >= 0; i--)
//    {
//        The_max = max(The_max, a[i]);
//        pr[i] = The_max;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//
//        if (a[i] >= pl[i] && a[i] >= pr[i])
//        {
//            cout << "both" << endl;
//        }
//        else if (a[i] >= pl[i] && a[i] < pr[i])
//        {
//            cout << "lift" << endl;
//        }
//        else if (a[i] < pl[i] && a[i] >= pr[i])
//        {
//
//            cout << "right" << endl;
//        }
//        else
//        {
//            cout << "none" << endl;
//        }
//    }
//
//    return 0;
//}
