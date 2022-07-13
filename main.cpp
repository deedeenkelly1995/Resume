#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
//class declaration
class Student{
    int studentNumber;
    string name;
    double mathGrade;
    double englishGrade;
    double scienceGrade;
    double sstudiesGrade;
    double average;
    string Grade;

    public:
        void tableHeader() const;
        void getData();
        void showData() const;
        void calculateAverageGrade();
};

//header of the table
void Student::tableHeader() const
{
    std::cout << setw(5) << "ID Number"
              << setw(15) << "Name"
              << setw(15) << "Math" 
              << setw(15) << "English" 
              << setw(15) << "Science"
              << setw(15) << "Social Studies"  
              << endl;
}
//loop printing data into table
void Student::showData() const
{
    tableHeader();
    //std::cout << studentNumber << "\t" << name << endl;
    //std::cout << "Grade Point Average: " << average << endl;
    std::cout << setw(5) << studentNumber
              << setw(15) << name
              << setw(15) << mathGrade
              << setw(15) << englishGrade
              << setw(15) << scienceGrade
              << setw(15) << sstudiesGrade
              << endl;

}

// Calculate the grade on a 4.0 scale
void Student::calculateAverageGrade()
{
    average = (mathGrade + englishGrade + scienceGrade + sstudiesGrade)/4.0;
    if(average>93) Grade = 'A';
    else if (average >= 90 && average <= 92) Grade = 'A-';
    else if (average >= 87 && average <= 89) Grade = 'B+';
    else if (average >= 83 && average <= 86) Grade = 'B';
    else if (average >= 80 && average <= 82) Grade = 'B-';
    else if (average >= 77 && average <= 79) Grade = 'C+';
    else if (average >= 73 && average <= 76) Grade = 'C';
    else if (average >= 70 && average <= 72) Grade = 'C-';
    else if (average >= 65 && average <= 69) Grade = 'D+';
    else if (average >= 60 && average <= 64) Grade = 'D';
    else Grade = 'F';
}

//user inserts grades
void Student::getData()
{
    std::cout <<"Enter student number: ";
    std::cin >> studentNumber;

    std::cout << "Enter student name: ";
    std::cin >> name;

    std::cout << "Enter Math grade: ";
    std::cin >> mathGrade;
    
    std::cout << "Enter English grade: ";
    std::cin >> englishGrade;

    std::cout << "Enter Social Studies grade: ";
    std::cin >> sstudiesGrade;

    std::cout << "Enter Science grade: ";
    std::cin >> scienceGrade;

    calculateAverageGrade();
}

int main(){
    std::cout << "Welcome to Student Database 1.0" << endl;
    Student studentNumber;
    studentNumber.getData();
    studentNumber.showData();
    return 0;
}