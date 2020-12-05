#include <iostream>
#include "CMyListEx.h"
using namespace std;
void CMyListEx::Insert(int num) // tail ����
{
	CMyList::Insert(num);
}
void CMyListEx::Insert_Head(int num) {
	int check = CMyList::check(num);
	Node* pHead=CMyList::getHead();
	Node* pPoint = CMyList::getTail();
	if (check == 0) {
		cout << endl;
		Node* new_node = new Node;
		new_node->data = num;
		if (pHead != nullptr) {
			new_node->link2 = pHead;
			pHead->link1 = new_node;
			new_node->link1 = nullptr;
			pHead = new_node;
		}
		else {
			pHead = new_node;
			pPoint = new_node;
			new_node->link1 = nullptr;
			new_node->link2 = nullptr;
		}
		CMyList::SetHead(pHead);
		CMyList::SetTail(pPoint);
		PrintData();
	}
	else {
		//�ߺ�
		cout << num << " �� �ߺ��Դϴ�!" << endl;
	}
}
void CMyListEx::remove_Head()
{
	Node* pHead = CMyList::getHead();
	Node* pPoint = CMyList::getTail();
	Node* remove = pHead;
	if (pHead->link2!=nullptr) {
		pHead = pHead->link2;
		pHead->link1 = nullptr;
		free(remove);
	}
	else {
		free(remove);
		pHead = nullptr;
		pPoint = nullptr;
	}
	CMyList::SetHead(pHead);
	CMyList::SetTail(pPoint);
	CMyList::PrintData();
	return;
}
void CMyListEx::remove_Tail()
{
	Node* pHead = CMyList::getHead();
	Node* pPoint = CMyList::getTail();
	Node* remove = pPoint;
	if (pPoint->link1 != nullptr) {
		pPoint = pPoint->link1;
		pPoint->link2 = nullptr;
		free(remove);
	}
	else {
		free(remove);
		pHead = nullptr;
		pPoint = nullptr;
	}
	CMyList::SetHead(pHead);
	CMyList::SetTail(pPoint);
	CMyList::PrintData();
	return;
}
void CMyListEx::PrintData() const{
	CMyList::PrintData();
}

void CMyListEx::PrintData_Tail() const
{
	Node* pPoint = CMyList::getTail();
	if (pPoint == nullptr) {
		cout << "����� �����Ͱ� �����ϴ�." << endl;
		return;
	}
	Node* Print = pPoint;
	int i = 1;
	cout << endl <<"CMyList ������ : [Tail] ";
	while (Print->link1 != nullptr) {
		cout << Print->data << " - ";
		Print = Print->link1;
		i++;
	}
	cout << Print->data << " [Head] " << endl;
	cout << "������ ���� : " << i << "��\n" << endl;
}
