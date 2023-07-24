/*
정의와 성질
1. 원소의 추가/제거 O(1)
2. 제일 상단의 원소 확인 O(1)
3. 제일 상단 외 나머지 원소들의 확인/변경 '원칙적으로' 불가능
	- 배열로 스택을 구성하면 4번을 가능으로 할 수 도 있음.

STL stack
1. 함수: push, pop, top, empty
2. 스택이 비어있는데 pop이나top을 호출하면 런타임오류가 나기에 empty인지 사전 확인


*/

//스택 구현
/*
#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos++] = x;
}

void pop() {
	pos--;
}

int top() {
	return dat[pos - 1];
}

void test() {
	push(5); push(4); push(3);
	cout << top() << '\n'; // 3
	pop(); pop();
	cout << top() << '\n'; // 5
	push(10); push(12);
	cout << top() << '\n'; // 12
	pop();
	cout << top() << '\n'; // 10
}

int main(void) {
	test();
}
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> sta;
    int quant;
    cin >> quant;
    cin.ignore();
    string oper;
    int x;
    int ans[10005];
    int count = 0;

    while (quant--)
    {
        cin >> oper;
        cin.ignore();
        if (oper == "push")
        {
            cin >> x;
            cin.ignore();
            sta.push(x);
        }
        else if (oper == "pop")
        {
            if (!sta.empty())
            {
                ans[count++] = sta.top();
                sta.pop();
            }
            else ans[count++] = -1;
        }
        else if (oper == "size")
        {
            ans[count++] = sta.size();
        }
        else if (oper == "empty")
        {
            ans[count++] = sta.empty();
        }
        else if (oper == "top")
        {
            if (!sta.empty()) ans[count++] = sta.top();
            else ans[count++] = -1;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << ans[i] << '\n';
    }


}