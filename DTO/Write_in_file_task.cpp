//
// Created by Nazar on 21.02.2017.
//
#include "../Entity/Task.h"
using Program::Task


void write_task_to_file(vector<Task> &tasks, FILE * dataF) {
    for (int i = 0; i < tasks.size(); ++i) {
        fprintf(dataF, "%s\n", tasks[i].get_state());
    }
}
