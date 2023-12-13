#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;

int main() {
    pt2("title.txt");
    string name;

    print("Please input your name");
    cin >> name;

    cout << "Are you sure you want your name to be " << name << "?" << endl << "y or n?" << endl;
    string choice;
    string y = "y";
    string n = "n";
    cin >> choice;

    while (choice == y, choice == n) {
        if (choice == y) {
            cout << endl;
        }
        if (choice == n) {
            cout << "Please input your name" << endl;
            cin >> name;
            cout << "Are you sure you want your name to be " << name << "?" << endl << "y or n?" << endl;
            cin >> choice;
        }
    }

    cout << "Your name is " << name << "." << endl;
    bool continueGame = true;

    //Introduction
    printfilecontent("intro.txt");
    printfilecontent("intro2.txt");
    cin >> choice;

    if (choice == y) {
        printfilecontent("Intro3.txt");
    } else if (choice == n) {
        printfilecontent("sure.txt");
        cin >> choice;

        if (choice == y) {
            gm("gm.txt");
            continueGame = false;

        } else if (choice == n) {
            printfilecontent("itstime.txt");
        }
    }

    // Meeting Pam
    while (continueGame) {
        while (true) {
            pt1("menu.txt");

            int pamChoice;
            cin >> pamChoice;

            if (pamChoice == 1) {
                pt1("option1.txt");
                // Implement further actions for this choice.
            } else if (pamChoice == 2) {
                pt1("option2.txt");
            } else if (pamChoice == 3) {
                pt1("option3.txt");
                break;  // Exit the loop and continue with the story.
            }
            cout << endl;

            while (true) {
                pt2("menu2.txt");

                int pamInnerChoice;
                cin >> pamInnerChoice;

                if (pamInnerChoice == 1) {
                    pt2("option4.txt");
                    // Implement further actions for this choice.
                } else if (pamInnerChoice == 2) {
                    pt2("option5.txt");
                } else if (pamInnerChoice == 3) {
                    pt2("option6.txt");
                    break;
                }
                cout << endl;

                while (true) {
                    pt3("menu3.txt");

                    int pamOuterChoice;
                    cin >> pamOuterChoice;

                    if (pamOuterChoice == 1) {
                        pt3("option7.txt");
                        // Implement further actions for this choice.
                    } else if (pamOuterChoice == 2) {
                        pt3("option8.txt");
                    } else if (pamOuterChoice == 3) {
                        pt3("option9.txt");
                        break;
                    }
                    cout << endl;

                    while (true) {
                        pt4("menu4.txt");

                        cin >> pamOuterChoice;

                        if (pamOuterChoice == 1) {
                            pt4("option10.txt");
                        } else if (pamOuterChoice == 2) {
                            pt4("option11.txt");
                        } else if (pamOuterChoice == 3) {
                            pt4("option12.txt");
                            break;
                        }
                        cout << endl;

                        while (true) {
                            pt5("menu5.txt");

                            cin >> pamOuterChoice;

                            if (pamOuterChoice == 1) {
                                pt5("option13.txt");
                            } else if (pamOuterChoice == 2) {
                                pt5("option14.txt");
                            } else if (pamOuterChoice == 3) {
                                pt5("option15.txt");
                                break;
                            }
                            cout << endl;

                            while (true) {
                                pt5("menu6.txt");

                                cin >> pamOuterChoice;

                                if (pamOuterChoice == 1) {
                                    pt5("option16.txt");
                                    break;
                                } else if (pamOuterChoice == 2) {
                                    pt5("option17.txt");
                                    break;
                                } else if (pamOuterChoice == 3) {
                                    pt5("option18.txt");
                                    break;
                                }
                                cout << endl;
                            }
                            return 0;
                        }
                        return 0;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}