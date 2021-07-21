#ifndef THREAD_H
#define THREAD_H
#include <QThread>

class Thread
{
public:
    Thread();
    void closeThread()(){
        system("pkexec ls /");
    };

protected:
    virtual void run();

private:
    volatile bool isStop;
};

#endif // THREAD_H
