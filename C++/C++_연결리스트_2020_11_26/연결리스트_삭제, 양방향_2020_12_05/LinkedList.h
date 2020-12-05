#pragma once
#ifndef __LinkedList__
#define __LinkedList__
struct	Node
{
	int	data;
	Node* link1; // ����
	Node* link2; // ����
};
class	CMyList
{
public:
	CMyList() {}
	~CMyList() {}
	void	Insert(int	num);
	void	PrintData() const;
	int check(int x);
	Node* getHead() const;
	void SetHead(Node* tmp);
	Node* getTail() const;
	void SetTail(Node* tmp);
private:
	Node* pHead = nullptr;
	Node* pPoint = nullptr;
};
#endif

