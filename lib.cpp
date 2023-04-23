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

public:
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
    Student(string s, int ac) : library(s, ac, 12345)
    {
        int book_limit = 5;
        int book_day_limit = 15;
    }
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout << "1.Return " << endl;
        cout << "2.Renew" << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Books()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "Books taken are : " << book_taken_count << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    bool check_password(int password)
    {
        if (password == this->password)
            return true;
        else
            return false;
    }
    void Student_choice()
    {

    }
};

class Professor : public library
{
private:
    int book_taken_count;
    int daysleft;

public:
    Professor(string s, int ac) : library(s, ac, 54321)
    {
        int book_limit = 10;
        int book_day_limit = 30;
    }
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout << "1.Return " << endl;
        cout << "2.Renew" << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Books()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "Books taken are : " << book_taken_count << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    bool check_password(int password)
    {
        if (password == this->password)
            return true;
        else
            return false;
    }
};

class librarian : public library
{
private:
public:
    librarian(string s, int ac) : library(s, ac, 13579) {}
    void display_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Library_options" << setw(20) << "*" << endl;
        cout << "1. List all the previous books." << endl;
        cout << "2. Add new book" << endl;
        cout << "3. Student related options" << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    void display_Student_Related_Choice()
    {
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
        cout << "*" << setfill('*') << "Student_Related_Choices" << setw(20) << "*" << endl;
        cout << "1. Send remainder to student for issue , delay or return " << endl;
        cout << "2. Issue fine for delay" << endl;
        cout << "*" << setfill('*') << setw(20) << "*" << endl;
    }
    bool check_password(int password)
    {
        if (password == this->password)
            return true;
        else
            return false;
    }
};

int main(void)
{
    int choice;
    int x;
    cout << "******** Tell us your identity *************" << endl;
    cout << "1. Student" << endl;
    cout << "2. Professor" << endl;
    cout << "3. Librarian" << endl;
    cout << "4. Exit" << endl;
    cout << "*********************************************" << endl;
    do
    {
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int student_choice;
            string n;
            int password;
            int account_number;
            cout << "********************************" << endl;
            cout << "        Enter your details      " << endl;
            cout << "1. Student name " << endl;
            cout << "2. Student account number " << endl;
            cout << "**********************************" << endl;
            cin >> n >>  account_number;
            int try_count=1;
            Student std(n,account_number);
            do
            {
                cout<<"Enter your password"<<endl;
                cin>>password;
                try_count++;
            } while (std.check_password(password)==false&&try_count<=3);
      
            cout<<"********************************"<<endl;
            cout<<"1. Books related chocies "<<endl;
            cout<<"2. Issue related chocie "<<endl;
            cout<<"3. Exit"<<endl;
            cout<<"*********************************"<<endl;
            do
            {
                cout<<"Enter your choice"<<endl;
                cin>>student_choice;
                switch (student_choice)
                {
                    case 1:
                    {
                        std.display_Books();
                        break;
                    }
                    case 2:
                    {
                        std.display_Choice();
                        break;
                    }
                    case 3:
                    {
                        cout<<"exiting..."<<endl;
                        break;
                    }
                }
            } while (student_choice!=3);
            break;
            
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            cout<<"Exiting.............."<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid input"<<endl;
        }
        }
    } while (choice != 4);

    return 0;
}