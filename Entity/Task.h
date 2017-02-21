//
// Created by Nazar on 21.02.2017.
//

#ifndef MANAGER_TASKS_TASK_H
#define MANAGER_TASKS_TASK_H
#pragma once

#include <iostream>
int const MAX_LEN = 15;

namespace Program{
    class Task {
    private:
        char state[MAX_LEN];
    public:
        void set_state(char* state);

        char * get_state();
    };
}

#endif //MANAGER_TASKS_TASK_H
