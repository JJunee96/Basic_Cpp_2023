#include <iostream>
int main()
{
	int val1, val2;
	int res = 0;
	std::cout << "�ΰ� �Է�: ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) {
			res += i;
		}
	}
	else {
		for (int i = val2 + 1; i < val1; i++) {	
			res += i;
		}
	}
	std::cout << "�� ���� ���� ��: " << res << std::endl;

	return 0;
}