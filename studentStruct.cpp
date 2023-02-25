#include <iostream>

using namespace std;

struct student
{
    /* data */
    int m_rollNo;
    string m_name;
    int m_grade;
    int m_year;
    int m_totalMarks;
    student() {}
    student(int roll, string name, int grade, int year, int totalMarks)
    {
        m_rollNo = roll;
        m_name = name;
        m_grade = grade;
        m_year = year;
        m_totalMarks = totalMarks;
    }
};

int main()
{
    student arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = student(i, "Name", i + 8, 2023, 30 * i + 9);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Roll no: " << arr[i].m_rollNo << endl;
        cout << "Name: " << arr[i].m_name << endl;
        cout << "Grade: " << arr[i].m_grade << endl;
        cout << "Year: " << arr[i].m_year << endl;
        cout << "Marks: " << arr[i].m_totalMarks << endl;
        cout << endl;
    }
    return 0;
}