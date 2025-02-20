The output of the code is:
20
20

Explanation:
Initially, `ptr` points to `x`. When `*ptr = 20` is executed, the value of `x` changes to 20. 
Later, `ptr` is reassigned to point to `y`. Changing the value of `y` through `ptr` does not affect `x`, as they are now different memory locations. 
Therefore, the second `printf` statement still outputs 20 (the value of x). 
This illustrates that changing where a pointer points is crucial and can be a source of bugs if not done carefully.