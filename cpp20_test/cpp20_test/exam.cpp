//#include <iostream>
//Consider the following problem statement :
//
//A college offers a course that prepares students for the state licensing exam for real estate brokers.Last year, 10 of the students who completed this course took the exam.The college wants to know how well its students did on the exam.You’ve been asked to write a program to summarize the results.You’ve been given a list of these 10 students.Next to each name is written a 1 if the student passed the exam or a 2 if the student failed.
//
//Your program should analyze the results of the exam as follows :
//
//Input each test result(i.e., a 1 or a 2).Display the message “Enter result” on the screen each time the program requests another test result.
//
//Count the number of test results of each type.
//
//Display a summary of the test results, indicating the number of students who passed and the number who failed.
//
//If more than eight students passed the exam, print “Bonus to instructor!”


//int main() {
//	int total{ 10 };
//	int result_counter{ 1 };
//	int pass{ 0 };
//	int fail{ 0 };
//	while (result_counter <= total) {
//		int temp = 0;
//		std:: cout << "Enter result 1 if pass and 2 if fail: ";
//		std:: cin >> temp;
//	
//		if (temp == 1) {
//			pass = pass + 1;
//			result_counter = result_counter + 1;
//		}
//		else if (temp == 2) {
//			fail += 1;
//			result_counter = result_counter + 1;
//		}
//		else {
//			std::cout << "Invalid input! Enter either 1 or 2: ";
//			std::cin >> temp;
//			
//		}
//		
//	}
//
//	std::cout <<"total test taker: " << total <<"\n" 
//		<<"Number of Passed student: "<< pass << "\n" 
//		<< "Number of Failed student: " << fail << "\n";
//
//	if (pass > 8) {
//		std::cout << "Cheers to the instructor";
//	}
//}