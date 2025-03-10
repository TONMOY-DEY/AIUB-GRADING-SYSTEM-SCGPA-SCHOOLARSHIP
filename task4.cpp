#include <iostream>
#include <string>
using namespace std;

class Scholar {
private:
    int scID;
    string name;
    double semesterGrade;

public:

    void setInfo(int id, string scholarName, double grade) {
        scID = id;
        name = scholarName;
        semesterGrade = grade;
    }


    void displayInfo() {
        cout << "Scholar ID: " << scID << endl;
        cout << "Name: " << name << endl;
        cout << "Semester Grade: " << semesterGrade << "\n";
    }


    double SGPA() {
        if (semesterGrade >= 9.0) {
            return semesterGrade + 0.5;
        } else if (semesterGrade >= 8.0) {
            return semesterGrade + 0.3;
        } else {
            return semesterGrade;
        }
    }


    double CGPA(double secondSemesterGrade) {
        double sgpa1 = SGPA();
        double sgpa2;
        if (secondSemesterGrade >= 9.0) {
            sgpa2 = secondSemesterGrade + 0.5;
        } else if (secondSemesterGrade >= 8.0) {
            sgpa2 = secondSemesterGrade + 0.3;
        } else {
            sgpa2 = secondSemesterGrade;
        }
        return (sgpa1 + sgpa2) / 2.0;
    }
};

int main() {
    Scholar sc1, sc2;

    int id1;
    string name1;
    double grade1;

    cout << "Enter Scholar 1 ID: ";
    cin >> id1;
    cin.ignore();
    cout << "Enter Scholar 1 Name: ";
    getline(cin, name1);
    cout << "Enter Scholar 1 Semester Grade: ";
    cin >> grade1;
    sc1.setInfo(id1, name1, grade1);


    int id2;
    string name2;
    double grade2;

    cout << "\nEnter Scholar 2 ID: ";
    cin >> id2;
    cin.ignore();
    cout << "Enter Scholar 2 Name: ";
    getline(cin, name2);
    cout << "Enter Scholar 2 Semester Grade: ";
    cin >> grade2;
    sc2.setInfo(id2, name2, grade2);


    cout << "\nScholar 1 Details:\n";
    sc1.displayInfo();
    cout << "Scholar 1 SGPA: " << sc1.SGPA() << endl;

    double secondSemesterGrade1;
    cout << "Enter Scholar 1 Second Semester Grade: ";
    cin >> secondSemesterGrade1;
    cout << "Scholar 1 CGPA after 1 year: " << sc1.CGPA(secondSemesterGrade1) << "\n";


    cout << "\nScholar 2 Details:\n";
    sc2.displayInfo();
    cout << "Scholar 2 SGPA: " << sc2.SGPA() << endl;

    double secondSemesterGrade2;
    cout << "Enter Scholar 2 Second Semester Grade: ";
    cin >> secondSemesterGrade2;
    cout << "Scholar 2 CGPA after 1 year: " << sc2.CGPA(secondSemesterGrade2) << "\n";

    return 0;
}

