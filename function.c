#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"

bool ListIsEmpty(void)
{
	bool ret=false;
	Node *p=(Node*)malloc( sizeof(Node) );
	if( p ) 
	{
		ret = true;
	}
	free(p);
	return ret;
}

bool add(List* pList, int number)
{
	bool ret=false;
	if ( ListIsEmpty() ) {
		Node *p=(Node*)malloc( sizeof(Node) );
		p->value = number;
		p->next = NULL;
		
		if( !pList->head ) {
			pList->head = pList->tail = p;
			p->last = NULL;
		} else {
			p->last = pList->tail;
			pList->tail = pList->tail->next = p;
		}
		pList->size++;
		ret = true;
	}
	return ret;
}

void PrintFromHead(List* pList)
{
	Node *p;
	for ( p=pList->head; p ; p=p->next) {
		printf("%d ", p->value);
	}
	printf("\n");
}

void PrintFromTail(List *pList)
{
	Node *p;
	for ( p=pList->tail; p ; p=p->last ) {
		printf("%d ", p->value);
	}
	printf("\n");
}

Node* search(List* pList, int number)
{
	Node *p;
	Node *ret = NULL;
	for ( p=pList->head; p; p=p->next) {
		if ( p->value == number ) {
			ret = p;
			break;
		}
	}
	return ret;
}

void del(List* pList, int number)
{
	Node *p,*q;
	for ( q=NULL, p=pList->head; p; q=p,p=p->next ) {
		if ( p->value == number ) {
			if ( q ) {
				q->next = p->next;
				p->next->last = q;
			} else {
				pList->head = p->next;
				p->next->last = NULL;
			}
			free(p);
			break;
		}
	}
}

void clear(List* pList)
{
	Node *p,*q;
	for ( p=pList->head ; p; p=q ) {
		q = p->next;
		free(p);
	}
}
