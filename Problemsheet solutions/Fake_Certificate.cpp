#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int len = s.length();

        bool okall = true;
        for (int i = 0; i < len; i++) {
            if (s[i] == '1') {
                okall = false;
                break;
            }
        }

        if (!okall) 
        {
            cout << len << endl;
        } 
        
        else 
        {
            
            int count = 0, MaxconsZero = 0;
            for (int i = 0; i < len; i++)
             {
                if(s[i] == '0')
                {
                    count++;
                    MaxconsZero = max(MaxconsZero, count);
                }
                else
                {
                    count = 0;
                }
            }

            cout << MaxconsZero << endl;
        }
    }
    return 0;
}
