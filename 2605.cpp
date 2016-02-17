#include <stdio.h>

class C_LINKEDLIST {
private:
	struct S_NODE {
		int nData;
		S_NODE *pNext;
	};
private:
	S_NODE *m_pHead;
	S_NODE *m_pPos;
	S_NODE *m_pUpdate;
public:
	C_LINKEDLIST();
	void init();
	void createCur(int nData, int nPos);
	void popAll();
};


int main(void) {
	int N, i;
	int P;
	C_LINKEDLIST cList;
	
	cList.init();
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++) {
		scanf("%d", &P);
		cList.createCur(i, i - 1 - P);
	}
	cList.popAll();
	return 0;
}


C_LINKEDLIST::C_LINKEDLIST() 
: m_pHead(NULL), m_pPos(NULL), m_pUpdate(NULL) {
	
}

void C_LINKEDLIST::init() {
	S_NODE *pDumHead = new S_NODE();
	pDumHead->nData = -1;
	pDumHead->pNext = NULL;

	m_pHead = pDumHead;
	
	S_NODE *pDumTail = new S_NODE();
	pDumTail->nData = -1;
	pDumTail->pNext = NULL;
	
	m_pHead->pNext = pDumTail;
}

void C_LINKEDLIST::createCur(int nData, int nPos) {
	S_NODE *pNewNode = new S_NODE();
	pNewNode->nData = nData;
	pNewNode->pNext = NULL;

	int i;
	m_pPos = m_pHead;
	for(i = 0; i < nPos; i++) {
		m_pPos = m_pPos->pNext;
	}
	m_pUpdate = m_pPos->pNext;
	m_pPos->pNext = pNewNode;
	pNewNode->pNext = m_pUpdate;
}

void C_LINKEDLIST::popAll() {
	m_pPos = m_pHead->pNext;
	while(m_pPos->nData != -1) {
		printf("%d ", m_pPos->nData);
		m_pPos = m_pPos->pNext;
	}
}
