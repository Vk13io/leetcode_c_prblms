```plaintext
Idea

The most efficient way to solve this problem while meeting the constraints (linear time complexity 

O(n) and constant space 

O(1)) is to use bitwise XOR.

XOR Properties

x⊕x=0 (Any number XOR itself is 0)


x⊕0=x (Any number XOR 0 remains unchanged)

XOR is commutative and associative: Order doesn't matter.

How XOR Solves the Problem
If we XOR all numbers together, duplicate elements cancel out, leaving only the single unique number.
```
