Simple `SWAP` macro for C code. It was in my gists, but I figured out
that I make a complete repository, even if it's like really simple.

To use it, use `SWAP(a, b)`. `a` and `b` have to be lvalues. You can
swap values, as long they aren't registers (this is a limitation of
macro.) The values have to use identical types, otherwise compiler will
complain about uncompatible pointer types (and checking `sizeof(void)`
if you are using `-pedantic`.)
