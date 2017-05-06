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

bool ListIsEmpty(void);					//检查空间是否足够储存 
bool add(List* pList, int number);		//添加至链表 
void PrintFromHead(List* pList);		//顺序输出链表 
void PrintFromTail(List *pList);		//逆序输出链表 
Node* search(List* pList, int number);	//查找链表 
void del(List* pList, int number);		//删除链表中的节点 
void clear(List* pList);				//清空链表 

#endif
