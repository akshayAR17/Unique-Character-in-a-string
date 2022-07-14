#include <bits/stdc++.h>
using namespace std;

int firstUNIQchar(string &str)
{
    int n = str.size(), freq[256] = {0};

    for(int i = 0; i < n; i++)
        freq[str[i]]++;

    for(int i = 0; i < n; i++)
    {
        if(freq[str[i]] == 1)
            return i;
    }
    return -1;
}

int main()
{
    string str;
    cin >> str;

    cout << firstUNIQchar(str);
    return 0;
}
