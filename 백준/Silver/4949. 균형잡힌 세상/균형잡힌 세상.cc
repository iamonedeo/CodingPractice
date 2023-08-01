
#include <iostream>
#include <stack>
#include <deque>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<bool> ans;

    while (1)
    {
        string str;
        getline(cin, str);
        if (str[0] == '.') break;
        stack<char> bracket;
        ans.push_back(true);
        for (auto i : str)
        {
            if (i == '(' || i == '[')
                bracket.push(i);
            else if (i == ')')
            {
                if (bracket.empty() || bracket.top() != '(')
                {
                    ans.pop_back();
                    ans.push_back(false);
                    break;
                }
                bracket.pop();
            }
            else if (i == ']')
            {
                if (bracket.empty() || bracket.top() != '[')
                {
                    ans.pop_back();
                    ans.push_back(false);
                    break;
                }
                bracket.pop();
            }
        }
        if (!bracket.empty())
        {
            ans.pop_back();
            ans.push_back(false);
        }
    }

    while (!ans.empty())
    {
        if (ans.front()) cout << "yes\n";
        else cout<<"no\n";
        ans.pop_front();
    }

}