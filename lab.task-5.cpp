
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string id;
    string name;
    string enrolled_course;
    static int counter;

public:
    Student(string n, string c) {
        name = n;
        enrolled_course = c;
        string num = to_string(++counter);
        while(num.length() < 3) num = "0" + num;
        id = "B240305" + num;
    }

    friend void showStudentInfo(Student s);
};

int Student::counter = 0;

void showStudentInfo(Student s) {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Enrolled Course: " << s.enrolled_course << endl;
}

int main() {
    string name, course;
    int n;

    cout << "How many students? ";
    cin >> n;
    cin.ignore();

    Student* students[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEnter name for student " << i+1 << ": ";
        getline(cin, name);
        cout << "Enter enrolled course: ";
        getline(cin, course);
        students[i] = new Student(name, course);
    }

    cout << "\n--- Student Info ---" << endl;
    for(int i = 0; i < n; i++) {
        showStudentInfo(*students[i]);
        cout << endl;
    }

    for(int i = 0; i < n; i++) delete students[i];

    return 0;
}
