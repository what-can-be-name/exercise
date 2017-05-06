#include <stdio.h>
#include <stdlib.h>
#include "node.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	List list;
	list.head = list.tail = NULL;
	list.size = 0;
	int number;
	do {
		scanf("%d", &number);
		if( number != -1 ) {
			add(&list, number);
		}
	} while ( number != -1 );
	PrintFromHead(&list);
	PrintFromTail(&list);
	scanf("%d",&number);
	
	Node *p = search(&list, number);
	if ( p ) {
		printf("%d\n", p->value);
	} else {
		printf("Not Found\n");
	}
	
	
	del(&list, number);
	PrintFromHead(&list);
	PrintFromTail(&list);
	clear(&list);
	return 0;
}


