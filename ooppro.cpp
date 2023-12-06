#include <iostream>
#include <string>
using namespace std;

class EncryptorDecryptor {
public:
    virtual string encrypt(const string& message) = 0; // Polymorphism: Pure virtual function
    virtual string decrypt(const string& encryptedMessage) = 0; // Polymorphism: Pure virtual function
};

class XORCipher : public EncryptorDecryptor { // Inheritance: Derived class
private:
    string key; // Encapsulation: Private member variable

public:
    XORCipher(const string& secretKey) { // Encapsulation: Constructor
        key = secretKey;
    }

    string encrypt(const string& message) override { // Polymorphism: Function override
        string encryptedMessage = message;
        for (int i = 0; i < message.length(); ++i) {
            encryptedMessage[i] ^= key[i % key.length()];
        }
        return encryptedMessage;
    }

    string decrypt(const string& encryptedMessage) override { // Polymorphism: Function override
        return encrypt(encryptedMessage); // XOR encryption is its own decryption
    }
};

class CommonAlgorithm : public EncryptorDecryptor { // Inheritance: Derived class
public:
    string encrypt(const string& message) override { // Polymorphism: Function override
        string encryptedMessage = message;
        for (int i = 0; i < message.length(); ++i) {
            encryptedMessage[i] += 1;
        }
        return encryptedMessage;
    }

    string decrypt(const string& encryptedMessage) override { // Polymorphism: Function override
        string decryptedMessage = encryptedMessage;
        for (int i = 0; i < encryptedMessage.length(); ++i) {
            decryptedMessage[i] -= 1;
        }
        return decryptedMessage;
    }
};

int main() {
    string message;
    string key;
    char choice;

    try {
        cout << "Enter 'E' to encrypt or 'D' to decrypt a message: ";
        cin >> choice;
        cin.ignore();  // Ignore the newline character

        if (choice != 'E' && choice != 'e' && choice != 'D' && choice != 'd') {
            throw invalid_argument("Invalid choice. Please choose 'E' to encrypt or 'D' to decrypt.");
        }

        EncryptorDecryptor* processor = nullptr; // Polymorphism: Base class pointer

        if (choice == 'E' || choice == 'e') {
            cout << "Enter the message to encrypt: ";
            getline(cin, message);

            cout << "Enter the secret key (leave empty for common encryption): ";
            getline(cin, key);

            if (!key.empty()) {
                processor = new XORCipher(key); // Polymorphism: Derived class object
            } else {
                processor = new CommonAlgorithm(); // Polymorphism: Derived class object
            }

            string encrypted = processor->encrypt(message); // Polymorphism: Function call
            cout << "Encrypted message: " << encrypted << endl;
        } else {
            cout << "Enter the message to decrypt: ";
            getline(cin, message);

            cout << "Enter the secret key (leave empty for common encryption): ";
            getline(cin, key);

            if (!key.empty()) {
                processor = new XORCipher(key); // Polymorphism: Derived class object
            } else {
                processor = new CommonAlgorithm(); // Polymorphism: Derived class object
            }

            string decrypted = processor->decrypt(message); // Polymorphism: Function call
            cout << "Decrypted message: " << decrypted << endl;
        }

        delete processor; // Memory deallocation
    } catch (const exception& e) { // Exception handling
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}