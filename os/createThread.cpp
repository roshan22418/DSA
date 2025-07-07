#include<iostream>
using namespace std;
#include <thread>
#include <stdio.h>
#include <unistd.h>

// #include <chrono>
// #include <thread>


/*
The unistd.h header file declares various constants, type definitions, and functions that facilitate interaction with the underlying operating system. These typically include system call wrapper functions and utilities for:
Process Management: Functions like fork(), exec*() family (e.g., execl, execvp),
 _exit(), getpid(), getppid(), sleep(), and alarm().


File I/O: Functions such as open(), close(), read(), write(), lseek(), dup(), and pipe().

System Information: Functions like getcwd(), gethostname(), getuid(), getgid(), and sysconf().

File System Operations: Functions including chdir(), chown(), link(), symlink(), and unlink().

While unistd.h is fundamental for Unix-like systems, its availability and specific implementations can vary on non-POSIX platforms like Windows. On such systems, alternative headers or libraries (e.g., windows.h for Windows API)
 are used to achieve similar functionalities. Some compatibility layers, like Cygwin or MinGW, provide their own versions of unistd.h and translate calls to underlying Windows functions.
 */



/*

fflush(stdin)


The code above takes only single input and gives the same result for the second input. 
Reason is because as the string is already stored in the buffer i.e. stream is not cleared ye
t as it was expecting string with spaces or new line. So, to handle this situation fflush(stdin)
 is used.*/

void task1(){
    for(int i = 0;i<5;i++){
        sleep(1);
        printf("%d",i);
        printf("\n");
        fflush(stdout);
    }
}



void task2(){
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        printf("%d",i);
        printf("\n");
        fflush(stdout);
    }
    
}



int main(){
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();
    return 0;
}