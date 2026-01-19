#Difference between Parse Tree and Abstract Syntax Tree (AST)

##A parse tree shows how a string is derived using the grammar rules. It includes all grammar symbols, both terminals and non-terminals, 
and is useful for verifying the syntactic correctness of a program. A parse tree is usually larger because it shows every step of derivation, 
including parentheses, punctuation, and other syntax details.

##An abstract syntax tree (AST) represents the essential structure of the program. It omits unnecessary grammar symbols and focuses only 
on meaningful constructs like operators, operands, and expressions. ASTs are more compact and are used for semantic analysis, optimization, and code
generation in the compiler.

Example: For the expression a + b, the parse tree would include all grammar symbols like E → E + T, while the AST would simply show the 
operator with its operands:

   +
  / \
 a   b


Conclusion: A parse tree is mainly for syntax checking, while an AST is for analyzing and processing the program.