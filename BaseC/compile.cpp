#include <iostream>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����)
class Myclass {
	// �������:�Ӽ�
private:
	char id;		// ���� �ʱ�ȭ�� ���� �ؾ���
	int age;
	char name[10];
	// ����Լ�(=�޼ҵ�):���
public:
	void set(char aid, int aage, const char *aname) // ���ȭ ��������� const
	{
		id = aid;
		age = aage;
		strcpy_s(name, 10, aname);
		//name = *aname;
	}
	void get()
	{
		cout << id <<' '<< name <<' ' << age << endl;
	}
	Myclass();
};

Myclass::Myclass()
{
	cout << "Myclass ������ȣ��" << endl;
}

class Myclass2 {
private:
	char id;
	int age;
	char name[10];
public:
	Myclass2(char aid, int aage, const char* aname);	// ������ ����
	void getData();		// �޼ҵ� ����(����)
	Myclass2();
};

Myclass2::Myclass2()
{
	cout << "myclass ������ȣ��" << endl;
}
Myclass2::Myclass2(char aid, int aage, const char* aname) : id(aid), age(aage) {	// ������ ����
	printf("������ ȣ��\n");
	//id = aid;
	//age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass2::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main()
{
	Myclass s;
	s.set('1', 23, "ȫ�浿");
	s.get();

	Myclass2 s2('2', 23, "ȫ�浿");
	s2.getData();

	return 0;
}