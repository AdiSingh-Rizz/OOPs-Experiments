#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* data;

public:
    String() {
        data = new char[1];
        data[0] = '\0';
    }

    String(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    String(const String& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    String(String&& other) noexcept {
        data = other.data;
        other.data = nullptr;
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    ~String() {
        delete[] data;
    }

    void display() {
        cout << data << endl;
    }
};

int main() {
    String s1("Hello");
    String s2 = s1;
    String s3 = move(s1);

    s2.display();
    s3.display();
}
