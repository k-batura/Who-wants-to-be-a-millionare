// The following is code that demonstrates how to read/write from/to files.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <cstdio>
#include <string>
#include <array>
#include <ctime>

using namespace std;

int main()
{
	string ans = "", question = "", a = "", b = "", c = "", d = "";
	int value = 0, qNum = 0, amountWon = 0;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ";
	Sleep(500);
	cout<<"W ";
	Sleep(500);
	cout << "E ";
	Sleep(500);
	cout << "L ";
	Sleep(500);
	cout << "C ";
	Sleep(500);
	cout << "O ";
	Sleep(500);
	cout << "M ";
	Sleep(500);
	cout << "E ";

	Sleep(3000);

	system("CLS");

	cout << "RULES:\n\n";
	cout << "1) You will be given 15 questions.\n";
	cout << "2) You have to answer each of them correctly to win $1 million.\n";
	cout << "3) Type 'a' to select A, 'b' to select B, 'c' to select C, 'd' to select D.\n";
	cout << "4) You can quit any time you want by typing 'quit' and walk away with the money you have already earned.\n";
	cout << "5) If you get a question wrong, all your earned money will be lost.\n";
	cout << "6) You will not have a time limit, so take as long as you want to answer the questions!\n";

	cout << "\n\n\n[Press Enter to Continue]";
	cin.ignore();

	system("CLS");

	cout << "Question Format:\n\n";
	cout << setw(15) << "Question #" << setw(15) << "Amount\n";
	Sleep(500);
	cout<< setw(15) << "15" << setw(15) << "$1 Million\n";
	Sleep(500);
	cout << setw(15) << "14" << setw(15) << "$500,000\n";
	Sleep(500);
	cout << setw(15) << "13" << setw(15) << "$250,000\n";
	Sleep(500);
	cout << setw(15) << "12" << setw(15) << "$125,000\n";
	Sleep(500);
	cout << setw(15) << "11" << setw(15) << "$64,000\n";
	Sleep(500);
	cout << setw(15) << "10" << setw(15) << "$32,000\n";
	Sleep(500);
	cout << setw(15) << "9" << setw(15) << "$16,000\n";
	Sleep(500);
	cout << setw(15) << "8" << setw(15) << "$8,000\n";
	Sleep(500);
	cout << setw(15) << "7" << setw(15) << "$4,000\n";
	Sleep(500);
	cout << setw(15) << "6" << setw(15) << "$2,000\n";
	Sleep(500);
	cout << setw(15) << "5" << setw(15) << "$1,000\n";
	Sleep(500);
	cout << setw(15) << "4" << setw(15) << "$500\n";
	Sleep(500);
	cout << setw(15) << "3" << setw(15) << "$300\n";
	Sleep(500);
	cout << setw(15) << "2" << setw(15) << "$200\n";
	Sleep(500);
	cout << setw(15) << "1" << setw(15) << "$100\n";
	Sleep(500);

	cout << "\n\n[Press Enter to Continue]";
	cin.ignore();

	system("CLS");

	qNum = 1;
	question = "Are dolphins fish or mammals?";
	a = "Fish";
	b = "Mammals";
	c = "Both";
	d = "None";

	value = 100;

	cout << "Value : " << value << "\n\n";
	cout << "\n\n\nQuestion #" << qNum << " : \n\n";
	cout << question << "\n";
	cout << "a) " << a << "\t\t\t";
	cout << "b) " << b << "\n";
	cout << "c) " << c << "\t\t\t";
	cout<<"d) " << d << "\n\n";
	getline(cin, ans, '\n');

	if (ans == "quit")
	{
		system("CLS");
		cout << "\nYou have quit!\n\n";
		cout << "You have won: $" << amountWon;
	}
	else if (ans == "a" || ans == "c" || ans == "d")
	{
		system("CLS");
		cout << "Wrong Answer!\n\n";
		cout << "You didn't win anything.";
	}
	else if (ans != "b")
	{
		system("CLS");
		cout << "\n\tINVALID ANSWER!!!\n";
		cout << "\n\tStart Again!";
	}
	else if (ans == "b")
	{
		system("CLS");
		cout << "\n\nCORRECT ANSWER!!!\n";
		cout << "You just won : $" << value;
		amountWon = amountWon + value;
		cout << "\nYou have a total of : $"<< amountWon;
		cout << "\n\n[Press Enter to Continue]";
		cin.ignore();

		system("CLS");

		qNum = 2;
		question = "What country has the highest population?";
		a = "America";
		b = "Canada";
		c = "China";
		d = "India";

		value = 100;

		cout << "Value : " << value << "\n\n";
		cout << "\n\n\nQuestion #" << qNum << " : \n\n";
		cout << question << "\n";
		cout << "a) " << a << "\t\t\t";
		cout << "b) " << b << "\n";
		cout << "c) " << c << "\t\t\t";
		cout << "d) " << d << "\n\n";
		getline(cin, ans, '\n');

		if (ans == "quit")
		{
			system("CLS");
			cout << "\nYou have quit!\n\n";
			cout << "You have won: $" << amountWon;
		}
		else if (ans == "a" || ans == "b" || ans == "d")
		{
			system("CLS");
			cout << "Wrong Answer!\n\n";
			cout << "You didn't win anything.";
		}
		else if (ans != "c")
		{
			system("CLS");
			cout << "\n\tINVALID ANSWER!!!\n";
			cout << "\n\tStart Again!";
		}
		else if (ans == "c")
		{
			system("CLS");
			cout << "\n\nCORRECT ANSWER!!!\n";
			cout << "You just won : $" << value;
			amountWon = amountWon + value;
			cout << "\nYou have a total of : $" << amountWon;
			cout << "\n\n[Press Enter to Continue]";
			cin.ignore();

			system("CLS");

			qNum = 3;
			question = "What is the strongest muscle in the human body?";
			a = "Biceps";
			b = "Triceps";
			c = "Hamstring";
			d = "Tungue";

			value = 100;

			cout << "Value : " << value << "\n\n";
			cout << "\n\n\nQuestion #" << qNum << " : \n\n";
			cout << question << "\n";
			cout << "a) " << a << "\t\t\t";
			cout << "b) " << b << "\n";
			cout << "c) " << c << "\t\t\t";
			cout << "d) " << d << "\n\n";
			getline(cin, ans, '\n');

			if (ans == "quit")
			{
				system("CLS");
				cout << "\nYou have quit!\n\n";
				cout << "You have won: $" << amountWon;
			}
			else if (ans == "a" || ans == "b" || ans == "c")
			{
				system("CLS");
				cout << "Wrong Answer!\n\n";
				cout << "You didn't win anything.";
			}
			else if (ans != "d")
			{
				system("CLS");
				cout << "\n\tINVALID ANSWER!!!\n";
				cout << "\n\tStart Again!";
			}
			else if (ans == "d")
			{
				system("CLS");
				cout << "\n\nCORRECT ANSWER!!!\n";
				cout << "You just won : $" << value;
				amountWon = amountWon + value;
				cout << "\nYou have a total of : $" << amountWon;
				cout << "\n\n[Press Enter to Continue]";
				cin.ignore();

				system("CLS");

				qNum = 4;
				question = "What is a word or sentence that is the same front and back (example: 'racecar', 'kayak')?";
				a = "Pun";
				b = "Metaphor";
				c = "Onomatopoeia";
				d = "Palindrome";

				value = 200;

				cout << "Value : " << value << "\n\n";
				cout << "\n\n\nQuestion #" << qNum << " : \n\n";
				cout << question << "\n";
				cout << "a) " << a << "\t\t\t";
				cout << "b) " << b << "\n";
				cout << "c) " << c << "\t\t\t";
				cout << "d) " << d << "\n\n";
				getline(cin, ans, '\n');

				if (ans == "quit")
				{
					system("CLS");
					cout << "\nYou have quit!\n\n";
					cout << "You have won: $" << amountWon;
				}
				else if (ans == "a" || ans == "b" || ans == "c")
				{
					system("CLS");
					cout << "Wrong Answer!\n\n";
					cout << "You didn't win anything.";
				}
				else if (ans != "d")
				{
					system("CLS");
					cout << "\n\tINVALID ANSWER!!!\n";
					cout << "\n\tStart Again!";
				}
				else if (ans == "d")
				{
					system("CLS");
					cout << "\n\nCORRECT ANSWER!!!\n";
					cout << "You just won : $" << value;
					amountWon = amountWon + value;
					cout << "\nYou have a total of : $" << amountWon;
					cout << "\n\n[Press Enter to Continue]";
					cin.ignore();

					system("CLS");

					qNum = 5;
					question = "On ans average, Americans eat 18 acres of what everyday?";
					a = "Pizza";
					b = "Potato Chips";
					c = "Ham";
					d = "Apples";

					value = 500;

					cout << "Value : " << value << "\n\n";
					cout << "\n\n\nQuestion #" << qNum << " : \n\n";
					cout << question << "\n";
					cout << "a) " << a << "\t\t\t";
					cout << "b) " << b << "\n";
					cout << "c) " << c << "\t\t\t";
					cout << "d) " << d << "\n\n";
					getline(cin, ans, '\n');

					if (ans == "quit")
					{
						system("CLS");
						cout << "\nYou have quit!\n\n";
						cout << "You have won: $" << amountWon;
					}
					else if (ans == "b" || ans == "c" || ans == "d")
					{
						system("CLS");
						cout << "Wrong Answer!\n\n";
						cout << "You didn't win anything.";
					}
					else if (ans != "a")
					{
						system("CLS");
						cout << "\n\tINVALID ANSWER!!!\n";
						cout << "\n\tStart Again!";
					}
					else if (ans == "a")
					{
						system("CLS");
						cout << "\n\nCORRECT ANSWER!!!\n";
						cout << "You just won : $" << value;
						amountWon = amountWon + value;
						cout << "\nYou have a total of : $" << amountWon;
						cout << "\n\n[Press Enter to Continue]";
						cin.ignore();

						system("CLS");

						qNum = 6;
						question = "What is the most commonly spoken language in the world?";
						a = "Spanish";
						b = "Chinese";
						c = "English";
						d = "Hindi";

						value = 1000;

						cout << "Value : " << value << "\n\n";
						cout << "\n\n\nQuestion #" << qNum << " : \n\n";
						cout << question << "\n";
						cout << "a) " << a << "\t\t\t";
						cout << "b) " << b << "\n";
						cout << "c) " << c << "\t\t\t";
						cout << "d) " << d << "\n\n";
						getline(cin, ans, '\n');

						if (ans == "quit")
						{
							system("CLS");
							cout << "\nYou have quit!\n\n";
							cout << "You have won: $" << amountWon;
						}
						else if (ans == "a" || ans == "c" || ans == "d")
						{
							system("CLS");
							cout << "Wrong Answer!\n\n";
							cout << "You didn't win anything.";
						}
						else if (ans != "b")
						{
							system("CLS");
							cout << "\n\tINVALID ANSWER!!!\n";
							cout << "\n\tStart Again!";
						}
						else if (ans == "b")
						{
							system("CLS");
							cout << "\n\nCORRECT ANSWER!!!\n";
							cout << "You just won : $" << value;
							amountWon = amountWon + value;
							cout << "\nYou have a total of : $" << amountWon;
							cout << "\n\n[Press Enter to Continue]";
							cin.ignore();

							system("CLS");

							qNum = 7;
							question = "10% of the Russian government's income comes from the sale of what?";
							a = "Guns";
							b = "Vodka";
							c = "Clothes";
							d = "Paper";

							value = 2000;

							cout << "Value : " << value << "\n\n";
							cout << "\n\n\nQuestion #" << qNum << " : \n\n";
							cout << question << "\n";
							cout << "a) " << a << "\t\t\t";
							cout << "b) " << b << "\n";
							cout << "c) " << c << "\t\t\t";
							cout << "d) " << d << "\n\n";
							getline(cin, ans, '\n');

							if (ans == "quit")
							{
								system("CLS");
								cout << "\nYou have quit!\n\n";
								cout << "You have won: $" << amountWon;
							}
							else if (ans == "a" || ans == "c" || ans == "d")
							{
								system("CLS");
								cout << "Wrong Answer!\n\n";
								cout << "You didn't win anything.";
							}
							else if (ans != "b")
							{
								system("CLS");
								cout << "\n\tINVALID ANSWER!!!\n";
								cout << "\n\tStart Again!";
							}
							else if (ans == "b")
							{
								system("CLS");
								cout << "\n\nCORRECT ANSWER!!!\n";
								cout << "You just won : $" << value;
								amountWon = amountWon + value;
								cout << "\nYou have a total of : $" << amountWon;
								cout << "\n\n[Press Enter to Continue]";
								cin.ignore();

								system("CLS");

								qNum = 8;
								question = "What percent of an adult human body is water?";
								a = "100%";
								b = "70%";
								c = "60%";
								d = "80%";

								value = 4000;

								cout << "Value : " << value << "\n\n";
								cout << "\n\n\nQuestion #" << qNum << " : \n\n";
								cout << question << "\n";
								cout << "a) " << a << "\t\t\t";
								cout << "b) " << b << "\n";
								cout << "c) " << c << "\t\t\t";
								cout << "d) " << d << "\n\n";
								getline(cin, ans, '\n');

								if (ans == "quit")
								{
									system("CLS");
									cout << "\nYou have quit!\n\n";
									cout << "You have won: $" << amountWon;
								}
								else if (ans == "a" || ans == "b" || ans == "d")
								{
									system("CLS");
									cout << "Wrong Answer!\n\n";
									cout << "You didn't win anything.";
								}
								else if (ans != "c")
								{
									system("CLS");
									cout << "\n\tINVALID ANSWER!!!\n";
									cout << "\n\tStart Again!";
								}
								else if (ans == "c")
								{
									system("CLS");
									cout << "\n\nCORRECT ANSWER!!!\n";
									cout << "You just won : $" << value;
									amountWon = amountWon + value;
									cout << "\nYou have a total of : $" << amountWon;
									cout << "\n\n[Press Enter to Continue]";
									cin.ignore();

									system("CLS");

									qNum = 9;
									question = "What is the longest river in the world?";
									a = "The Amazon";
									b = "River Ganga";
									c = "Congo River";
									d = "The Nile";

									value = 8000;

									cout << "Value : " << value << "\n\n";
									cout << "\n\n\nQuestion #" << qNum << " : \n\n";
									cout << question << "\n";
									cout << "a) " << a << "\t\t\t";
									cout << "b) " << b << "\n";
									cout << "c) " << c << "\t\t\t";
									cout << "d) " << d << "\n\n";
									getline(cin, ans, '\n');

									if (ans == "quit")
									{
										system("CLS");
										cout << "\nYou have quit!\n\n";
										cout << "You have won: $" << amountWon;
									}
									else if (ans == "a" || ans == "b" || ans == "c")
									{
										system("CLS");
										cout << "Wrong Answer!\n\n";
										cout << "You didn't win anything.";
									}
									else if (ans != "d")
									{
										system("CLS");
										cout << "\n\tINVALID ANSWER!!!\n";
										cout << "\n\tStart Again!";
									}
									else if (ans == "d")
									{
										system("CLS");
										cout << "\n\nCORRECT ANSWER!!!\n";
										cout << "You just won : $" << value;
										amountWon = amountWon + value;
										cout << "\nYou have a total of : $" << amountWon;
										cout << "\n\n[Press Enter to Continue]";
										cin.ignore();

										system("CLS");

										qNum = 10;
										question = "Hitler party which came into power in 1933 is known as ____?";
										a = "Labour Party";
										b = "Nazi Party";
										c = "Ku-Klux-Klan";
										d = "Democratic Party";

										value = 16000;

										cout << "Value : " << value << "\n\n";
										cout << "\n\n\nQuestion #" << qNum << " : \n\n";
										cout << question << "\n";
										cout << "a) " << a << "\t\t\t";
										cout << "b) " << b << "\n";
										cout << "c) " << c << "\t\t\t";
										cout << "d) " << d << "\n\n";
										getline(cin, ans, '\n');

										if (ans == "quit")
										{
											system("CLS");
											cout << "\nYou have quit!\n\n";
											cout << "You have won: $" << amountWon;
										}
										else if (ans == "a" || ans == "c" || ans == "d")
										{
											system("CLS");
											cout << "Wrong Answer!\n\n";
											cout << "You didn't win anything.";
										}
										else if (ans != "b")
										{
											system("CLS");
											cout << "\n\tINVALID ANSWER!!!\n";
											cout << "\n\tStart Again!";
										}
										else if (ans == "b")
										{
											system("CLS");
											cout << "\n\nCORRECT ANSWER!!!\n";
											cout << "You just won : $" << value;
											amountWon = amountWon + value;
											cout << "\nYou have a total of : $" << amountWon;
											cout << "\n\n[Press Enter to Continue]";
											cin.ignore();

											system("CLS");

											qNum = 11;
											question = "Galileo was an Italian astronomer who ?";
											a = "Developed the telescope";
											b = "Discovered four satellites of Jupiter";
											c = "Discovered that the movement of pendulum produces a regular time measurement";
											d = "All of the above";

											value = 32000;

											cout << "Value : " << value << "\n\n";
											cout << "\n\n\nQuestion #" << qNum << " : \n\n";
											cout << question << "\n";
											cout << "a) " << a << "\t\t\t";
											cout << "b) " << b << "\n";
											cout << "c) " << c << "\t\t\t";
											cout << "d) " << d << "\n\n";
											getline(cin, ans, '\n');

											if (ans == "quit")
											{
												system("CLS");
												cout << "\nYou have quit!\n\n";
												cout << "You have won: $" << amountWon;
											}
											else if (ans == "a" || ans == "b" || ans == "c")
											{
												system("CLS");
												cout << "Wrong Answer!\n\n";
												cout << "You didn't win anything.";
											}
											else if (ans != "d")
											{
												system("CLS");
												cout << "\n\tINVALID ANSWER!!!\n";
												cout << "\n\tStart Again!";
											}
											else if (ans == "d")
											{
												system("CLS");
												cout << "\n\nCORRECT ANSWER!!!\n";
												cout << "You just won : $" << value;
												amountWon = amountWon + value;
												cout << "\nYou have a total of : $" << amountWon;
												cout << "\n\n[Press Enter to Continue]";
												cin.ignore();

												system("CLS");

												qNum = 12;
												question = "What is the world's oldest religion?";
												a = "Christianity";
												b = "Islam";
												c = "Buddhism";
												d = "Hunduism";

												value = 61000;

												cout << "Value : " << value << "\n\n";
												cout << "\n\n\nQuestion #" << qNum << " : \n\n";
												cout << question << "\n";
												cout << "a) " << a << "\t\t\t";
												cout << "b) " << b << "\n";
												cout << "c) " << c << "\t\t\t";
												cout << "d) " << d << "\n\n";
												getline(cin, ans, '\n');

												if (ans == "quit")
												{
													system("CLS");
													cout << "\nYou have quit!\n\n";
													cout << "You have won: $" << amountWon;
												}
												else if (ans == "a" || ans == "b" || ans == "c")
												{
													system("CLS");
													cout << "Wrong Answer!\n\n";
													cout << "You didn't win anything.";
												}
												else if (ans != "d")
												{
													system("CLS");
													cout << "\n\tINVALID ANSWER!!!\n";
													cout << "\n\tStart Again!";
												}
												else if (ans == "d")
												{
													system("CLS");
													cout << "\n\nCORRECT ANSWER!!!\n";
													cout << "You just won : $" << value;
													amountWon = amountWon + value;
													cout << "\nYou have a total of : $" << amountWon;
													cout << "\n\n[Press Enter to Continue]";
													cin.ignore();

													system("CLS");

													qNum = 13;
													question = "The ozone layer restricts ____ ?";
													a = "Visible light";
													b = "Ultraviolet radiation";
													c = "X-rays and Gamma rays";
													d = "Infrared radiation";

													value = 125000;

													cout << "Value : " << value << "\n\n";
													cout << "\n\n\nQuestion #" << qNum << " : \n\n";
													cout << question << "\n";
													cout << "a) " << a << "\t\t\t";
													cout << "b) " << b << "\n";
													cout << "c) " << c << "\t\t\t";
													cout << "d) " << d << "\n\n";
													getline(cin, ans, '\n');

													if (ans == "quit")
													{
														system("CLS");
														cout << "\nYou have quit!\n\n";
														cout << "You have won: $" << amountWon;
													}
													else if (ans == "a" || ans == "c" || ans == "d")
													{
														system("CLS");
														cout << "Wrong Answer!\n\n";
														cout << "You didn't win anything.";
													}
													else if (ans != "b")
													{
														system("CLS");
														cout << "\n\tINVALID ANSWER!!!\n";
														cout << "\n\tStart Again!";
													}
													else if (ans == "b")
													{
														system("CLS");
														cout << "\n\nCORRECT ANSWER!!!\n";
														cout << "You just won : $" << value;
														amountWon = amountWon + value;
														cout << "\nYou have a total of : $" << amountWon;
														cout << "\n\n[Press Enter to Continue]";
														cin.ignore();

														system("CLS");

														qNum = 14;
														question = "For seeing objects at the surface of water from a submarine under water, the instrument used is ____ ?";
														a = "Kaleidoscope";
														b = "Periscope";
														c = "Spectroscope";
														d = "Telescope";

														value = 250000;

														cout << "Value : " << value << "\n\n";
														cout << "\n\n\nQuestion #" << qNum << " : \n\n";
														cout << question << "\n";
														cout << "a) " << a << "\t\t\t";
														cout << "b) " << b << "\n";
														cout << "c) " << c << "\t\t\t";
														cout << "d) " << d << "\n\n";
														getline(cin, ans, '\n');

														if (ans == "quit")
														{
															system("CLS");
															cout << "\nYou have quit!\n\n";
															cout << "You have won: $" << amountWon;
														}
														else if (ans == "a" || ans == "c" || ans == "d")
														{
															system("CLS");
															cout << "Wrong Answer!\n\n";
															cout << "You didn't win anything.";
														}
														else if (ans != "b")
														{
															system("CLS");
															cout << "\n\tINVALID ANSWER!!!\n";
															cout << "\n\tStart Again!";
														}
														else if (ans == "b")
														{
															system("CLS");
															cout << "\n\nCORRECT ANSWER!!!\n";
															cout << "You just won : $" << value;
															amountWon = amountWon + value;
															cout << "\nYou have a total of : $" << amountWon;
															cout << "\n\n[Press Enter to Continue]";
															cin.ignore();

															system("CLS");

															qNum = 15;
															question = "What is statistically proven to be the most fun course in the Canadian Highschool Curriculum?";
															a = "SPH 4U";
															b = "SCH 4U";
															c = "HRE 4M";
															d = "ICS 4U";

															value = 500000;

															cout << "Value : " << value << "\n\n";
															cout << "\n\n\nQuestion #" << qNum << " : \n\n";
															cout << question << "\n";
															cout << "a) " << a << "\t\t\t";
															cout << "b) " << b << "\n";
															cout << "c) " << c << "\t\t\t";
															cout << "d) " << d << "\n\n";
															getline(cin, ans, '\n');

															if (ans == "quit")
															{
																system("CLS");
																cout << "\nYou have quit!\n\n";
																cout << "You have won: $" << amountWon;
															}
															else if (ans == "a" || ans == "b" || ans == "c")
															{
																system("CLS");
																cout << "Wrong Answer!\n\n";
																cout << "You didn't win anything.";
															}
															else if (ans != "d")
															{
																system("CLS");
																cout << "\n\tINVALID ANSWER!!!\n";
																cout << "\n\tStart Again!";
															}
															else if (ans == "d")
															{
																system("CLS");
																cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ";
																Sleep(500);
																cout << "C ";
																Sleep(500);
																cout << "O ";
																Sleep(500);
																cout << "R ";
																Sleep(500);
																cout << "R ";
																Sleep(500);
																cout << "E ";
																Sleep(500);
																cout << "C ";
																Sleep(500);
																cout << "T ";
																cout << "\n\n\t\t\t\t\t\t";
																Sleep(500);
																cout << " A ";
																Sleep(500);
																cout << "N ";
																Sleep(500);
																cout << "S ";
																Sleep(500);
																cout << "W ";
																Sleep(500);
																cout << "E ";
																Sleep(500);
																cout << "R ";
																Sleep(500);
																cout << "! ";
																
																Sleep(3000);

																system("CLS");

																cout << "\nYou just won : $" << value;
																amountWon = amountWon + value;
																cout << "\n\n\nYou have a total of : ";
																Sleep(500);
																cout << "\n\t\t1   ";
																Sleep(500);
																cout << "M ";
																Sleep(500);
																cout << "I ";
																Sleep(500);
																cout << "L ";
																Sleep(500);
																cout << "L ";
																Sleep(500);
																cout << "I ";
																Sleep(500);
																cout << "O ";
																Sleep(500);
																cout << "N ";
																Sleep(500);
																cout << "! ";
																Sleep(500);
																cout << "! ";
																Sleep(500);
																cout << "! ";

																cout << "\n\n\n\n\[Press Enter to Continue]";
																cin.ignore();

																system("CLS");
																cout << "\n\n\n\n\t\t\t\t\t\tTHANKS FOR PLAYING!!!";

															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cin.clear();
	cin.ignore(32767, '\n');

	return 0;
}
