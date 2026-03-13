#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head != NULL) {
        temp = head;       // Temporarily store the current node
        head = head->next; // Move the pointer to the next node first to avoid losing the path ahead
        free(temp);        // Release the previously stored node
    }
}

void printList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr) {
        printf("%d%s", curr->val, curr->next ? " -> " : "");
        curr = curr->next;
    }
    printf("\n");
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* merged = (struct ListNode*)malloc(sizeof(struct ListNode));

    struct ListNode* last = merged; // last pointer which updates

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            last->next = list1;
            list1 = list1->next;
        }
        else
        {
            last->next = list2;
            list2 = list2->next;
        }
        last = last->next;
    }
    if (list1 != NULL)
        last->next = list1;
    else
        last->next = list2;

    return merged->next;
}

int main()
{
    // build List 1: 1 -> 2 -> 4
    struct ListNode* list1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->val = 1;
    list1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->next->val = 2;
    list1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->next->next->val = 4;
    list1->next->next->next = NULL;

    // build List 2: 1 -> 3 -> 4
    struct ListNode* list2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->val = 1;
    list2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->next->val = 3;
    list2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->next->next->val = 4;
    list2->next->next->next = NULL;

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    struct ListNode* mergedHead = mergeTwoLists(list1, list2);
    printf("Merged List: ");
    printList(mergedHead);
    freeList(mergedHead);
    return 0;
}