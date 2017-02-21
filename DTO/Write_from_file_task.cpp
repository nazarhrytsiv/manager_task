//
// Created by Nazar on 21.02.2017.
//
#include "../Entity/Task.h"

using Program::Task

void write_from_file(vector<Task> &tasks, FILE * dataF){
//    vector<Task> tasks;
    Task task_1;
//    FILE *dataF = NULL;
//    dataF = fopen("datafile.txt", "r+");
    if (dataF != NULL)
    {
        while (!feof(dataF))
        {
            char state[MAX_LEN];
            fscanf(dataF, "%p", &state);
            task_1.set_state(state);
            tasks.push_back(task_1);
        }
        tasks.pop_back();
    // clean datafile
        dataF = fopen("datafile.txt", "w+");
        if (dataF == NULL)
        {
            cout << "Cannot open datafile.txt for writing" << endl;
        }
    }
    else
    {
        cout << "Cannot open file datafile.txt" << endl;
    }
}