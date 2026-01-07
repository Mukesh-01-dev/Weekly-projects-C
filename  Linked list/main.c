#include<stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

int insert(struct ListNode* l1, struct ListNode* l2) {
    l1->next = l2;
}   



int main() {

}