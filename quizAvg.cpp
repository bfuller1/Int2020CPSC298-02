# include <iostream>
using namespace std;

int main (int argc, char **argv) {

int quizNum;
float quizTotal = 0.0;
float grade;
float average;
int i;

cout << "Enter the number of quizzes: " << endl;
cin >> quizNum;

for (i=1; i <= quizNum; i++) {
  cout << "Enter quiz " << i << " grade: " << endl;
  cin >> grade;
  quizTotal = quizTotal + grade;
}
average = quizTotal / quizNum;

cout << "Your average quiz grade is : " << average << endl;

return 0;

}
