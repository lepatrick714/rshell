#ifndef __CMD_H__
#define __CMD_H__

#include <vector>
using namespace std;
#include "Base.h"

class Cmd: public Base {
    private:
    char *command; //name of the command
    queue<char*> flags; //vector holding the flags provided
    public:
    //constructors
    Cmd(char *command, queue<char*> flags);
    Cmd(char *command);

    void add_flag(char *a);
    //executes the command using the system calls fork
    //execvp and wait returns true if the command is executed
    //and false if it fails
    virtual bool execute();


    //For Debugging Purposes
    //`string getCommand();

    //void printFlags();
};

#endif
