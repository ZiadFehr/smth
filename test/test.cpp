#include<iostream>
using namespace std;
class CNode
{
public:
	int info;
	CNode* PNext;
};
class CList
{
public:
	CNode* PHead;
	CNode* PTail;
	CList() {
		PHead = NULL;
		PTail = NULL;
	}
	void DispAll() {
		class CNode* Ptrav;
		Ptrav = PHead;
		while (Ptrav != NULL) {
			cout << Ptrav->info << endl;
			Ptrav = Ptrav->PNext;
		}
	}
	void Attach(CNode* Pnn) {
		if (PHead = NULL) {
			PHead = Pnn;
			PTail = Pnn;
		}
		else  if (PTail = NULL) {
			PTail->PNext = Pnn;
			PTail = Pnn;
		}
	}
	~CList() {
		CNode* Ptrav;
		Ptrav = PHead;
		while (Ptrav != NULL) {
			PHead = PHead->PNext;
			delete Ptrav;
			Ptrav = PHead;
		}
	}
};
int main()
{
	CList L;
	CNode* Pnn;
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		Pnn = new CNode;
		cin >> Pnn->info;
		Pnn->PNext = NULL;
		L.Attach(Pnn);
	}
	L.DispAll();
	return 0;
}