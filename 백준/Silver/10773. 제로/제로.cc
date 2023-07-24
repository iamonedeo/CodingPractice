
#include <iostream>
#include <stack>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    int oper;
    stack<int> sta;
    cin >> k;
    cin.ignore();
    while (k--)
    {
        cin >> oper;
        cin.ignore();
        if (oper == 0)
        {
            if (!sta.empty())
                sta.pop();
        }
         else sta.push(oper);
    }
    int ans = 0;
    while (!sta.empty())
    {
        ans += sta.top();
        sta.pop();
    }
    cout << ans;

    return 0;
}