# syscall-process-tree-stats

This repository implements a **custom system call** in the **Phoenix-RTOS** kernel to analyze the process tree structure at runtime.

## 🧠 What is a System Call?

A **system call (syscall)** is a mechanism that allows a user-space program to request a service from the operating system's kernel. Common examples include reading from a file, creating a process, or allocating memory.

In this project, we extend the Phoenix-RTOS kernel with a **new syscall** that calculates two values related to the **process tree**:

- `HEIGHT`: The **maximum depth** of the process tree — the longest distance from the root process (`init`) to any leaf process.
- `COUNT`: The number of processes that are exactly at this maximum height.

---

## 📌 Purpose of This Project

This project was created to:

- Extend the Phoenix-RTOS kernel with a new system call that navigates the internal process tree.
- Provide a user-space program that demonstrates and tests the syscall.
- Offer two different runtime scenarios (use cases) that verify the correctness of the syscall.
- Use the syscall to analyze the process tree structure and gather statistics about it.
