# Input
> A B

A and B are nonnegative integers in base 10, they are locations in memory.  
The result from the binary operation `a NAND b` is stored at location `B`. `a` here is the value at position `A`; `b` is value at position `B`  
Input is repeated until the program halts. (A1 B1 A2 B2 A3 B3 ...)  
4294967296 (=2^32) bits of memory are available.  
Memory does not guarantee any initial state.  
Setting value 1 to location [`2`] in memory halts the program and also dumps the memory to stdout.  

See also [craftyBLUE/Nand32](https://github.com/craftyBLUE/Nand32)
