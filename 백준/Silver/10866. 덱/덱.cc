#include <iostream>
#include <string>
#include <deque>

int main()
{
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> deq;
    int n, num;
    string oper;
    int ans[10000];
    int ansCnt = 0;

    cin >> n;
    cin.ignore();

    while (n--)
    {

        cin >> oper;
        cin.ignore();
        if (oper == "push_back")
        {
            cin >> num;
            cin.ignore();
            deq.push_back(num);
        }
        else if (oper == "push_front")
        {
            cin >> num;
            cin.ignore();
            deq.push_front(num);
        }
        else if (oper == "pop_front") //print
        {
            if (deq.empty()) ans[ansCnt++] = -1;
            else
            {
                ans[ansCnt++] = deq.front();
                deq.pop_front();
            }
        }
        else if (oper == "pop_back") //print
        {
            if (deq.empty()) ans[ansCnt++] = -1;
            else
            {
                ans[ansCnt++] = deq.back();
                deq.pop_back();
            }
        }
        else if (oper == "size") //print
        {
            ans[ansCnt++] = deq.size();
        }
        else if (oper == "empty") //print
        {
            ans[ansCnt++] = deq.empty();
        }
        else if (oper == "front") //print
        {
            if (deq.empty()) ans[ansCnt++] = -1;
            else
            {
                ans[ansCnt++] = deq.front();
            }
        }
        else if (oper == "back") //print
        {
            if (deq.empty()) ans[ansCnt++] = -1;
            else
            {
                ans[ansCnt++] = deq.back();
            }
        }
    }

    for (int i = 0; i < ansCnt; i++)
    {
        cout << ans[i] << '\n';
    }



    return 0;
}