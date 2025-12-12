#include <iostream>
#include <fstream>
using namespace std;

int score = 0;
int tracker1 = 0;
int tracker2 = 0;
int tracker3 = 0;

int room1();
int room2();
int room3();
int mainmenu();
int rules();
void landingPage();

string playerName;

void landingPage() {
    int forward;

    cout << "*****************************************************" << endl;
    cout << "*             Welcome To Adventure Game            *" << endl;
    cout << "*****************************************************" << endl;
    cout << "" << endl;
    cout << "Greetings, traveler! Your adventure awaits." << endl;
    cout << "Before you begin, tell us your name: ";
    cin >> playerName;
    cin.ignore();

    cout << "" << endl;
    cout << "Hello " << playerName << "! Are you ready to start your journey?" << endl;
    cout << "Press 1 To Continue: ";
    cin >> forward;

    while (forward != 1) {
        cout << "Invalid Input! Enter 1 to Continue: ";
        cin >> forward;
    }

    mainmenu();
}


int mainmenu() {
    int selection;

    cout << "********************* Adventure Game ********************" << endl;
    cout << "" << endl;

    cout << "Room 1 (" << tracker1 << "/3 Completed) : Press 1 To Enter" << endl;
    cout << "Room 2 (" << tracker2 << "/3 Completed) : Press 2 To Enter" << endl;
    cout << "Room 3 (" << tracker3 << "/3 Completed) : Press 3 To Enter" << endl;
    cout << "Rules : Press 4" << endl;
    cout << "Exit : Press 0" << endl;
    cout << "" << endl;
    cout << "***************** By Abdullah And Muteeb ****************" << endl;
    cout << "Enter Your Selection: ";
    cin >> selection;

    while (selection < 0 or selection > 4) {
        cout << "Invalid Input! Enter Again: ";
        cin >> selection;
    }

    if (selection == 1) {
        return room1();
    }
    else if (selection == 2) {
        return room2();
    }
    else if (selection == 3) {
        return room3();
    }
    else if (selection == 4) {
        return rules();
    }
    else return 0;
}



int room1() {
    int wrong = 0, forward;

    cout << "" << endl;
    cout << "Welcome To Room 1! Here You Will Find Arithmetic Challenges." << endl;

    while (wrong < 3) {
        cout << "To Continue, Enter 1: ";
        cout << "To Go Back To Main Menu, Enter 0: ";
        cin >> forward;

        while (forward != 0 && forward != 1) {
            cout << "Invalid Input! Enter 1 or 0: ";
            cin >> forward;
        }

        if (forward == 0) return mainmenu();

        if (forward == 1) {
            int answer;
            bool correct = false;

            while (wrong < 3 && !correct) {
                cout << "Problem 1: x + 10 = 30" << endl;
                cout << "Find The Value Of X." << endl;
                cout << "To Use A Hint, Enter 2" << endl;
                cout << "Your Answer: ";
                cin >> answer;

                while (answer < 0) {
                    cout << "Invalid Input! Enter Again: ";
                    cin >> answer;
                }

                if (answer == 2) {
                    score -= 5;
                    cout << "Hint: Subtract 10 from both sides." << endl;
                    cout << "Enter Your Answer: ";
                    cin >> answer;
                }

                if (answer == 20) {
                    tracker1++;
                    score += 10;
                    cout << "Correct!" << endl;
                    correct = true;
                } else {
                    wrong++;
                    if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                    else {
                        cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                        return mainmenu();
                    }
                }
            }

            correct = false;
            while (wrong < 3 && !correct) {
                cout << "Problem 2: 2y + 10 = 26" << endl;
                cout << "Find The Value Of Y." << endl;
                cout << "To Use A Hint, Enter 2" << endl;
                cout << "Your Answer: ";
                cin >> answer;

                while (answer < 0) {
                    cout << "Invalid Input! Enter Again: ";
                    cin >> answer;
                }

                if (answer == 2) {
                    score -= 5;
                    cout << "Hint: Subtract 10, then divide by 2." << endl;
                    cout << "Enter Your Answer: ";
                    cin >> answer;
                }

                if (answer == 8) {
                    tracker1++;
                    score += 10;
                    cout << "Correct!" << endl;
                    correct = true;
                } else {
                    wrong++;
                    if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                    else {
                        cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                        return mainmenu();
                    }
                }
            }

            correct = false;
            while (wrong < 3 && !correct) {
                cout << "Problem 3: 696 / 3 = X" << endl;
                cout << "Find The Value Of X." << endl;
                cout << "To Use A Hint, Enter 2" << endl;
                cout << "Your Answer: ";
                cin >> answer;

                while (answer < 0) {
                    cout << "Invalid Input! Enter Again: ";
                    cin >> answer;
                }

                if (answer == 2) {
                    score -= 5;
                    cout << "Hint: The answer is an even number." << endl;
                    cout << "Enter Your Answer: ";
                    cin >> answer;
                }

                if (answer == 232) {
                    tracker1++;
                    score += 10;
                    cout << "Correct!" << endl;
                    cout << "All Problems Done!" << endl;
                    cout << "Enter 1 For Main Menu" << endl;
                    cout << "Enter 0 For Room 2: ";
                    cin >> forward;

                    while (forward != 1 && forward != 0) {
                        cout << "Invalid Input! Enter Again: ";
                        cin >> forward;
                    }

                    if (forward == 1) return mainmenu();
                    else return room2();
                } else {
                    wrong++;
                    if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                    else {
                        cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                        return mainmenu();
                    }
                }
            }
        }
    }

    cout << "3 Attempts Used! Returning To Main Menu..." << endl;
    return mainmenu();
}


