#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node* nxt, * prv;
	char val;
};

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	cin.ignore();

	string str;
	Node* crntNode;
	Node** ans = new Node*[n];

	for (int i = 0; i < n; i++)
	{
		getline(cin, str);
		crntNode = new Node();
		crntNode->prv = nullptr;
		for (int j = 0; j < str.size(); j++)
		{
				switch (str[j])
				{
					//crntNode : 커서의 오른쪽에 있는 알파벳
				case '<': // 좌측 이동
					if (crntNode->prv != nullptr)
						crntNode = crntNode->prv;
					break;
				case '>': // 우측 이동
					if (crntNode->nxt != nullptr)
						crntNode = crntNode->nxt;
					break;
				case '-': // crntNode 삭제
				{
					if (crntNode->prv == nullptr) continue;
					if (crntNode->nxt != nullptr)
						crntNode->nxt->prv = crntNode->prv;
					crntNode->prv->nxt = crntNode->nxt;

					Node* temp = crntNode->prv;
					delete crntNode;

					crntNode = temp;
				}
					break;
				default:
					{
						Node* newNode = new Node();
						newNode->nxt = nullptr;
						newNode->prv = nullptr;

						newNode->val = str[j];

						if (crntNode->nxt != nullptr)
						{
							newNode->nxt = crntNode->nxt;
							crntNode->nxt->prv = newNode;
						}
						crntNode->nxt = newNode;
						newNode->prv = crntNode;
						crntNode = newNode;
					}
				break;
				}
		}
		ans[i] = crntNode;
		crntNode = nullptr;

	}
	for (int i = 0; i < n; i++)
	{
		while (ans[i]->prv != nullptr)
		{
			ans[i] = ans[i]->prv;
		}
		ans[i] = ans[i]->nxt;
		Node* deleteNode;
		while (ans[i] != nullptr)
		{
			cout << ans[i]->val;
			deleteNode = ans[i];
			ans[i] = ans[i]->nxt;

			delete deleteNode;
		}
		cout << "\n";
	}

	delete[] ans;

	return 0;
}