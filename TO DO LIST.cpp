#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            string task;
            cout << "\nEnter the task: ";
            cin >> task;
            tasks.push_back(task);
            cout << "Task added successfully!" << endl;
        }

        else if (choice == 2) {
            if (tasks.size() == 0) {
                cout << "\nNo tasks found!" << endl;
            }
            else {
                cout << "\nTasks:" << endl;
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i+1 << ". " << tasks[i] << endl;
                }
            }
        }

        else if (choice == 3) {
            if (tasks.size() == 0) {
                cout << "\nNo tasks found!" << endl;
            }
            else {
                int task_index;
                cout << "\nEnter the task number to delete: ";
                cin >> task_index;
                if (task_index > tasks.size() || task_index < 1) {
                    cout << "\nInvalid task number!" << endl;
                }
                else {
                    tasks.erase(tasks.begin() + task_index - 1);
                    cout << "Task deleted successfully!" << endl;
                }
            }
        }

        else if (choice == 4) {
            cout << "\nExiting..." << endl;
            break;
        }

        else {
            cout << "\nInvalid choice! Please try again." << endl;
        }
    }

    return 0;
}
