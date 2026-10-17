#include <iostream>
#include <string>
using namespace std;


int main()
{
     std::string  StudentName;
     int age; 
     float examScore;
     int numberOfCompAssignments;
     

     cout << "input name.\n";
     cin >> StudentName;

     cout << "input age.\n";
      if  (cin >> age) {
         cout << "valid age.\n";
     } else { cout << "Invalid age.\n"; return 1;}
    
     cout << "input exam score.(0-100)\n";
     if (cin >> examScore ) {
        cout << "Valid score.\n";
     } else { cout << "Invalid score.\n"; return 1;}
      
    cout << "input completed Assignments.\n";
    if (cin >> numberOfCompAssignments ) {
        cout << "Valid number.\n";
    } else { cout << "Invalid number.\n"; return 1;}


    float AssignmentsScore = numberOfCompAssignments * 10;
    float AverageScore = (examScore + AssignmentsScore) / 2; 

    bool Passed = ( AverageScore >= 50 && age <= 18);
    bool GetsBonus = (AverageScore >= 70 || numberOfCompAssignments >= 15);
    bool Failing = (AverageScore < 50);

    cout << "Student name: \n";
    cout << StudentName;
    
    cout << "AverageScore: \n";
    cout << AverageScore;
    
    cout << "Passes: " << (Passed ? "true" : "false") << "\n";
    cout << "Gets Bonus:" << (GetsBonus ? "true" : "false") << "\n";
    cout << "Failing: " << (Failing ? "true" : "false") << "\n";

    return 0;
}
