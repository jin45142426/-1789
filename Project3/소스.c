#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�޸� ������������ long long int ����
	long long int number = 0;

	long long int MAX = 0;

	int j = 1;

	scanf("%u", &number);

	while (1)
	{
		//������
		MAX += j;
		
		//������ ���� number���� Ŀ���� Ż��
		if (MAX > number)
			break;
		//�ڿ��� N�� �ִ밪 ���
		j++;
	}

	//���������� ���� �ڿ����� ���� MAX�� number�� �Ѿ�������� -1�� �����ش�.
	printf("%d\n", j - 1);
	return 0;
}

