//
// Created by Nazar on 21.02.2017.
//

#ifndef MANAGER_TASKS_TASK_H
#define MANAGER_TASKS_TASK_H
#pragma once
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
int const MAX_LEN = 15;
using namespace std;
namespace Program{
    class Task {
    private:
        char state[MAX_LEN];
        char name[MAX_LEN];
    public:
        void set_state(char* state);

        char * get_state();

        void set_name(char* name);

        char * get_name();
    };
}

#endif //MANAGER_TASKS_TASK_H
