#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

void HangMan (int n) {
    cout << "\n";
    if (n==0) {
        cout << "\n\t               ";
        cout << "\n\t  10           ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t_______________";
    }
    if (n==1) {
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t           9   ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t               ";
        cout << "\n\t_______|_______";
    }
    if (n==2) {
        cout << "\n\t               ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t    8  |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==3) {
        cout << "\n\t        _________";
        cout << "\n\t   7   |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==4) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |    6  ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==5) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |         O";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t   5   |       ";
        cout << "\n\t_______|_______";
    }
    if (n==6) {
        cout << "\n\t   4    _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |         O";
        cout << "\n\t       |         |";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==7) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t 3     |         O";
        cout << "\n\t       |        \\|";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==8) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |         O";
        cout << "\n\t    2  |        \\|/";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
    }
    if (n==9) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |         O";
        cout << "\n\t       |        \\|/";
        cout << "\n\t       |         |";
        cout << "\n\t       |       ";
        cout << "\n\t   1   |       ";
        cout << "\n\t_______|_______";
    }
    if (n==10) {
        cout << "\n\t        _________";
        cout << "\n\t       |         |";
        cout << "\n\t       |         O";
        cout << "\n\t       |        \\|/";
        cout << "\n\t       |         |";
        cout << "\n\t       |        / \\";
        cout << "\n\t       |       ";
        cout << "\n\t_______|_______";
        cout << "\n\t   Game Over!  ";
    }
}

int Random(int min, int max) {
	srand(time(0));
	return (rand() % (max - min)) + min;
}

