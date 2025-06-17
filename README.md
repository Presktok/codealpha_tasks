# Professional Todo List Application

A feature-rich command-line Todo List application written in C++ that helps you manage your tasks efficiently with a beautiful console interface.

## 🌟 Features

- **Task Management**
  - Add tasks with detailed information
  - Mark tasks as completed
  - View all tasks in a formatted table
  - Priority levels (1-5)
  - Due date tracking
  - Task categorization

- **Data Persistence**
  - Save tasks to file
  - Load tasks from file
  - Automatic data backup

- **User Interface**
  - Colorful console interface
  - Clear and organized menu system
  - Formatted task display
  - Intuitive navigation

## 🛠️ Requirements

- C++ compiler (g++ or compatible)
- Windows OS (for console colors)
- Git (for version control)

## 📥 Installation

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

## 🚀 Usage

Run the program:
```bash
./todo
```

### Menu Options:
1. **Add Task**
   - Enter task description
   - Specify category
   - Set due date (optional)
   - Set priority level (1-5)

2. **Mark Task as Completed**
   - View current tasks
   - Select task to mark as completed

3. **View Tasks**
   - See all tasks in a formatted table
   - View task status, priority, and due dates

4. **Save Tasks**
   - Save current tasks to file
   - Automatic backup of your todo list

5. **Load Tasks**
   - Load previously saved tasks
   - Restore your todo list

6. **Exit**
   - Save and close the application

## 📝 File Format

Tasks are saved in `tasks.txt` with the following format:
```
description|category|due_date|priority|completed
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## 📄 License

This project is open source and available under the MIT License.

## 👤 Author

- GitHub: [@Presktok](https://github.com/Presktok)

## 🙏 Acknowledgments

- Thanks to all contributors
- Inspired by the need for a simple yet powerful todo list manager 