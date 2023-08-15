class Solution
{
    public:
        ListNode* partition(ListNode *head, int x)
        {
            ListNode less_head(0);	// Dummy node for nodes less than x
            ListNode *less = &less_head;

            ListNode greater_head(0);	// Dummy node for nodes greater than or equal to x
            ListNode *greater = &greater_head;

            ListNode *current = head;

            while (current)
            {
                if (current->val < x)
                {
                    less->next = current;
                    less = less->next;
                }
                else
                {
                    greater->next = current;
                    greater = greater->next;
                }

                current = current->next;
            }

            greater->next = nullptr;	// Set the last node of the greater partition to null
            less->next = greater_head.next;	// Connect the two partitions

            return less_head.next;	// Return the modified head of the linked list
        }

};