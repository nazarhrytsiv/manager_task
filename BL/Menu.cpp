//
// Created by Nazar on 21.02.2017.
//
#include "../Entity/Task.h"
#include "../main.cpp"
int FirstMenu();
void add_new_task();

void menu()
{
    int your_choice = 0;
    while(your_choice != 5){
        your_choice = FirstMenu();
        switch (your_choice){
            case 1:
            {
                add_new_task();
                system("cls");
                break;
            }


            case 2:
            {
                system("cls");
                break;
            }

            case 3:
            {
                system("cls");
                break;
            }
            case 4:
            {
                system("cls");
                break;
            }
            default:
            {
                system("cls");
                break;
            }
        }
    }
}


int FirstMenu() {
    int choose;
    cout << "1)Create" << endl;
    cout << "2)Read" << endl;
    cout << "3)Update" << endl;
    cout << "4)Delete" << endl;
    cin >> choose;
    return choose;
}


void add_new_task(Task & task_1, FILE *dataF)
{
    char state[MAX_LEN];
    char name[MAX_LEN];
    cout << "enter name: " << endl;
    cin >> name;
    cout << "enter state: " << endl;
    cin >> state;
    task_1.set_name(name);
    task_1.set_state(state);
}