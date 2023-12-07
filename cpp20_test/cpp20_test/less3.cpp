//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void tenGradeAverage() {
//	int total{ 0 };
//	int gradeCounter{ 1 };
//
//	while (gradeCounter <= 10) {
//		cout << "Enter grade: ";
//		int grade;
//		cin >> grade;
//		total = total + grade;
//		gradeCounter = gradeCounter + 1;
//	}
//
//	int average{ total / 10 };
//
//	cout << "\nTotal of all 10 grade is " << total;
//	cout << "\nAverage grade of the class is " << average;
//}
//static void sentinelControolerIteration() {
//
//	//initialization phase
//	int total{ 0 }; //initialize sum of grade
//	int gradeCounter{ 0 }; //initialize # of grade entered
//
//	//processing phase
//	//prompt for input and read grade from user
//	cout << "Enter grade or -1 to quit: ";
//	int grade;
//	cin >> grade;
//
//	//looop until sentinel value is read from user
//	while (grade != -1) {
//		total = total + grade; //add grade to total
//		gradeCounter = gradeCounter + 1; //increment counter
//
//		//prompt for input and read next grade from user
//		cout << "Enter grade or -1 to quit: ";
//		cin >> grade;
//	}
//
//	//termination phase
//	//if user entered at least one grade...
//	if (gradeCounter != 0) {
//		//use number with decimal point to calculate average
//		double average{ static_cast<double>(total) / gradeCounter };
//
//
//		//display total and average ( with two digits of precision)
//		cout << "\nTotal of the " << gradeCounter
//			<< "grades entered is " << total;
//		cout << setprecision(2) << fixed;
//		cout << "\nClass average is " << average << "\n";
//	}
//	else {//no grade were entered so we are outputting this
//		cout << "No grades were entered\n";
//	}
//
//
//}
//int main() {
//	sentinelControolerIteration();
//	return 0;
//}
//
//
//
