#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(){};
    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    vector<Student> arr;
    arr.push_back(Student("istekhar", 100));
    arr.push_back(Student("hamza", 110));

    sort(arr.begin(), arr.end(), Compare());

    for (auto std : arr)
    {
        cout << std.name << " " << std.marks << endl;
    }

    return 0;
}