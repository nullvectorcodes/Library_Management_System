<h1 align="center">📚 Library Management System (C Project)</h1>

<p align="center">
  A simple, terminal-based Library Management System built in pure C.<br>
  It allows you to <b>add books, view available titles, find books, borrow, and reserve</b> them easily.
</p>

---

## ✨ Features

- 📖 **Add New Books** – Add books along with author names to the library system.  
- 👀 **Display All Books** – View all available, borrowed, or reserved books in a clean list format.  
- 🔎 **Find Books** – Search for a specific book by its name and check its current status.  
- 📘 **Borrow Books** – Mark any available book as “Borrowed.”  
- 🏷️ **Reserve Books** – Reserve a book if it’s already borrowed.  
- 💾 **In-Memory Tracking** – Uses arrays and structs for simple in-memory data management.

---

## 🧠 Concepts Used

- `struct` and `enum` in C  
- String handling (`strcmp`, `scanf`, `fgets`)  
- Arrays for book storage  
- Switch-based menu system  
- Basic CRUD-like operations

---

## ⚙️ How It Works

### 1. On startup, the system shows a **menu of options**:
   - Add a new book  
   - Display all books  
   - Find a book  
   - Borrow or reserve books  
   - Exit the program  

### 2. Each book is stored as a struct:

   typedef struct {
       char book_name[100];
       char author[50];
       status status;
   } Book;

### 3. The status of each book can be:
- Available
- Borrowed
- Reserved

## 🛠️ How to Run

### 🐧 Linux / macOS <br>
<img width="253" height="65" alt="image" src="https://github.com/user-attachments/assets/e0e7e93f-1d3d-48a8-b19b-60acd7dfaf61" />

### 🪟 Windows (using GCC / MinGW) <br>
<img width="283" height="85" alt="image" src="https://github.com/user-attachments/assets/6de9a010-91d6-4585-b9e4-8dd9d872edaf" />


## 👨‍💻 Author

Mohammad Saalim
📧 Email: mohammadsaalim4718@gmail.com 
🌐 GitHub: https://github.com/nullvectorcodes

## 🧑‍🏫 Learning Outcomes

This project helps you practice:
Structs and enums
Arrays and string manipulation
Conditional logic and loops
Menu-driven CLI design in C

## 📜 License

This project is released under the MIT License — free to use, modify, and share.