int main()
{
	int a = 0, Score = 0;
	int k;
	int n = 0;
	bool C[100];
	char Choose;
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t\t\t* Welcome to Hang-man *\n\n\t\t\t\t\t(Press Enter to Continue)\n\n\t\t\t\t\t";
	cin.ignore();
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t\t  Make Sure Your \"Caps Lock\" is Turned ON  \n\n\t\t\t\t\t(Press Enter to Continue)\n\n\t\t\t\t\t";
	cin.ignore();
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
	do {
		cout << "\n Choose Your Level:\n\n a) Beginner (3-4 Letter Words)\n\n b) Intermediate (5-6 Letter Words)\n\n c) Expert (7 Letter Words)\n\n\n Your Choose => ";
		cin >> Choose;
		for (int i = 0; i < 100; i++)
            C[i] = false;
        a = 0;
        n = 0;
		system("cls");
		if (Choose == 'a' | Choose == 'A') {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n Nice Choice For Start!" << endl;
			switch (Random(1, 30)) {
            case 1: {
				char A[4] = { 'B','O','A','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 2: {
				char A[4] = { 'W','O','R','K' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 3: {
				char A[4] = { 'H','O','M','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 4: {
				char A[4] = { 'W','I','L','D' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 5: {
				char A[4] = { 'B','I','R','D' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 6: {
				char A[4] = { 'B','O','N','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 7: {
				char A[4] = { 'C','A','R','D' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 8: {
				char A[4] = { 'C','I','T','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 9: {
				char A[3] = { 'L','A','W' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 10: {
				char A[4] = { 'D','U','S','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 11: {
				char A[4] = { 'F','I','R','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 12: {
				char A[4] = { 'F','A','R','M' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 13: {
				char A[4] = { 'G','I','F','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 14: {
				char A[4] = { 'G','O','L','D' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 15: {
				char A[4] = { 'J','U','M','P' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 16: {
				char A[4] = { 'K','I','N','G' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 17: {
				char A[3] = { 'A','R','M' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 18: {
				char A[3] = { 'B','A','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 19: {
				char A[3] = { 'B','A','G' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 20: {
				char A[3] = { 'C','A','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 21: {
				char A[3] = { 'D','R','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 22: {
				char A[3] = { 'F','A','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 23: {
				char A[3] = { 'G','A','S' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 24: {
				char A[3] = { 'H','A','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 25: {
				char A[3] = { 'I','C','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 26: {
				char A[3] = { 'J','O','B' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 3; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 10;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2]) {
                        Score += 100;
                        cout << "\n Congratulation! I Knew You Can Do it... (+100 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t    ";
						for (int j = 0; j < 3; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 3; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 27: {
				char A[4] = { 'R','I','C','H' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 28: {
				char A[4] = { 'S','H','O','P' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 29: {
				char A[4] = { 'T','O','W','N' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 30: {
				char A[4] = { 'W','E','S','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 4; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
							    Score += 20;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3]) {
                        Score += 200;
                        cout << "\n Congratulation! I Knew You Can Do it... (+200 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t   ";
						for (int j = 0; j < 4; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 4; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
		}
		}
		if (Choose == 'b' | Choose == 'B') {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n OK Looks Like You Don't Want to Make it to Hard For Yourself!" << endl;
			switch (Random(1, 20)) {
            case 1: {
				char A[5] = { 'Q','U','I','C','K' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 2: {
				char A[5] = { 'A','L','B','U','M' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
            case 3: {
				char A[5] = { 'A','G','E','N','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 4: {
				char A[5] = { 'A','N','G','R','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 5: {
				char A[6] = { 'C','O','U','P','L','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 6: {
				char A[5] = { 'B','L','A','C','K' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 7: {
				char A[5] = { 'C','H','I','C','K' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 8: {
				char A[5] = { 'C','H','E','A','P' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 9: {
				char A[5] = { 'D','E','A','T','H' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 10: {
				char A[5] = { 'E','A','R','T','H' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 5; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 30;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
                        Score += 300;
                        cout << "\n Congratulation! I Knew You Can Do it... (+300 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t  ";
						for (int j = 0; j < 5; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 5; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 11: {
				char A[6] = { 'C','E','N','T','E','R' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 12: {
				char A[6] = { 'A','C','T','I','V','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 13: {
				char A[6] = { 'C','A','S','T','L','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 14: {
				char A[6] = { 'E','D','I','T','O','R' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 15: {
				char A[6] = { 'G','A','R','D','E','N' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 16: {
				char A[6] = { 'I','S','L','A','N','D' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 17: {
				char A[6] = { 'M','A','R','K','E','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 18: {
				char A[6] = { 'P','L','A','N','E','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 19: {
				char A[6] = { 'S','P','R','I','N','G' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 20: {
				char A[6] = { 'T','I','C','K','E','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 6; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 40;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
                        Score += 400;
                        cout << "\n Congratulation! I Knew You Can Do it... (+400 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t ";
						for (int j = 0; j < 6; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 6; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
            }
		}
		if (Choose == 'c' | Choose == 'C') {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n So You Want to Be Challenged Huh?!" << endl;
			switch (Random(1,20)) {
            case 1: {
				char A[7] = { 'A','R','T','I','C','L','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 2: {
				char A[7] = { 'A','I','R','P','O','R','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 3: {
				char A[7] = { 'B','R','O','T','H','E','R' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 4: {
				char A[7] = { 'C','A','B','I','N','E','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 5: {
				char A[7] = { 'C','A','P','T','U','R','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 6: {
				char A[7] = { 'D','E','S','T','R','O','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 7: {
				char A[7] = { 'E','X','P','L','A','I','N' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 8: {
				char A[7] = { 'F','O','R','E','I','G','N' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 9: {
				char A[7] = { 'H','E','A','L','T','H','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 10: {
				char A[7] = { 'I','M','P','R','O','V','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 11: {
				char A[7] = { 'J','U','S','T','I','C','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 12: {
				char A[7] = { 'K','I','N','G','D','O','M' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 13: {
				char A[7] = { 'M','E','D','I','C','A','L' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 14: {
				char A[7] = { 'N','E','T','W','O','R','K' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 15: {
				char A[7] = { 'P','A','R','T','N','E','R' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 16: {
				char A[7] = { 'P','E','N','A','L','T','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 17: {
				char A[7] = { 'P','A','Y','M','E','N','T' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 18: {
				char A[7] = { 'Q','U','A','L','I','T','Y' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 19: {
				char A[7] = { 'R','O','U','T','I','N','E' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			case 20: {
				char A[7] = { 'V','I','R','T','U','A','L' };
				char B[100];
				for (int i = 0; i < 100; i++) {
					bool lll = true;
					cout << "\n Enter Letter: ";
					cin >> B[i];
					for (int j = 0; j < 7; j++) {
						if (B[i] == A[j]) {
							if (!C[j]) {
                                Score += 50;
								C[j] = true;
								k = j;
								lll = true;
								break;
							}
							else {
								cout << "\n Already Entered!" << endl;
								lll = true;
								break;
							}
						}
						else {
                            a++;
							lll = false;
						}
					}
					if (lll) {
                        system("cls");
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
                        cout << "\n Correct Letter!";
                        HangMan(n);
                        cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
					}
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                        Score += 500;
                        cout << "\n Congratulation! I Knew You Can Do it... (+500 Score)\n";
						break;
					}
					if (!lll) {
						system("cls");
						Score -= 5;
						cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
						cout << "\n Wrong Letter!";
						n++;
						HangMan(n);
						cout << "\n\n\t";
						for (int j = 0; j < 7; j++) {
							if (C[j])
								cout << " " << A[j];
							else
								cout << " -";
						}
						cout << endl;
						if (n == 10) {
                            cout << "\n it's: ";
                            for (int j = 0; j < 7; j++) {
                                cout << A[j];
                            }
							break;
						}
					}
				}
			}
			break;
			}
		}
		if (Choose != 'c' && Choose != 'C' && Choose != 'b' && Choose != 'B' && Choose != 'a' && Choose != 'A') {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n Only Choose Between \"a\" or \"b\" or \"c\" OK? Now Try Again!\n";
			continue;
		}
		while (Choose!='N'|Choose!='n'|Choose!='Y'|Choose!='y') {
        cout << "\n\n Do You Want to Play Again? (Enter Y For YES & N For NO)\n => ";
        cin >> Choose;
        if (Choose=='N'|Choose=='n')
            break;
        if (Choose=='Y'|Choose=='y') {
            system("cls");
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score << "\n";
            break;
        }
        if (Choose!='N'|Choose!='n'|Choose!='Y'|Choose!='y') {
            system("cls");
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
            cout << "\n Just Enter Y or N Nothing Else. OK?";
        cout << endl;
        }
        }
        if (Choose=='N'|Choose=='n')
            break;
	} while (3 > 2);

	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
	cout << "\n\n\n\n\n\t\t\t\t\t\tOK Good Bye!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	getch();
	return 0;
}
