#include <iostream>
#include <windows.h>
using namespace std;
void print_tasks(string tasks[], int task_count)
{
   cout << "tasks to do: " << endl;
   cout<<"------------------" << endl; 
   for(int i=0;i<task_count ; i++)
   {
    cout << "task "<<i<<" : "<<tasks[i] << endl;
   }
    cout<<"------------------" << endl;
}

int main()
{



    string tasks[10] = {""};
    //counter var - know how many tasks 
    int task_count = 0; 

    int option = -1;
    while (option != 0);
    {
        //menu
        cout << "1. todo list" << endl;
        cout << "2. add task" << endl;
        cout << "3. view tasks" << endl;
        cout << "4. delete task" << endl;
        cout << "0. terminate" << endl;
        cin >> option;
    }

        switch (option)
        {
        case 1: 
            {
            
                if(task_count >9)
                {
                
                cout << "task list is full" << endl;
            }
            
            else 
            {
                cout<< "enter a new task:" << endl;
                cin.ignore(); 
                getline(cin, tasks[task_count]);
                task_count++;

            }
            break;
        }
                case 2:

                print_tasks(tasks, task_count);
                break;
    }







            









        

            







    


    return 0;
}   