#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) {
		strcpy_s(name, aname);
		id = aid;
		age = aage;
	}
	//void setData(const char aname[20], int aid, int aage) {
	//	//name = "ȫ�浿";
	//	strcpy_s(name, aname);
	//	id = aid;
	//	age = aage;
	//}
	void getData() {
		cout << "�̸� : " << name << " �ֹ� : " << id << " ���� : " << age << endl;
	}
};
int main()
{
	//Human h;
	//h.setData("ȫ�浿", 1, 30);
	Human h ("ȫ�浿", 1, 30);
	h.getData();
	return 0;
}