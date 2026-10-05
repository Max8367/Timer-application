#include<iostream>
#include<chrono>
#include<string>
using namespace std;
using namespace std::chrono;


int main() {
	bool gate1 = true;
	int input = 0;
	bool is_running = false;
	bool is_started = false;
	steady_clock::time_point start_time;
	steady_clock::time_point end_time;
	cout << "Welcome to the time application" << endl;
	while (gate1) {
		cout << "Which mode you like to use ?\n(1)Show currint time\n(2)Stop watch\ncomming sooo....\n(3)Exit\n>" << endl;

		while (!(cin >> input)) {

			cout << "Invilad input, number only, press \'Enter\' to try again" << endl;
			cin.clear();
			cin.ignore(10000, '\n');

		}

		switch (input) {

		case 1: {
			time_point c_time = system_clock::now();
			cout << "Current time: " << c_time << "\n" << endl;
			break;
		}//case 1 of main switch

		case 2: {
			bool gate2 = true;
			while (gate2) {
				int input = 0;
				cout << "(1)Start\n(2)Stop\n(3)Reset\n(4)Exit" << endl;

				while (!(cin >> input)) {
    
					cout << "Invilad input, number only, press \'Enter\' to try again" << endl;
					cin.clear();//To clear the wrong input 
					cin.ignore(1000, '\n');


				}
				switch (input) {
				case 1: {
					if (!is_running) {
						start_time = steady_clock::now();
						is_running = true;
						is_started = true;
						cout << "Stop watch started..." << endl;
					}//if statement of case 1
					else {
						cout << "Stop watch is already running..." << endl;
					}//else statement of case 1
					break;
				}//case 1 of case 2's switch
				case 2: {
					if (is_running) {
						end_time = steady_clock::now();
						is_running = false;
						is_started = false;
						cout << "Stop watch stopped..." << endl;
						duration <double> elapsed_time = (end_time - start_time);
						cout << "Elapsed time:" << elapsed_time.count() << "s" << endl;
						break;
					}//End of case 2's if(is_running) statement

					break;
				}//case 2 of case 2's switch


				case 3: {
					is_running = false;
					is_started = false;
					cout << "Stop watch reseted...." << endl;
					break;
				}//case 3 of case 2's switch
					  //comment 
				case 4: {
					cout << "Exiting the stop watch mode..." << "\n" << endl;
					gate2 = false;
					break;
				}//case 4 of case 2's switch
				}//case 2's switch
				}//case 2's while loop
		break;	}//case 2 of main switch
		case 3: {
			cout << "Exiting ..." << "\n" << endl;
			gate1 = false;
			break;	
		}//case 3 of main switch

			}//End of the main switch

			}//End of main while loop
		return 0;
			}//End of main function

	



