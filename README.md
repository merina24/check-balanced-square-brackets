# check-balanced-square-brackets
this code checks if brackets are balanced it checks all types of brackets
## Description
This program checks whether a given string contains **balanced brackets** using a stack-based approach in C++.  
It supports the following bracket types:

- Parentheses `()`
- Curly braces `{ }`
- Square brackets `[ ]`

The program ensures that:
- Every opening bracket has a matching closing bracket
- Brackets are closed in the correct order

---

## How It Works
1. Traverse the input string character by character
2. Push opening brackets onto a stack
3. When a closing bracket is found:
   - Check if the stack is empty (invalid if empty)
   - Pop the top element and verify it matches
4. After processing the string:
   - If the stack is empty → brackets are balanced
   - Otherwise → not balanced
