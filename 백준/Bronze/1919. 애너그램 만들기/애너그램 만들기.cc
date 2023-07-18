#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 첫 번째 단어를 알파벳 배열에 넣고
    // 두 번재 단어 알파벳을 배열에서 하나씩 빼고
    // 만약 0이면 count++하고, 0이 아니면 알파벳 배열을-- 하면되지 않나
    int alpha[2][30] = { {0},{0} };
    string str0, str1;
    int count = 0;

    getline(cin, str0);
    for (int i = 0; i < str0.size(); i++)
    {
        alpha[0][str0[i] - 'a']++;
    }
    getline(cin, str1);
    for (int i = 0; i < str1.size(); i++)
    {
        alpha[1][str1[i] - 'a']++;
    }
    for (int i = 0; i < 30; i++)
    {
        if (alpha[0][i] == 0 && alpha[1][i] == 0) continue;
        else if (alpha[0][i] != 0 || alpha[1][i] != 0)
        {
            if (alpha[0][i] >= alpha[1][i]) count += alpha[0][i] - alpha[1][i];
            else count += alpha[1][i] - alpha[0][i];
        }
    }
    cout << count;

    return 0;
}