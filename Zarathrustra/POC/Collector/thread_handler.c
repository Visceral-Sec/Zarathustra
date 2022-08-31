#include <stdio.h>
#include "function_handler.h"
#include "proc_reader.c"

// Will be used to handle threading as well
int thread_handler(int pid){
    // Change the Printf to a logging function
    printf("Handler Function called with PID: %d", pid);
    ProcReader(pid);
};
