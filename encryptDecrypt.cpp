#include <iostream>
#include <string>
using namespace std;

class EncryptorDecryptor {
public:
    virtual string process(const string& message) = 0;
};

class XORCipher : public EncryptorDecryptor {
private:
    string key;

public:
    XORCipher(const string& secretKey) {
        key = secretKey;
    }

    string process(const string& message) override {
        string processedMessage = message;
        for (int i = 0; i < message.length(); ++i) {
            processedMessage[i] ^= key[i % key.length()];
        }
        return processedMessage;
    }
};

class CommonAlgorithm : public EncryptorDecryptor {
public:
    string process(const string& message) override {
        string processedMessage = message;
        for (int i = 0; i < message.length(); ++i) {
            processedMessage[i] += 1;
        }
        return processedMessage;
    }
};

int main() {
    string message;
    string key;
    char choice;
    int ch=1;

    while(ch!=0)
    {


    try {
        cout << "Enter 'E' to encrypt or 'D' to decrypt a message: ";
        cin >> choice;
        cin.ignore();  // Ignore the newline character

        if (choice != 'E' && choice != 'e' && choice != 'D' && choice != 'd') {
            throw invalid_argument("Invalid choice. Please choose 'E' to encrypt or 'D' to decrypt.");
        }

        EncryptorDecryptor* processor = nullptr;

        if (choice == 'E' || choice == 'e') {
            cout << "Enter the message to encrypt: ";
            getline(cin, message);

            cout << "Enter the secret key (leave empty for common encryption): ";
            getline(cin, key);

            if (!key.empty()) {
                processor = new XORCipher(key);
            } else {
                processor = new CommonAlgorithm();
            }

            string encrypted = processor->process(message);
            cout << "Encrypted message: " << encrypted << endl;
        } else {
            cout << "Enter the message to decrypt: ";
            getline(cin, message);

            cout << "Enter the secret key (leave empty for common encryption): ";
            getline(cin, key);

            if (!key.empty()) {
                processor = new XORCipher(key);
            } else {
                processor = new CommonAlgorithm();
            }

            string decrypted = processor->process(message);
            cout << "Decrypted message: " << decrypted << endl;
        }

        delete processor;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    cout<<"\nPress 1 to Continue ; Press 0 to Exit\n"<<endl;
    cin>>ch;
    }
    return 0;
}