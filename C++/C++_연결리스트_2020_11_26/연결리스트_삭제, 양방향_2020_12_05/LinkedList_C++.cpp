#include	<iostream>
#include	"LinkedList.h";
#include	"CMyListEx.h";
using	namespace	std;
int main() {
	CMyListEx hello;
	int choice = 99, answer=0;
	while (1) {
		cout << "--------------------- \nCMyList 메뉴\n1 삽입 Head\n2 삽입 Tail\n3 삭제 Head\n4 삭제 Tail\n5 출력 Head → Tail\n6 출력 Tail → Head\n0 종료\n---------------------\n메뉴를 고르세요(숫자 입력) :";
		cin >> choice;
		if (cin.fail() == false) {
			cin.clear();
			cin.ignore(1024, '\n');
			if (choice == 1) {
				cout << endl;
				cout << "삽입할 데이터를 입력해주세요 : ";
				cin >> answer;
				while (cin.fail() == true) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "숫자를 입력하세요~!\n" << endl;
					cout << "삽입할 데이터를 입력해주세요 : ";
					cin >> answer;
				}
				cin.clear();
				cin.ignore(1024, '\n');
				hello.Insert_Head(answer);
			}
			else if (choice == 2) {
				cout << endl;
				cout << "삽입할 데이터를 입력해주세요 : ";
				cin >> answer;
				while (cin.fail() == true) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "숫자를 입력하세요~!\n" << endl;
					cout << "삽입할 데이터를 입력해주세요 : ";
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
				cout << "0, 1, 2 중 숫자를 입력하세요~!" << endl;
			}
		}
		else {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "0, 1, 2 중 숫자를 입력하세요~!" << endl;
		}
	}
}