#include	<iostream>
#include	"LinkedList.h";
#include	"CMyListEx.h";
using	namespace	std;
int main() {
	CMyListEx hello;
	int choice = 99, answer=0;
	while (1) {
		cout << "--------------------- \nCMyList �޴�\n1 ���� Head\n2 ���� Tail\n3 ���� Head\n4 ���� Tail\n5 ��� Head �� Tail\n6 ��� Tail �� Head\n0 ����\n---------------------\n�޴��� ������(���� �Է�) :";
		cin >> choice;
		if (cin.fail() == false) {
			cin.clear();
			cin.ignore(1024, '\n');
			if (choice == 1) {
				cout << endl;
				cout << "������ �����͸� �Է����ּ��� : ";
				cin >> answer;
				while (cin.fail() == true) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "���ڸ� �Է��ϼ���~!\n" << endl;
					cout << "������ �����͸� �Է����ּ��� : ";
					cin >> answer;
				}
				cin.clear();
				cin.ignore(1024, '\n');
				hello.Insert_Head(answer);
			}
			else if (choice == 2) {
				cout << endl;
				cout << "������ �����͸� �Է����ּ��� : ";
				cin >> answer;
				while (cin.fail() == true) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "���ڸ� �Է��ϼ���~!\n" << endl;
					cout << "������ �����͸� �Է����ּ��� : ";
					cin >> answer;
				}
				cin.clear();
				cin.ignore(1024, '\n');
				hello.Insert(answer);
			}
			else if (choice == 3) {
				hello.remove_Head();
			}
			else if (choice == 4) {
				hello.remove_Tail();
			}
			else if (choice == 5) {
				cout << endl;
				hello.PrintData();
			}
			else if (choice == 6) {
				hello.PrintData_Tail();
			}
			else if (choice == 0) {
				break;
			}
			else {
				cout << "0, 1, 2 �� ���ڸ� �Է��ϼ���~!" << endl;
			}
		}
		else {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "0, 1, 2 �� ���ڸ� �Է��ϼ���~!" << endl;
		}
	}
}