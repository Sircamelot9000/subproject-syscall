#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

// Constants for valid file descriptor values
#define MIN_FD_VAL 2
#define MAX_FD_VAL 128
#define DIR_CREATE_CNST 16

// File lock declaration
extern struct lock f_lock;

void syscall_init (void);
//So exception.c can also use this 
//function
void exit(int status);

int report_mem_usage(void);  // Declare the system call function

#endif /* userprog/syscall.h */