int room2() {
    int wrong = 0, forward;

    cout << "" << endl;
    cout << "Welcome To Room 2! Decision Challenges Await!" << endl;

    while (wrong < 3) {
        cout << "Enter 1 To Continue, 0 To Main Menu: ";
        cin >> forward;

        while (forward != 1 && forward != 0) {
            cout << "Invalid Input! Enter 1 or 0: ";
            cin >> forward;
        }

        if (forward == 0) return mainmenu();

        char answer;
        bool correct = false;

        while (wrong < 3 && !correct) {
            cout << "" << endl;
            cout << "Challenge 1:" << endl;
            cout << "You’re on a timed quest to reach the Crystal Cave before sundown." << endl;
            cout << "The moss trail is safe but adds 2 extra hours." << endl;
            cout << "The rope bridge is the shortest route, but it’s 50% likely to collapse." << endl;
            cout << "The thicket has known wolf packs active at this time of day." << endl;
            cout << "You have only 3 hours until sundown when the cave entrance seals." << endl;
            cout << "Which path would you pick?" << endl;
            cout << "A) Moss Trail (safe but +2 hours travel)" << endl;
            cout << "B) Rope Bridge (shortest but 50% collapse risk)" << endl;
            cout << "C) Thicket (dangerous wildlife, moderate time)" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer != 'A' && answer != 'a' &&
                   answer != 'B' && answer != 'b' &&
                   answer != 'C' && answer != 'c' &&
                   answer != '2') {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == '2') {
                score -= 5;
                cout << "Hint: Only the fastest path works." << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 'B' || answer == 'b') {
                tracker2++;
                score += 10;
                cout << "Correct!" << endl;
                correct = true;
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }

        correct = false;
        while (wrong < 3 && !correct) {
            cout << "Challenge 2:" << endl;
            cout << "You took the rope bridge—it partially collapsed but you made it across." << endl;
            cout << "Now you face a fast river with the following conditions:" << endl;
            cout << "River current is strong; swimming risks drowning (90% failure rate)." << endl;
            cout << "There is a hut nearby possibly containing a boat (70% chance)." << endl;
            cout << "Following the riverbank adds 4 hours (you only have 2 hours left until sundown)." << endl;
            cout << "What do you do?" << endl;
            cout << "A) Search hut for a boat (takes 30 minutes)" << endl;
            cout << "B) Try to swim across (10 minutes, high risk)" << endl;
            cout << "C) Follow riverbank (4 hours, safe but too long)" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer != 'A' && answer != 'a' &&
                   answer != 'B' && answer != 'b' &&
                   answer != 'C' && answer != 'c' &&
                   answer != '2') {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == '2') {
                score -= 5;
                cout << "Hint: You must beat the time limit safely." << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 'A' || answer == 'a') {
                tracker2++;
                score += 10;
                cout << "Correct!" << endl;
                correct = true;
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }

        correct = false;
        while (wrong < 3 && !correct) {
            cout << "Challenge 3:" << endl;
            cout << "You found a boat in the hut and reached the Crystal Cave with 1 hour to spare." << endl;
            cout << "The entrance is blocked by a large boulder (500 kg) on a slope." << endl;
            cout << "You have these tools: rope, a lever, and a bottle of flammable oil." << endl;
            cout << "A narrow gap under the boulder leads inside, but you cannot fit through it." << endl;
            cout << "How do you move the boulder?" << endl;
            cout << "A) Use the lever to try to pry the boulder (insufficient for 500 kg)" << endl;
            cout << "B) Pour oil under and light it to crack the boulder (granite won't crack)" << endl;
            cout << "C) Tie rope to a tree and use a pulley system with the lever" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer != 'A' && answer != 'a' &&
                   answer != 'B' && answer != 'b' &&
                   answer != 'C' && answer != 'c' &&
                   answer != '2') {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == '2') {
                score -= 5;
                cout << "Hint: Combine tools for maximum force." << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 'C' || answer == 'c') {
                tracker2++;
                score += 10;
                cout << "Correct!" << endl;
                cout << "All Challenges Done!" << endl;
                cout << "Enter 1 For Main Menu, 0 To Replay: ";
                cin >> forward;

                while (forward != 1 && forward != 0) {
                    cout << "Invalid Input! Enter Again: ";
                    cin >> forward;
                }

                if (forward == 1) return mainmenu();
                else return room2();
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }
    }

    cout << "3 Attempts Used! Returning To Main Menu..." << endl;
    return mainmenu();
}


