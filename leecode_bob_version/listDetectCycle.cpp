#include "listNode.h"

ListNode* listDetectCycle(ListNode* head){
	ListNode* slow = head, *fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast){
			ListNode * slow2 = head;
			while (slow2 != slow){
				slow2 = slow2->next;
				slow = slow->next;
			}
			return slow2;
		}
	}
	return NULL;
}

