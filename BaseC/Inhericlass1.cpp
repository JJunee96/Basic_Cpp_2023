#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char* myname, int myage);
	void getData();
};
Person::Person(const char* myname, int myage)
{
	strcpy(name, myname);
	age = myage;
}
void Person::getData() {
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}

class Student : public Person{
private:
	int studentId;
public:
	Student(const char* name, int age, int stdId);
	void showData();
};
Student::Student(const char* sname, int sage, int stdId)
	: Person(sname, sage)
{
	studentId = stdId;
}
void Student::showData() {
	cout << studentId << endl;
}
int main()
{
	Student p("������", 28, 20158445);
	p.getData();
	printf("�ڽ� Ŭ���� �Լ�\n");
	p.showData();
	return 0;
}