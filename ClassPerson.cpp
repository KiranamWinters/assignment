#include <iostream>
#include <string.h>

// Macros for easy printing
#define LOG(x) cout << x << endl
#define LOG2(x, y) cout << x << y << endl

using namespace std;

// Making the class Person
class Person
{

public:
    // attributes
    string m_name;
    int m_age;
    string m_status;
    // default constructor
    Person() {}
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    // Runtime Polymorphism/Virutal fuction
    virtual void printData()
    {
        LOG2("Name: ", m_name);
        LOG2("Age: ", m_age);
    }
};

// Student Class
class Student : public Person
{
public:
    // Constructors
    Student() {}
    Student(string name, int age) : Person(name, age) {}
    Student(Person *person)
    {
        m_name = person->m_name;
        m_age = person->m_age;
        m_status = "Student";
    }
    // Polymorphism
    void printData()
    {
        LOG2("Name: ", m_name);
        LOG2("Age: ", m_age);
        LOG2("Status: ", m_status);
    }
};

// Teacher Class
class Teacher : public Person
{

public:
    // default constructor
    Teacher() {}
    Teacher(string name, int age) : Person(name, age) {}
    Teacher(Person *person)
    {
        m_name = person->m_name;
        m_age = person->m_age;
        m_status = "Teacher";
    }
    void printData()
    {
        LOG2("Name: ", m_name);
        LOG2("Age: ", m_age);
        LOG2("Status: ", m_status);
    }
};

int main()
{
    string name1;
    int age;
    Person *p1 = new Person;
    Person *p2 = new Person;
    Person *p3 = new Person;
    Person *record[3] = {p1, p2, p3};
    // taking user input
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> name1;
        cout << "Age: ";
        cin >> age;
        // constructor
        *record[i] = Person(name1, age);
    }
    // allocating p1 as student and p2 as teacher in heap;
    Student *student = new Student(p1);
    Teacher *teacher = new Teacher(p2);

    // code to display people;
    cout << "\n\nPeople in the list........\n\n"
         << endl;
    p1->printData();
    p2->printData();
    p3->printData();

    // code to display students
    LOG("Below are the students.........");
    student->printData();

    // code to display teachers
    LOG("Below are the teachers.........");
    teacher->printData();

    // code to delete
    delete p1;
    delete p2;
    delete p3;
    delete student;
    delete teacher;

    return 0;
}