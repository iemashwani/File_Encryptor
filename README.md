# File Encryptor

**File Encryptor** is a C++ command-line application that allows users to securely encrypt and decrypt files. It demonstrates key concepts such as file handling, process management, modular programming, and basic cryptography. This project is ideal for learning practical C++ programming techniques.

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [How It Works](#how-it-works)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

---

## About
File Encryptor is designed to protect sensitive information stored in files by encrypting them with a custom algorithm. It also allows decrypting the files back to their original state. The project is modular, making it easy to extend or adapt for different encryption methods.

---

## Features
- Encrypt files with a simple, custom algorithm.
- Decrypt encrypted files back to their original content.
- Modular design: separate modules for encryption, file handling, and process management.
- Supports various file types (text, images, etc.).
- Lightweight and runs directly from the command line.

---

## How It Works

### 1. **Encryption**
The encryption module takes an input file and applies a simple algorithm to convert the content into an unreadable format. The algorithm could involve shifting characters, XOR operations, or other transformations (customized in `cryption.cpp`).

### 2. **Decryption**
The decryption process reverses the encryption algorithm, restoring the original content of the file. This ensures that the encrypted file can be safely shared or stored without losing data.

### 3. **File Handling**
The file handling module (`IO.cpp`) manages reading and writing files safely. It ensures that the program does not overwrite existing files unless specified and handles errors gracefully (e.g., file not found).

### 4. **Process Management**
The process management module (`ProcessManagement.cpp`) organizes how the program runs different operations. It helps maintain a clean workflow for encrypting and decrypting files.

**Summary:** The program reads a file → encrypts or decrypts its content → writes the result to a new file. All operations are modular, making the code maintainable and easy to extend.

---

## Installation

### Prerequisites
- C++17 compatible compiler (g++ or clang++)
- Git (to clone the repository)
- Make utility (optional, for using the Makefile)

### Steps
```bash
# Clone the repository
git clone https://github.com/iemashwani/File_Encryptor.git
cd File_Encryptor

# Compile using g++
g++ -std=c++17 -Wall -I. -Isrc/app/encryptDecrypt -Isrc/app/fileHandling -Isrc/app/processes main.cpp src/app/processes/ProcessManagement.cpp src/app/fileHandling/IO.cpp src/app/encryptDecrypt/cryption.cpp -o encrypt_decrypt

# Run the program
./encrypt_decrypt
