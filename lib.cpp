#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;

class library
{
protected:
    string account_Name;
    int account_Number;
    int password;
    library(string s, int ac, int p)
    {
        account_Name = s;
        account_Number = ac;
        password = p;
    }
};

class Book
{
protected:
    string title;
    int code;
    Book(string s, int c)
    {
        title = s;
        code = c;
    }
};

class Student : public library
{
private:
    int book_taken_count;
    int daysleft;

public:
    Student(string s, int ac, int p) : library(s, ac, p)
    {
        int book_limit = 5;
        int book_day_limit = 15;
    }
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout<<"1.Return "<<endl;
        cout<<"2.Renew"<<endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Books()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "Books taken are : " << book_taken_count << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
};

class Professor : public library
{
private:
    int book_taken_count;
    int daysleft;

public:
    Professor(string s, int ac, int p) : library(s, ac, p)
    {
        int book_limit = 10;
        int book_day_limit = 30;
    }
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout<<"1.Return "<<endl;
        cout<<"2.Renew"<<endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Books()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "Books taken are : " << book_taken_count << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
};

class librarian : public library
{
    private:
    public:
    librarian(string s,int ac,int p ):library(s,ac,p){}
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout<<"1. List all the previous books."<<endl;
        cout<<"2. Add new book"<<endl;
        cout<<"3. Student related options"<<endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Student_Related_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Student_Related_Choices" << setw(20) << "*" << endl;
        cout<<"1."
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
};