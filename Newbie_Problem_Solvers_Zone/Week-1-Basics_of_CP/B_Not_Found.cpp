//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}