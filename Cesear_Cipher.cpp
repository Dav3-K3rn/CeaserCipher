#include <iostream>
#include <cstring>
#include <limits>

using namespace std;

void caesar_encrypt(char src[100], int key, int dist) {
    int effective_key = key % 26; // Calculate effective key
    for (int i = 0; i < dist; i++) {
        if (src[i] >= 'A' && src[i] <= 'Z') {
            src[i] = (char)(((src[i] + effective_key - 'A') % 26) + 'A');
        } else if (src[i] >= 'a' && src[i] <= 'z') {
            src[i] = (char)(((src[i] + effective_key - 'a') % 26) + 'a');
        }
    }
}

void caesar_decrypt(char src[100], int key, int dist) {
    int effective_key = key % 26; // Calculate effective key
    for (int i = 0; i < dist; i++) {
        if (src[i] >= 'A' && src[i] <= 'Z') {
            src[i] = (char)(((src[i] - effective_key - 'A' + 26) % 26) + 'A');
        } else if (src[i] >= 'a' && src[i] <= 'z') {
            src[i] = (char)(((src[i] - effective_key - 'a' + 26) % 26) + 'a');
        }
    }
}

int main() {
    char caesar[10];
    static const char encrypt[] = "encrypt";
    static const char decrypt[] = "decrypt";
    int key;
    char src[100];
    int dist;

    cout << "Enter operation: encrypt or decrypt" << endl;
    cin >> caesar;

    cout << "Enter key (integer): " << endl;
    while (!(cin >> key)) {
        cout << "Invalid input. Please enter an integer for the key." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter text to encrypt/decrypt" << endl;
    cin.ignore();
    cin.getline(src, 100);

    dist = strlen(src);

    if (strcmp(caesar, encrypt) == 0) {
        caesar_encrypt(src, key, dist);
    } else if (strcmp(caesar, decrypt) == 0) {
        caesar_decrypt(src, key, dist);
    } else {
        cout << "Invalid operation. Please enter 'encrypt' or 'decrypt'." << endl;
        return 1;
    }

    cout << "Result:" << endl;
    cout << src << endl;

    return 0; // Indicate successful completion
}
