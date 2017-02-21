#include "Entity/Task.h"
#include "DTO/Write_from_file_task.cpp"
#include "DTO/Write_in_file_task.cpp"


int main() {
    vector<Task> tasks;
    FILE *dataF = NULL;
    dataF = fopen("../Untiles/datafile.txt", "r+");
    write_from_file(tasks, dataF);
    write_task_to_file(tasks,dataF);
}