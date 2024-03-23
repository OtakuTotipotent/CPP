// Sorting the data in ascending order of Roll numbers & using authentication of name, reading from file & writing to the file
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int arr_ROLLnumber[8], i = 0;
    int srno, age, semester, rolNo;
    float gpa;
    string arr_SNAME[8];
    string sname, fname, dob, city, department, skills;
    char gender, condition = 'r';
    ifstream read("d:\\Students_Database.txt");
    if (read.fail())
    {
        cout << "\nFile not found !!!\n";
        read.close();
        exit(0);
    }
    read >> srno; // 1st attemp to reading the file
    read.ignore();
    getline(read, sname);
    getline(read, fname);
    read >> gender;
    read.ignore();
    getline(read, dob);
    read >> age;
    read.ignore();
    getline(read, city);
    getline(read, department);
    read >> semester;
    read >> rolNo;
    read >> gpa;
    read.ignore();
    getline(read, skills);
    while (!read.eof())
    {
        arr_ROLLnumber[i] = rolNo;
        arr_SNAME[i] = sname;
        i++;
        read >> srno;
        read.ignore();
        getline(read, sname);
        getline(read, fname);
        read >> gender;
        read.ignore();
        getline(read, dob);
        read >> age;
        read.ignore();
        getline(read, city);
        getline(read, department);
        read >> semester;
        read >> rolNo;
        read >> gpa;
        read.ignore();
        getline(read, skills);
    }
    read.close();
    cout << "\n All data readed and stored the roll numbers into an array \n\n";
    // sorting the array using bubble sorting technique
    if (condition == 'r') // roll number vise
    {
        for (int x = 0; x < 8; x++)
        {
            for (int y = 0; y < 7; y++)
            {
                if (arr_ROLLnumber[y] > arr_ROLLnumber[y + 1])
                {
                    int tempN = arr_ROLLnumber[y];
                    string tempS = arr_SNAME[y];
                    arr_ROLLnumber[y] = arr_ROLLnumber[y + 1];
                    arr_SNAME[y] = arr_SNAME[y + 1];
                    arr_ROLLnumber[y + 1] = tempN;
                    arr_SNAME[y + 1] = tempS;
                }
            }
        }
    }
    else if (condition == 'n') // name wise comparison
    {
        for (int x = 0; x < 8; x++)
        {
            for (int y = 0; y < 7; y++)
            {
                if (arr_ROLLnumber[y] > arr_ROLLnumber[y + 1])
                {
                    int tempN = arr_ROLLnumber[y];
                    string tempS = arr_SNAME[y];
                    arr_ROLLnumber[y] = arr_ROLLnumber[y + 1];
                    arr_SNAME[y] = arr_SNAME[y + 1];
                    arr_ROLLnumber[y + 1] = tempN;
                    arr_SNAME[y + 1] = tempS;
                }
            }
        }
    }
    // printing the sorted data on screen
    for (int x = 0; x < 8; x++)
    {
        cout << setw(40) << arr_SNAME[x] << "  |   " << setw(5) << arr_ROLLnumber[x] << endl;
    }
    ofstream write("d:\\temp.txt", ios::app);
    if (write.fail())
    {
        cout << "\nError: File not created !!\n";
        write.close();
        read.close();
        exit(0);
    }
    // sorting data into the files
    for (int x = 0; x < 8; x++)
    {
        read.open("d:\\Students_Database.txt");
        read >> srno;
        read.ignore();
        getline(read, sname);
        getline(read, fname);
        read >> gender;
        read.ignore();
        getline(read, dob);
        read >> age;
        read.ignore();
        getline(read, city);
        getline(read, department);
        read >> semester;
        read >> rolNo;
        read >> gpa;
        read.ignore();
        getline(read, skills);
        while (!read.eof())
        {
            if (rolNo == arr_ROLLnumber[x] && sname == arr_SNAME[x])
            {
                write << srno << '\n';
                write << sname << '\n';
                write << fname << '\n';
                write << gender << '\n';
                write << dob << '\n';
                write << age << '\n';
                write << city << '\n';
                write << department << '\n';
                write << semester << '\n';
                write << rolNo << '\n';
                write << gpa << '\n';
                write << skills << '\n';
            }
            read >> srno;
            read.ignore();
            getline(read, sname);
            getline(read, fname);
            read >> gender;
            read.ignore();
            getline(read, dob);
            read >> age;
            read.ignore();
            getline(read, city);
            getline(read, department);
            read >> semester;
            read >> rolNo;
            read >> gpa;
            read.ignore();
            getline(read, skills);
        }
        read.close();
    }
    read.close();
    write.close();
    remove("d:\\Students_Database.txt");
    rename("d:\\temp.txt", "d:\\Students_Database.txt");
    cout << "\n\n Success : The data sorted successfully \n\n";
    return 0;
}
