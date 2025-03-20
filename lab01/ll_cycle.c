#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node * tortoise = head;
    node * hare = head;
    while (!hare) {
        if (hare == tortoise) {
            return 1;
        } 
        hare = hare->next;
        if (!hare) {
            return 0;
        }
        if (hare == tortoise) {
            return 1;
        }
        hare = hare->next;
        tortoise = tortoise ->next;
    }
    return 0;
}

int main() {
    
}