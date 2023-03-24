#include <iostream>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉)
class Myclass {
	// 멤버변수:속성
private:
	char id;		// 변수 초기화를 먼저 해야함
	int age;
	char name[10];
	// 멤버함수(=메소드):기능
public:
	void set(char aid, int aage, const char *aname) // 상수화 시켜줘야함 const
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
	cout << "Myclass 생성자호출" << endl;
}

class Myclass2 {
private:
	char id;
	int age;
	char name[10];
public:
	Myclass2(char aid, int aage, const char* aname);	// 생성자 원형
	void getData();		// 메소드 원형(선언)
	Myclass2();
};

Myclass2::Myclass2()
{
	cout << "myclass 생성자호출" << endl;
}
Myclass2::Myclass2(char aid, int aage, const char* aname) : id(aid), age(aage) {	// 생성자 정의
	printf("생성자 호출\n");
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
	s.set('1', 23, "홍길동");
	s.get();

	Myclass2 s2('2', 23, "홍길동");
	s2.getData();

	return 0;
}