
#include <iostream>
#include <stack>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    bool* ans;

    cin >> n;
    cin.ignore();
    ans = new bool[n];

    for (int i = 0; i < n; i++)
    {
        stack<char>bracket;
        getline(cin, str);
        ans[i] = true;
        for (int j = 0; str[j] != 0; j++)
        {
            if (str[j] == '(')
                bracket.push(str[j]);
            else
            {
                if (bracket.empty())
                {
                    ans[i] = false;
                    break;
                }
                else bracket.pop();
            }
        }
        if (!bracket.empty()) ans[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i]) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }


    delete[] ans;

    return 0;
}