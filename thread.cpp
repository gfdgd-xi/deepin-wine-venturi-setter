#include "thread.h"

Thread::Thread()
{
    isStop = false;
}

void Thread::closeThread(){
    isStop = true;
}

void Thread::run(){
    system("pkexec ls /");
}
