Problem Statement:

You are asked to work with prime numbers in two steps:

First, find the prime number at a given position rank.
(For example, rank = 1 → 2, rank = 2 → 3, rank = 3 → 5, etc.)
Then, take that prime number as a new index (position) in the prime sequence, and find the prime number at that position.
Rank	1	2	3	4	5	6	7	8	9	10	11	12	13
Prime	2	3	5	7	11	13	17	19	23	29	31	37	41
Prime at Prime	3	5	11	17	31	41	59	67	83	109	127	157	179
Input:

A single integer rank where 1 <= rank <= 1000.
Output:

The program should print two values:

The prime number at position rank.
The prime number at the position equal to that prime number.
Test Cases
Input	Output
4	7
17
6	13
#include <stdio.h>

int main() {
    // Your code goes here

    return 0;
}
41