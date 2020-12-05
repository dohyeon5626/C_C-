#pragma once
#include "LinkedList.h"
class CMyListEx :  public CMyList
{
public:
	void Insert(int num);
	void Insert_Head(int num);
	void remove_Head();
	void remove_Tail();
	void PrintData() const;
	void PrintData_Tail() const;
private:
	//Node* pHead = nullptr;
	//Node* pPoint = nullptr;
};