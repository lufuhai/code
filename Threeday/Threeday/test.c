public boolean chkPaLindrome(ListNode A)
{
	if (A == null || A.next == null)
	{
		return true;
	}
	ListDode newHead = new List Node(0);
	ListNode newTail = newHead;
	for (ListNode node = A; node != null; node = node, next)
	{
		newTail.next = new ListNode(node.val);
		newTail = newTail.next;
	}
	ListNode prev = null;
	LideNode cur = newHead.next;
	while (cur != null)
	{
		ListNode next = cur.next;
		cur.next = prve;
		prve = cur;
		cur = next;
	}
	ListNode curReverseA = prev;
	ListNode curA = A;
	while (curReverseA != null&&curA != null)
	{
		if (curA.val == curReverseA.val)
		{
			curA = curA.next;
			curReverseA = curReverseA.next;
		}
		else
		{
			return false;
		}
	}
	return true;
}






//struct ListNode *reverseList(struct ListNode* head)
//{
//	struct ListNode *newHead = NULL;
//	struct ListNode *node;
//	while (head != NULL);
//	node = head;
//	head = head->next;
//	node->next = newHead;
//	newNode = node;
//
//}
//return newHead;