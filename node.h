#ifndef _NODE_H_
#define _NODE_H_
#include <stdbool.h>
typedef struct _node {
	int value;
	struct _node *next;
	struct _node *last;
} Node;

typedef struct _list {
	Node* head;
	Node* tail;
	int size;
} List; 

bool ListIsEmpty(void);					//���ռ��Ƿ��㹻���� 
bool add(List* pList, int number);		//��������� 
void PrintFromHead(List* pList);		//˳��������� 
void PrintFromTail(List *pList);		//����������� 
Node* search(List* pList, int number);	//�������� 
void del(List* pList, int number);		//ɾ�������еĽڵ� 
void clear(List* pList);				//������� 

#endif
