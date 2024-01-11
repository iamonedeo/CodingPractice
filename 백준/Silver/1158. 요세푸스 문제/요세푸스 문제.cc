#include <iostream>

using namespace std;

class Node
{
public:
	Node* nxt, * prv;
	unsigned int val;
};

int main()
{
	int n, th;
	int* ans;
	cin >> n >> th;
	ans = new int[n];

	Node* crntNode= new Node();
	Node* firstNode = crntNode;
	crntNode->val = 1;	

	for (int i = 2; i <= n; i++)
	{
		Node* addNode = new Node();
		addNode->val = i;
		addNode->prv = crntNode;
		crntNode->nxt = addNode;
		crntNode = crntNode->nxt;
	}
	crntNode->nxt = firstNode;
	firstNode->prv = crntNode;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < th; j++)
		{
			crntNode = crntNode->nxt;
		}
		ans[i] = crntNode->val;
		
		if (crntNode->nxt != nullptr && crntNode->prv != nullptr)
		{
			crntNode->nxt->prv = crntNode->prv;
			crntNode->prv->nxt = crntNode->nxt;
		}
		Node* temp = crntNode;
		crntNode = crntNode->prv;

		delete temp;
	}
	
	cout << "<";
	for (int i = 0; i < n-1; i++)
		cout << ans[i] << ", ";
	cout << ans[n - 1] << ">";


	delete[] ans;

	return 0;
}