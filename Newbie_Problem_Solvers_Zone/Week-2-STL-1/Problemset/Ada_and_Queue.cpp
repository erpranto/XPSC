// https://www.spoj.com/problems/ADAQUEUE/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    deque<int> dq;
    bool reversed = false;
    while (tc--)
    {
        string s;
        cin >> s;
        if (s == "back")
        {
            if (!dq.empty())
            {
                if (!reversed)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
            else
                cout << "No job for Ada?\n";
        }
        else if (s == "front")
        {
            if (!dq.empty())
            {
                if (!reversed)
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
            else
                cout << "No job for Ada?\n";
        }
        else if (s == "reverse")
        {
            reversed = !reversed;
        }
        else if (s == "push_back")
        {
            int n;
            cin >> n;
            if (!reversed)
                dq.push_back(n);
            else
                dq.push_front(n);
        }
        else if (s == "toFront")
        {
            int n;
            cin >> n;
            if (!reversed)
                dq.push_front(n);
            else
                dq.push_back(n);
        }
    }
    return 0;
}