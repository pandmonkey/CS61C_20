#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

// Assume 0 <= n <= 31
uint16_t get_bit(uint16_t x,
    unsigned n) {
// YOUR CODE HERE
// Returning -1 is a placeholder (it makes
// no sense, because get_bit only returns 
// 0 or 1)
return (x >> n) & 1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(uint16_t * x,
unsigned n,
unsigned v) {
// YOUR CODE HERE
(*x) = (*x) | (1 << n); // 变1
uint16_t vv = !v;
(*x) = (*x) ^ ((vv) << n); 

}

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t bit_val = get_bit(*reg, 0) ^ get_bit(*reg, 2) ^ get_bit(*reg, 3) ^ get_bit(*reg, 5); 
    *reg = (*reg) >> 1;
    set_bit(reg, 15, bit_val);
}

