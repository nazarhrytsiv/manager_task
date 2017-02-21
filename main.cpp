#include "Entity/Task.h"
#include "DTO/Write_from_file_task.cpp"
#include "DTO/Write_in_file_task.cpp"
#include "BL/Menu.cpp"

void menu();

int main() {
    vector<Task> tasks;
    FILE *dataF = NULL;
    dataF = fopen("../Untiles/datafile.txt", "r+");
    write_from_file(tasks, dataF);
    menu(tasks, dataF);
    write_task_to_file(tasks,dataF);
    fclose(dataF);
    system("pause");
    return 0;
}

