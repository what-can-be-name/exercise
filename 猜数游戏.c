#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
	srand((unsigned)time(NULL));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("������1��100֮������");
		scanf("%d", &a);
		if ( a > number ) {
			printf("��µ������ˡ�");
		} else if ( a < number ) {
			printf("��µ���С�ˡ�");
		}
		count ++;
	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);
	system("pause"); 

	return 0;
}
