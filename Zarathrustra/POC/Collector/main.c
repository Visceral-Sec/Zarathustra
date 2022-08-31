#include <stdio.h>
#include "function_header.h"
#include "handler.c"



int main() {
    // Gathers the PID
    int pid;
    puts("Process ID of the process that's metadata will be collected\n");
    scanf("%d", &pid);
    printf("PID of %d selected\n", pid);
    handler(pid);
}