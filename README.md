# Caesar Cipher in C++

This project implements a simple Caesar Cipher encryption and decryption program in C++.  
The Caesar Cipher is a substitution cipher where each letter in the plaintext is shifted by a fixed number of positions down or up the alphabet.

---

## Features

- **Encryption**: Shifts alphabetic characters forward by a given key.
- **Decryption**: Shifts alphabetic characters backward by a given key.
- **Input Validation**: Ensures the user enters an integer for the key.
- Handles both **uppercase** and **lowercase** letters.
- Ignores non-alphabetic characters (leaves them unchanged).

---

## How It Works

1. The user specifies an operation:
   - `encrypt`
   - `decrypt`
2. The user provides:
   - A **key** (integer, positive or negative).
   - A **text message** to encrypt or decrypt.
3. The program outputs the transformed text.
