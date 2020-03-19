# Assembly
---
References:
https://softwareengineering.stackexchange.com/a/279788  
http://www.tldp.org/HOWTO/html_single/Assembly-HOWTO/  
https://en.wikipedia.org/wiki/Machine_code  
https://linux.die.net/man/2/syscall  
https://filippo.io/linux-syscall-table/  

Definitions:

Machine code - is a computer program written in machine language that
can be executed directly by a computers central processing unit(CPU).
Each instruction causes tyhe CPU to perform a very specific task.
Common tasks are load memory from secondary memory storage, store memory
to secondary memory storage. Jump to a specific intruction or perform
arithmetic operation with the ALU(arithmetic logic unit) on one or more
bytes in a CPU register and/or memory.

SYSCALL- a small library function that invokes the system call whose
assembly language interface has the specified number with the 
specified arguments.  Useful, when there is no wrapper function in
the C library.
SYSENTER-

Benefits of Assembly
Machine-dependant registers are accessible
Machine I/O is accessible as well
Control exact code behavior of critical components and modules from code
Break the norm
Build interfaces between code fragments using incompatible conventions
Get unusual programming modes of processors
Fast code for tight loops to cope with bad compiler optimizations
Can produce hand optimized code perfectly tuned for your particular h/w
Complete control of your code

Disadvantages of Assembly
Low-level
Long and tedious to write
Bug prone
Hard to find errors or bugs
Bad maintainability
Non-portable
Spend time on details and can't focus on small and large algorithmic
design, that are known to speed up your code
Small changes require re-writes of your old assembly
