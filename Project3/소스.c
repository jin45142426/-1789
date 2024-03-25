#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//메모리 제한으로인한 long long int 선언
	long long int number = 0;

	long long int MAX = 0;

	int j = 1;

	scanf("%u", &number);

	while (1)
	{
		//수열합
		MAX += j;
		
		//수열의 합이 number보다 커지면 탈출
		if (MAX > number)
			break;
		//자연수 N의 최대값 계산
		j++;
	}

	//마지막으로 더한 자연수로 인해 MAX가 number를 넘어버림으로 -1을 더해준다.
	printf("%d\n", j - 1);
	return 0;
}

