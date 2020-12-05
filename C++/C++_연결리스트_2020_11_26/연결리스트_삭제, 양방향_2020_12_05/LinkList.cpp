#include <iostream>
#include "LinkedList.h"
using namespace std;
int CMyList::check(int x) {
	if (pHead == nullptr) {
		return 0;
	}
	Node* Print = pHead;
	while (Print->link2 != nullptr) {
		if (Print->data != x) {
			Print = Print->link2;
		}
		else {
			return 1;
		}
	}
	if (Print->data != x) {
		return 0;
	}
	return 1;
}
Node* CMyList::getHead() const
{
	return pHead;
}
void CMyList::SetHead(Node* tmp)
{
	pHead = tmp;
	return;
}
Node* CMyList::getTail() const
{
	return pPoint;
}
void CMyList::SetTail(Node* tmp)
{
	pPoint = tmp;
	return;
}
void CMyList::Insert(int num) {
	if (check(num) == 0) {
		cout << endl;
		Node* new_node = new Node;
		new_node->data = num;
		new_node->link1 = pPoint;
		new_node->link2 = nullptr;
		if (pHead == nullptr) {
			pHead = new_node;
			pPoint = new_node;
		}
		else {
			pPoint->link2 = new_node;
			pPoint = new_node;
		}
		PrintData();
	}
	else {
		//중복
		cout << num << " 는 중복입니다!" << endl;
	}
}
void CMyList::PrintData() const {
	if (pHead == nullptr) {
		cout << "출력할 데이터가 없습니다." << endl;
		return;
	}
	Node* Print = pHead;
	int i = 1;
	cout << "CMyList 데이터 : [Head] ";
	while (Print->link2 != nullptr) {
		cout << Print->data << " - ";
		Print = Print->link2;
		i++;
	}
	cout << Print->data << " [Tail] " <<endl;
	cout << "데이터 개수 : " << i << "개\n" << endl;
}