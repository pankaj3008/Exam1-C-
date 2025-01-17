#include <iostream>
using namespace std;
int main()
{

    int marks;
    char grade;
    cout << "Enter your score: ";
    cin >> marks;

    // this ternary operator line for the grades upto 100 marks
    grade = marks < 40 ? 'F' : marks < 60 ? 'D': marks < 80   ? 'C': marks < 90   ? 'B': marks <= 100 ? 'A': 'N';

    // this line for control wrong value above 100 marks
    grade != 'N' ? cout << "Your grade is " << grade << "." : cout << "Invalid marks,";

    // the switch is giving a remarks for the students.
    switch (grade)
    {

    case 'A':
        cout << " Exellent work! ";
        break;

    case 'B':
        cout << " Well done ";
        break;

    case 'C':
        cout << " Good job ";
        break;

    case 'D':
        cout << " You passed, but you could do better ";
        break;

    case 'F':
        cout << " Sorry, you failed ";
        break;

    default:
        cout << " Please enter valid marks.";
        break;
    }

    // after all that the if-else statement is checked who can aligible for the next level or not aligeble
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << " Congratulation! You are eligible for the next level.";
    }
    else if (grade == 'F')
    {
        cout << " Please try again next time.";
    }
    return 0;
}