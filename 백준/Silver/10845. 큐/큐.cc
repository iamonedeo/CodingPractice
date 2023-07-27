//큐 만들어보기
/*
#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	dat[head++];
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail - 1];
}

void test() {
	push(10); push(20); push(30);
	cout << front() << '\n'; // 10
	cout << back() << '\n'; // 30
	pop(); pop();
	push(15); push(25);
	cout << front() << '\n'; // 30
	cout << back() << '\n'; // 25
}

int main(void) {
	test();
}
*/

#include <iostream>
#include <queue>
#include <string>

int main() {
    using namespace std;
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n;
    cin >> n;
    cin.ignore();

    int ans[10005];
    int ans_cnt = 0;
    queue<int> myq;
    string oper;
    int num;
    int i;

    while (n--)
    {
        cin >> oper;
        cin.ignore();
        if (oper == "push")
        {
            cin >> num;
            cin.ignore();
            myq.push(num);
        }
        else if (oper == "pop")
        {
            if (!myq.empty())
            {
                ans[ans_cnt++] = myq.front();
                myq.pop();
            }
            else ans[ans_cnt++] = -1;
        }
        else if (oper =="size")
                ans[ans_cnt++] = myq.size();
        else if (oper =="empty")
        {
            if (myq.empty())
                ans[ans_cnt++] = 1;
            else ans[ans_cnt++] = 0;
        }
        else if (oper == "front")
        {
            if (myq.empty()) ans[ans_cnt++] = -1;
            else ans[ans_cnt++] = myq.front();
        }
        else if (oper == "back")
        {
            if (myq.empty()) ans[ans_cnt++] = -1;
            else ans[ans_cnt++] = myq.back();
        }
    }
    for (int i = 0; i < ans_cnt; i++)
    {
        cout << ans[i] << '\n';
    }


    return 0;
}