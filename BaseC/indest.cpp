#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num << " CTest Constructor" << endl;
	}
	~CTest() {			// ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "CTest Destructor" << endl;
	}		
};
class CTestSub : public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n):CTest(sn) {
		subn = n;
		cout << subn << " CTestSub Constructor" << endl;
	}
	~CTestSub() {		// ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "STestSub Destructor" << endl;
	}	
};

int main()
{
	CTest CT(10);
	CTestSub CT2(1, 10);
	return 0;
}