#include <iostream>
using namespace std;

class Myclass {
private:					// 외부의 접근을 불허한다
	int private_val;
public:						// 외부접근 가능
	int public_val;
protected:				// 상속에서만 접근가능
	int protected_val;

public:						// 멤버함수는 무조건 public
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "private_val: " << private_val << endl;
	}
};

int main()
{
	Myclass o;
	//o.private_val;
	o.public_val = 100; 
	//o.protected_val;
	o.set(200);
	o.get();
	return 0;
}