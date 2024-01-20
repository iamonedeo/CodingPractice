#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned int a = 1;
    bool isCorrect = false;
    for (int i = 0; i < 32; i++)
    {
        if ((n ^ a) == 0)
        {
            isCorrect = true;
            break;
        }
        a=a << 1;
    }
    if (isCorrect) cout << "1";
    else cout << "0";

    return 0;
}