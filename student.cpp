#include<iostream>
using namespace std;

const int MAX_STUDENTS = 30; // Maximum number of students

string roll_no[MAX_STUDENTS], name[MAX_STUDENTS], Class[MAX_STUDENTS], course[MAX_STUDENTS], mobile_no[MAX_STUDENTS], admission_year[MAX_STUDENTS];
int total = 0; // Total number of entered data

// Function to enter student data
void enter() {
    int num_students = 0;
    cout << "How many students do you want to enter?" << endl;
    cin >> num_students;

    if (total + num_students <= MAX_STUDENTS) {
        for (int i = total; i < total + num_students; i++) {
            cout << "\nEnter the data of student " << i + 1 << endl << endl;
            cout << "Enter Roll NO: ";
            cin >> roll_no[i];
            cout << "Enter Name: ";
            cin >> name[i];
            cout << "Enter Class: ";
            cin >> Class[i];
            cout << "Enter Course: ";
            cin >> course[i];
            cout << "Enter Mobile NO: ";
            cin >> mobile_no[i];
            cout << "Enter Admission Year: ";
            cin >> admission_year[i];
        }
        total += num_students;
    } else {
        cout << "Maximum number of students reached!" << endl;
    }
}

// Function to display all student data
void show() {
    if (total == 0) {
        cout << "No Data is Entered" << endl;
    } else {
        for (int i = 0; i < total; i++) {
            cout << "\nData of Student " << i + 1 << endl << endl;
            cout << "Roll NO: " << roll_no[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Class: " << Class[i] << endl;
            cout << "Course: " << course[i] << endl;
            cout << "Mobile NO: " << mobile_no[i] << endl;
            cout << "Admission Year: " << admission_year[i] << endl;
        }
    }
}

// Function to search for student data by roll number
void search() {
    if (total == 0) {
        cout << "No Data is Entered" << endl;
    } else {
        string rollno;
        cout << "Enter the roll no of the student: ";
        cin >> rollno;

        for (int i = 0; i < total; i++) {
            if (rollno == roll_no[i]) {
                cout << "\nData of Student " << i + 1 << endl << endl;
                cout << "Roll NO: " << roll_no[i] << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Class: " << Class[i] << endl;
                cout << "Course: " << course[i] << endl;
                cout << "Mobile NO: " << mobile_no[i] << endl;
                cout << "Admission Year: " << admission_year[i] << endl;
            }
        }
    }
}

// Function to update student data
void update() {
    if (total == 0) {
        cout << "No Data is Entered" << endl;
    } else {
        string rollno;
        cout << "Enter the roll no of the student you want to update: ";
        cin >> rollno;

        for (int i = 0; i < total; i++) {
            if (rollno == roll_no[i]) {
                cout << "\nPrevious data" << endl << endl;
                cout << "Data of Student " << i + 1 << endl;
                cout << "Roll NO: " << roll_no[i] << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Class: " << Class[i] << endl;
                cout << "Course: " << course[i] << endl;
                cout << "Mobile NO: " << mobile_no[i] << endl;
                cout << "Admission Year: " << admission_year[i] << endl;

                cout << "\nEnter new data" << endl << endl;
                cout << "Enter Roll NO: ";
                cin >> roll_no[i];
                cout << "Enter Name: ";
                cin >> name[i];
                cout << "Enter Class: ";
                cin >> Class[i];
                cout << "Enter Course: ";
                cin >> course[i];
                cout << "Enter Mobile NO: ";
                cin >> mobile_no[i];
                cout << "Enter Admission Year: ";
                cin >> admission_year[i];
            }
        }
    }
}

// Function to delete all student data
void Delete() {
    if (total == 0) {
        cout << "No Data is Entered" << endl;
    } else {
        int choice;
        cout << "Are you sure you want to delete all records?" << endl;
        cout << "Press 1 to delete all records: ";
        cin >> choice;

        if (choice == 1) {
            total = 0;
            cout << "All records have been deleted" << endl;
        } else {
            cout << "No records were deleted" << endl;
        }
    }
}

int main() {
    int value;

    while (true) {
        cout << "\nPress 1 to Enter data" << endl;
        cout << "Press 2 to Show data" << endl;
        cout << "Press 3 to Search data" << endl;
        cout << "Press 4 to Update data" << endl;
        cout << "Press 5 to Delete data" << endl;
        cout << "Press 6 to Quit" << endl;
        cin >> value;

        switch (value) {
            case 1:
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                Delete();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
    return 0;
}
