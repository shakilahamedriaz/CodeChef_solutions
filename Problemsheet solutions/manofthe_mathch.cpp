#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans, k = 1;
        int arr[22];

        for (int i = 0; i < 22; i++)
        {
            int a, b;
            cin >> a >> b;
            int temp = (a*1)+(b*20);
            arr[i] = temp;
        }

        int max_index = max_element(arr, arr + 22) - arr;// -- arr, because max_element returns an iterator, and we need the index
        
        cout << max_index +1 << endl;
    }

    return 0;
}
