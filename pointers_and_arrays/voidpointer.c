'pointer to memory with no assumptions what type is there stored'

A pointer to void is a "generic" pointer type. A void * can be converted to any other pointer type without an explicit cast. You cannot dereference a void * or do pointer arithmetic with it; you must convert it to a pointer to a complete data type first.
