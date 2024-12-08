#include <iostream>
#include <string>
using namespace std;

class Person {
    public: 
        string name;
        int age;

        Person(string n, int a) : name(n), age(a) {}
        void displayDetails() {
            cout << "Name: " << name << "Age: " << age << endl;
        }
};

class Student : public Person {
    public: 
        string studentID;
        Student(string n, int a, string id) : Person(n, a), studentID(id) {}

        void displayStudentDetails() {
            cout << "Name: " << name << "Age: " << age << "ID: " << studentID << endl;

        }
        void study() {
            cout << name << "is studying at Simmons " << endl;
        }
};

int main() {
    Person person("Emma", 17);
    person.displayDetails();
    Student student("Dan", 20, "S14241");
    student.displayStudentDetails();
    student.study();

    student.name = "Emily";
    student.age = 20;
    student.studentID = "S3234892";
    student.displayStudentDetails();

}