//
// Created by Nazar on 21.02.2017.
//

#include "Task.h"

namespace Program{


    void Task::set_state(char *state) {
        this->state = state;
    }

    char *Task::get_state() {
        return this->state;
    }
}
