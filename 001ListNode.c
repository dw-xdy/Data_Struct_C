#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 链表的节点.
typedef struct ListNode {
	int val;
	struct ListNode* next;
} ListNode;


void printList(ListNode* head);                                // 打印链表
ListNode* createNode(int val);          					   // 创建链表节点

// 下面这四个链表题目都是比较初级的题目, 现在应该还是牵扯不到什么“思想”, 
// 但是这四个题的过程和代码一定要会, 而且一定要能手写出来, (实在不行直接背过)
// 我目前用的是“Java”, 但是我希望用“C语言”实现一遍, 
// 这样也能很好的锻炼我的C语言能力. 毕竟C语言是一定要精通的.(一定要非常精通!!!!!!)

ListNode* reverseList(ListNode* head);  					   // 1. 链表翻转
ListNode* mergeDoubleList(ListNode* head1, ListNode* head2);   // 2. 合并两个有序链表
ListNode* addTwoList(ListNode* h1, ListNode* h2);              // 3. 两个链表相加
ListNode* partition(ListNode* head, int x);                    // 4. 划分链表

//int main() {
//	ListNode node1 = { 7, NULL };
//	ListNode node2 = { 2, NULL };
//	ListNode node3 = { 6, NULL };
//	ListNode node4 = { 4, NULL };
//	ListNode node5 = { 5, NULL };
//	ListNode node6 = { 3, NULL };
//	ListNode node7 = { 1, NULL };
//	ListNode node8 = { 8, NULL }; 
//
//
//	node1.next = &node2;
//	node2.next = &node3;
//	node3.next = &node4;
//	node4.next = &node5;
//	node5.next = &node6;
//	node6.next = &node7;
//	node7.next = &node8;
//
//	//printList(&node1);
//
//	//printf("\n");
//	//ListNode* pre = reverseList(&node1);
//	//printList(pre);
//
//	//ListNode* mergeHead = mergeDoubleList(&node1, &node5);
//
//	//printList(mergeHead);
//
//	/*ListNode* head = addTwoList(&node1, &node5);*/
//
//	int a = 4;
//	ListNode* head = partition(&node1, a);
//	printList(head);
//	return 0;
//}



// 创建链表节点的辅助函数
ListNode* createNode(int val) {
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}

// 释放链表内存的辅助函数
void freeList(ListNode* head) {
	ListNode* current = head;
	while (current != NULL) {
		ListNode* temp = current;
		current = current->next;
		free(temp);
	}
}

// 打印链表
void printList(ListNode* head) {
	ListNode* current = head;

	while (current != NULL) {
		printf("%d -> ", current->val);
		current = current->next;
	}
	printf("NULL");
}

// 1. 链表翻转
ListNode* reverseList(ListNode* head) {
	ListNode* next = NULL;
	ListNode* pre = NULL;

	while (head != NULL) {
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}



// 2. 合并两个有序链表 (注意：必须两个都是有序的才行)
ListNode* mergeDoubleList(ListNode* head1, ListNode* head2) {
	if (head1 == NULL || head2 == NULL) {
		return (head1 == NULL) ? head2 : head1;
	}
	ListNode* head = (head1->val <= head2->val) ? head1 : head2;
	ListNode* cur1 = head->next;
	ListNode* cur2 = (head == head1) ? head2 : head1->next;
	ListNode* pre = head;

	while (cur1 != NULL && cur2 != NULL) {
		if (cur1->val <= cur2->val) {
			pre->next = cur1;
			cur1 = cur1->next;
		} else {
			pre->next = cur2;
			cur2 = cur2->next;
		}
		pre = pre->next;
	}

	pre->next = (cur1 != NULL) ? cur1 : cur2;

	return head;
}




// 3. 两个链表相加
ListNode* addTwoList(ListNode* h1, ListNode* h2) {
	ListNode* ans = NULL;
	ListNode* cur = NULL;
	int sum = 0;
	int carry = 0;

	while (h1 != NULL || h2 != NULL) {
		sum = ((h1 == NULL) ? 0 : h1->val)
			+ ((h2 == NULL) ? 0 : h2->val)
			+ carry;

		int val = sum % 10;
		carry = sum / 10;

		if (ans == NULL) {
			ans = createNode(val);
			cur = ans;
		} else {
			cur->next = createNode(val);
			cur = cur->next;
		}

		h1 = (h1 == NULL) ? NULL : h1->next;
		h2 = (h2 == NULL) ? NULL : h2->next;
	}

	if (carry == 1) {
		cur->next = createNode(1);
	}

	return ans;
}



// 4. 划分链表
ListNode* partition(ListNode* head, int x) {
	ListNode* leftHead = NULL;
	ListNode* leftTail = NULL;
	ListNode* rightHead = NULL;
	ListNode* rightTail = NULL;
	ListNode* next = NULL;
	
	while (head != NULL) {
		next = head->next;
		head->next = NULL;
		if (head->val < x) {
			if (leftHead == NULL) {
				leftHead = head;
			} else {
				leftTail->next = head;
			}
			leftTail = head;
		} else {
			if (rightHead == NULL) {
				rightHead = head;
			} else {
				rightTail->next = head;
			}
			rightTail = head;
		}
		head = next;
	}

	if (leftHead == NULL) {
		return rightHead;
	}
	leftTail->next = rightHead;
	return leftHead;
}



