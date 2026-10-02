/******************************************************************************
EXERCISE Q02- Scholarship Grade Summary  [Medium]
1. Start
2. Enter scoreQuizzes, scoreLaboratory, scoreProject, and scoreExam as decimal values.
3. Compute weightedGrade = (scoreQuizzes * 0.20) + (scoreLaboratory * 0.25) + (scoreProject * 0.25) + (scoreExam * 0.30)
4. Compute roundedGrade = round(weightedGrade)
    Compute truncatedGrade = int(weigthedGrade)
    Display weightedGrade, roundedGrade, truncatedGrade
5. End
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double scoreQuizzes, scoreLaboratory, scoreProject, scoreExam;

    cout << "Enter quizzes score: ";
    cin >> scoreQuizzes;

    cout << "Enter laboratory score: ";
    cin >> scoreLaboratory;
    
    cout << "Enter project score: ";
    cin >> scoreProject;
    
    cout << "Enter exam score: ";
    cin >> scoreExam;
    
    double weightedGrade = (scoreQuizzes * 0.20) + (scoreLaboratory * 0.25) + (scoreProject * 0.25) + (scoreExam * 0.30);
    int roundedGrade = round(weightedGrade);
    int truncatedGrade = int(weightedGrade);
    
    cout << fixed << setprecision(2);
    cout << "\n--- Grade Summary ---" << endl;
    cout << "Weighted Grade: " << weightedGrade << endl;
    cout << "Rounded Grade: " << roundedGrade << endl;
    cout << "Truncated Grade: " << truncatedGrade << endl;
    
    return 0;
}
