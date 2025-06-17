# Simple Todo List Application

A straightforward command-line Todo List application written in C++ that helps you manage your daily tasks efficiently.

## Features

- **Task Management**
  - Add new tasks with description and category
  - Mark tasks as completed
  - View all tasks in a simple list format
  - Basic task categorization

- **Data Persistence**
  - Save tasks to a text file
  - Load tasks from a text file
  - Automatic data storage

## Requirements

- C++ compiler (g++ or compatible)
- Basic understanding of command-line interface

## Installation

1. Clone the repository:
```bash
git clone https://github.com/Presktok/codealpha_tasks.git
```

2. Navigate to the project directory:
```bash
cd codealpha_tasks
```

3. Compile the program:
```bash
g++ todo.cpp -o todo
```

## Usage

Run the program:
```bash
./todo
```

### Menu Options:
1. **Add Task**
   - Enter task description
   - Enter task category

2. **Mark Task as Completed**
   - Enter task number to mark as completed

3. **View Tasks**
   - See all tasks in a list format
   - Shows task status (completed/pending)
   - Displays task category

4. **Save Tasks**
   - Save current tasks to tasks.txt

5. **Load Tasks**
   - Load tasks from tasks.txt

6. **Exit**
   - Close the application

## File Format

Tasks are saved in `tasks.txt` with the following format:
```
description|category|completed
```

Example:
```
Buy groceries|Shopping|0
Complete project|Work|1
```

## Project Structure

- `todo.cpp` - Main source code file
- `tasks.txt` - Data storage file

## Author

- GitHub: [@Presktok](https://github.com/Presktok)

## Future Improvements

Potential enhancements for future versions:
- Add due dates for tasks
- Implement priority levels
- Add task editing functionality
- Add task deletion
- Add task search functionality
- Improve user interface with colors
- Add task sorting options 