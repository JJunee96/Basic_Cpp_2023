#include <iostream>

int main()
{
	char ch[5] = "hong";		// �迭����, ���ڿ� ���� ��������
	ch[0] = 'h';						// �����ϳ��� ����
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';
	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	//printf("char ũ��: %d\n", sizeof(char));
	//printf("%s\n", ch);
	//printf("ch[4] : %c\n", ch[4]);
	//printf("ch[4] : %s\n", ch[4]);
	//ch[1] = 'hong';
	printf("�迭�̸� ch: %p\n", ch);
	printf("�迭�ּ� ch: %p\n", &ch);


	return 0;
}