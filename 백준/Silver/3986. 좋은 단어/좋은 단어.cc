
#include <iostream>
#include <deque>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    int ans = 0;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cin.ignore();

        deque<char> word;
        for (int j = 0; str[j] != NULL; j++)
        {
            if (word.empty() || word.back() != str[j])
                word.push_back(str[j]);
            else word.pop_back();
        }
        if (word.empty()) ans++;
    }

    cout << ans;

    return 0;
}