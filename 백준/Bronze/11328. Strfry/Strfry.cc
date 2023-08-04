
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    cin.ignore();

    bool ans[1005];

    for (int i = 0; i < n; i++)
    {
        int alpha[30] = { 0, };
        string str1, str2;
        cin >> str1;
        cin >> str2;

        for (auto a : str1)
            alpha[a - 'a']++;
        for (auto b : str2)
            alpha[b - 'a']--;
        
        ans[i] = true;
        for (int j : alpha)
            if (alpha[j] != 0) ans[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i]) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
}