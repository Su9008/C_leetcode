#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* createNode(int val)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->val = val;
	node->next = NULL;
	return node;
}

bool hasCycle(struct ListNode* head) {
	if (!head || !head->next) return false;
	struct ListNode* ptr = head;
	while (ptr->next)
	{
		if (ptr->val == INT_MAX)return true;
		ptr->val = INT_MAX;
		ptr = ptr->next;
	}
	return false;
}

int main()
{
	ListNode* head = createNode(3);
	head->next = createNode(2);
	head->next->next = createNode(0);
	head->next->next->next = createNode(-4);
	head->next->next->next->next = head->next;
	int checkcycle = hasCycle(head);
	printf("HasCycle = %s\n", checkcycle ? "True" : "False");
	return 0;
}