int room3() {
    int wrong = 0, forward;

    cout << "Welcome To Room 3!" << endl;

    while (wrong < 3) {
        cout << "Enter 1 To Continue, 0 To Main Menu: ";
        cin >> forward;

        while (forward != 1 && forward != 0) {
            cout << "Invalid Input! Enter 1 or 0: ";
            cin >> forward;
        }

        if (forward == 0) return mainmenu();

        int answer;
        bool correct = false;

        while (wrong < 3 && !correct) {
            cout << "Puzzle 1: Next Number In Sequence 2,6,12,20,30,?" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer < 0) {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == 2) {
                score -= 5;
                cout << "Hint: n(n+1) pattern." << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 42) {
                tracker3++;
                score += 10;
                cout << "Correct!" << endl;
                correct = true;
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }

        correct = false;
        while (wrong < 3 && !correct) {
            cout << "Puzzle 2: Grid Middle Number (Row sum = 20)" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer < 0) {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == 2) {
                score -= 5;
                cout << "Hint: 2 + X + 6 = 20" << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 12) {
                tracker3++;
                score += 10;
                cout << "Correct!" << endl;
                correct = true;
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }

        correct = false;
        while (wrong < 3 && !correct) {
            cout << "Puzzle 3: 4-Digit Code" << endl;
            cout << "Hint = 2" << endl;
            cout << "Your Answer: ";
            cin >> answer;

            while (answer < 0) {
                cout << "Invalid Input! Enter Again: ";
                cin >> answer;
            }

            if (answer == 2) {
                score -= 5;
                cout << "Hint: Digits add to 12, pattern 2 b b+1 b" << endl;
                cout << "Enter Answer: ";
                cin >> answer;
            }

            if (answer == 2343) {
                tracker3++;
                score += 10;
                cout << "Correct!" << endl;

                cout << "All Puzzles Done!" << endl;
                cout << "********************* FINAL SCORE *********************" << endl;
                cout << "Player: " << playerName << endl;
                cout << "Total Score: " << score << endl;
                if(score >= 70) cout << "Result: Excellent Performance" << endl;
                else if(score >= 40) cout << "Result: Good Performance" << endl;
                else cout << "Result: Needs Improvement" << endl;
                cout << "*******************************************************" << endl;

                ofstream file;
                file.open("score.txt", ios::app);
                file << "Player: " << playerName << " | Score: " << score << endl;
                file.close();

                cout << "Enter 1 For Main Menu, 0 To Replay Room 3: ";
                cin >> forward;

                while (forward != 1 && forward != 0) {
                    cout << "Invalid Input! Enter Again: ";
                    cin >> forward;
                }

                if (forward == 1) return mainmenu();
                else return room3();
            } else {
                wrong++;
                if (wrong < 3) cout << "Incorrect! Try Again." << endl;
                else {
                    cout << "Incorrect! You've used all 3 attempts. Returning to Main Menu..." << endl;
                    return mainmenu();
                }
            }
        }
    }

    cout << "3 Attempts Used! Returning To Main Menu..." << endl;
    return mainmenu();
}



int rules() {
    int forward;
    cout << "Rules:" << endl;
    cout << "- You Get 3 Attempts Per Room" << endl;
    cout << "- Each Correct Answer Adds 10 Points" << endl;
    cout << "- Each Incorrect Answer Subtracts 5 Points" << endl;
    cout << "- Each Hint Costs 5 Points" << endl;
    cout << "- You Cannot Leave A Room Until You Finish All Challenges" << endl;
    cout << "Enter 1 To Go Back: ";
    cin >> forward;

    while (forward != 1) {
        cout << "Invalid Input! Enter 1: ";
        cin >> forward;
    }

    return mainmenu();
}

int main() {
    landingPage();
}