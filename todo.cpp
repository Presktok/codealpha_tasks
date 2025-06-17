#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Task {
public:
    std::string description;
    std::string category;
    bool isCompleted;

    Task(std::string desc, std::string cat, bool completed = false) {
        description = desc;
        category = cat;
        isCompleted = completed;
    }
};

void addTask(std::vector<Task>& tasks) {
    std::cin.ignore();
    std::string desc, category;
    std::cout << "Enter task description: ";
    std::getline(std::cin, desc);
    std::cout << "Enter task category: ";
    std::getline(std::cin, category);
    tasks.push_back(Task(desc, category));
}

void markTaskCompleted(std::vector<Task>& tasks) {
    int index;
    std::cout << "Enter task number to mark as completed: ";
    std::cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].isCompleted = true;
        std::cout << "Task marked as completed!\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

void viewTasks(const std::vector<Task>& tasks) {
    std::cout << "\n--- TO-DO LIST ---\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". [" << (tasks[i].isCompleted ? "✔" : " ") << "] "
                  << tasks[i].description << " (" << tasks[i].category << ")\n";
    }
}

void saveTasks(const std::vector<Task>& tasks, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& task : tasks) {
        file << task.description << "|" << task.category << "|" << task.isCompleted << "\n";
    }
    file.close();
    std::cout << "Tasks saved successfully.\n";
}

void loadTasks(std::vector<Task>& tasks, const std::string& filename) {
    std::ifstream file(filename);
    tasks.clear();
    std::string line;
    while (std::getline(file, line)) {
        size_t first = line.find('|');
        size_t second = line.find('|', first + 1);
        std::string desc = line.substr(0, first);
        std::string cat = line.substr(first + 1, second - first - 1);
        bool completed = (line.substr(second + 1) == "1");
        tasks.push_back(Task(desc, cat, completed));
    }
    file.close();
    std::cout << "Tasks loaded successfully.\n";
}

int main() {
    std::vector<Task> tasks;
    std::string filename = "tasks.txt";

    int choice;
    while (true) {
        std::cout << "\n==== TO-DO LIST MENU ====\n";
        std::cout << "1. Add Task\n2. Mark Task as Completed\n3. View Tasks\n4. Save Tasks\n5. Load Tasks\n6. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: markTaskCompleted(tasks); break;
            case 3: viewTasks(tasks); break;
            case 4: saveTasks(tasks, filename); break;
            case 5: loadTasks(tasks, filename); break;
            case 6: std::cout << "Goodbye!\n"; return 0;
            default: std::cout << "Invalid choice.\n";
        }
    }
}
