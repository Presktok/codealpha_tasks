# Professional Todo List Application

A professional command-line Todo List application written in C++ with the following features:

## Features
- Add tasks with description, category, due date, and priority
- Mark tasks as completed
- View all tasks in a formatted table
- Save tasks to file
- Load tasks from file
- Colorful console interface
- Priority levels (1-5)
- Due date tracking

## Requirements
- C++ compiler (g++ or compatible)
- Windows OS (for console colors)

## How to Compile
```bash
g++ todo.cpp -o todo
```

## How to Run
```bash
./todo
```

## Usage
1. Add Task - Create a new task with description, category, due date, and priority
2. Mark Task as Completed - Mark an existing task as done
3. View Tasks - Display all tasks in a formatted table
4. Save Tasks - Save current tasks to file
5. Load Tasks - Load tasks from file
6. Exit - Close the application

## File Format
Tasks are saved in a text file (tasks.txt) with the following format:
```
description|category|due_date|priority|completed
``` 