# **The_cryptographer**
The Cryptographer is a simple encryption and decryption tool that supports both Caesar and Vigenere ciphers.

## **Installation**
To use The Cryptographer, clone the repository and compile the source code using your preferred C compiler. For example, using GCC:

***shell***<br>
Copy code<br>
`$ git clone https://github.com/paulpp78/the_cryptographer.git`<br>
`$ cd the_cryptographer`<br>
`$ gcc -o the_cryptographer main.c`<br>

## Usage
The Cryptographer can be used to encrypt and decrypt text using either the Caesar or Vigenere cipher. To use the tool, run the executable and follow the prompts.

### **Caesar Cipher**
The Caesar cipher is a simple substitution cipher in which each letter in the plaintext is shifted a certain number of positions down the alphabet.

To encrypt a message using the Caesar cipher, select option 1 from the main menu and enter the message to be encrypted, followed by the encryption key (an integer).

To decrypt a message that has been encrypted using the Caesar cipher, select option 2 from the main menu and enter the encrypted message, followed by the decryption key (an integer).

### **Vigenere Cipher**
The Vigenere cipher is a polyalphabetic substitution cipher that uses a series of interwoven Caesar ciphers, based on a keyword.

To encrypt a message using the Vigenere cipher, select option 3 from the main menu and enter the message to be encrypted, followed by the encryption key (a keyword).

To decrypt a message that has been encrypted using the Vigenere cipher, select option 4 from the main menu and enter the encrypted message, followed by the decryption key (a keyword).

### **Contributing**
Contributions are welcome! If you find a bug or have a feature request, please open an issue on the GitHub repository.

### **License**
The Cryptographer is released under the MIT License.
