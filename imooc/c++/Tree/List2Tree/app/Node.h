#ifndef NODE_H#define NODE_Hclass Node{public:	Node();	~Node();	Node *SearchNode(int nodeIndex);	void DeleteNode();	void PreorderTraversal();	void InorderTraversal();	void PostorderTraversal();		int nodeIndex;	int data;	Node *m_pParentNode;	Node *m_pLeftNode;	Node *m_pRightNode;};#endif