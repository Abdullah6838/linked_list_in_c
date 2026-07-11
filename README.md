# 📌 Linked List in C

A simple **C programming project** that demonstrates the basic operations of a **Singly Linked List** using dynamic memory allocation.

---

## ✨ Features

- ➕ Create a linked list
- 👀 Display the linked list
- ⬅️ Insert a node at the beginning
- ➡️ Insert a node at the end
- 📍 Insert a node at a specific position

---

## 🛠️ Technologies Used

- 💻 C Programming Language
- ⚙️ GCC / Turbo C Compatible
- 📚 Standard Libraries
  - `stdio.h`
  - `stdlib.h`

---

## 🚀 Program Flow

1. 🔢 Enter the number of nodes.
2. ✍️ Input data for each node.
3. 📋 Display the original linked list.
4. ⬅️ Insert a node at the beginning.
5. 📋 Display the updated list.
6. ➡️ Insert a node at the end.
7. 📋 Display the updated list.
8. 📍 Insert a node at a specific position.
9. ✅ Display the final linked list.

---

## 🖥️ Example

### 📥 Input

```text
Enter No. of Nodes: 3

Enter 1-Node: 10
Enter 2-Node: 20
Enter 3-Node: 30

Insert At First: 5

Insert At Last: 40

Enter location of New Node: 2
New Node Data: 15
```

### 📤 Output

```text
Your linked list:
10 -> 20 -> 30 -> 

After Insert At First:
5 -> 10 -> 20 -> 30 ->

After Insert At Last:
10 -> 20 -> 30 -> 40 ->

Final Linked List:
10 -> 20 -> 15 -> 30 -> 40 ->
```

---

## ⚙️ Compilation

### 🐧 Linux / macOS

```bash
gcc linked_list.c -o linked_list
./linked_list
```

### 🪟 Windows

```bash
gcc linked_list.c -o linked_list.exe
linked_list.exe
```

---

## 📂 Project Structure

```text
📦 Linked-List
├── 📄 linked_list.c
└── 📘 README.md
```

---

## ⚠️ Current Issues

The current code has a few bugs that can be improved:

- 🐞 `newNode->data = newData;` should be `newNodeI->data = newData;`
- 🔄 Update `root` after inserting at the beginning:
  ```c
  root = newNode;
  ```
- 🖨️ Print node data instead of node address:
  ```c
  printf("%d -> ", ptr->data);
  ```
- ❌ Remove the unnecessary line:
  ```c
  temp = temp->next;
  ```
- ✅ Validate the insertion position.
- 🧹 Free allocated memory before program termination.
- 💡 Replace:
  ```c
  void main()
  ```
  with:
  ```c
  int main()
  ```
  and return:
  ```c
  return 0;
  ```

---

## 🌱 Future Improvements

- 🗑️ Delete a node
- 🔍 Search for a node
- ✏️ Update node data
- 🔄 Reverse the linked list
- 📊 Sort the linked list
- 🔢 Count total nodes
- 📋 Menu-driven program

---

## 📖 Concepts Covered

- 🔹 Structures (`struct`)
- 🔹 Pointers
- 🔹 Dynamic Memory Allocation (`malloc`)
- 🔹 Traversing Linked Lists
- 🔹 Node Insertion
- 🔹 Pointer Manipulation

---

## 👨‍💻 Author

Made with ❤️ for learning **Data Structures in C**.

- GitHub: https://github.com/abdullah6838
#

### ⭐ If you like this project, don't forget to give it a star on GitHub!
