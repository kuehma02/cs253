#include "Roster.hpp"

Roster::Roster(const char* filename) {
    ifstream fileIn;
    fileIn.open(filename);
    if (fileIn.fail()) {
        cerr << "ERROR: Could not open " << filename << endl;
        exit(1);
    }
    while (!fileIn.eof()) {
        string name, major,  temp_gpa;
        double gpa;
        getline(fileIn, name, ',');
        getline(fileIn, major, ',');
        getline(fileIn, temp_gpa, '\n');
        gpa = stod(temp_gpa);

        
        (this->studentList).push_back(Student(name, major, gpa));
    }

    fileIn.close();
}

ostream& operator<<(ostream& os, const Roster& r) {
    /* This function is fully implemented */
    for (uint i = 0; i < r.studentList.size(); i++) {
        cout << r.studentList.at(i) << endl;
    }
    return os;
}