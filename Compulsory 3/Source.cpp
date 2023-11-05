#include <iostream>
#include "class.h"
using namespace std;

int main()
{
	int largest;
	int testy;
	int choice;
	int folderchoice;
	int answer;
	std::string newname;
	Folder folder[6];
	File files[10];
	bool t;
	t = true;
	folder[0].setName("Main Folder");

	do
	{
		std::cout << "open\n";
		std::cout << "Folder Name: " << folder[0].getName() << ", Date: " << folder[0].getdate() << ", Size: " << folder[0].getSize() << "MB" << std::endl;
		std::cout << "What operation would you like to use?\n";
		std::cout << "1:change name\n";
		std::cout << "2:Open Folder\n";
		std::cout << "Choice: ";
		std::cin >> answer;
		switch (answer)
		{
		case 1:
			std::cout << "New name:";
			std::cin >> newname;
			folder[0].setName(newname);

			break;
		case 2:
			do
			{
				std::cout << "Opening " << folder[0].getName() << std::endl;


				std::cout << "Folder Name1: " << folder[1].getName() << ", Date: " << folder[1].getdate() << ", Size: " << folder[1].getSize() << "MB" << std::endl;
				std::cout << "Folder Name2: " << folder[2].getName() << ", Date: " << folder[2].getdate() << ", Size: " << folder[2].getSize() << "MB" << std::endl;
				std::cout << "Folder Name3: " << folder[3].getName() << ", Date: " << folder[3].getdate() << ", Size: " << folder[3].getSize() << "MB" << std::endl;
				std::cout << "Folder Name4: " << folder[4].getName() << ", Date: " << folder[4].getdate() << ", Size: " << folder[4].getSize() << "MB" << std::endl;
				std::cout << "Folder Name5: " << folder[5].getName() << ", Date: " << folder[5].getdate() << ", Size: " << folder[5].getSize() << "MB" << std::endl;
				std::cout << "Change Folder name (write the number of which folder you want to change name)" << std::endl;
				std::cout << "Open folder press 6" << std::endl;

				std::cin >> choice;
				switch (choice)
				{
				case 1:
					std::cout << "New name:";
					std::cin >> newname;
					folder[1].setName(newname);
					break;
				case 2:
					std::cout << "New name:";
					std::cin >> newname;
					folder[2].setName(newname);
					break;
				case 3:
					std::cout << "New name:";
					std::cin >> newname;
					folder[3].setName(newname);
					break;
				case 4:
					std::cout << "New name:";
					std::cin >> newname;
					folder[4].setName(newname);
					break;
				case 5:
					std::cout << "New name:";
					std::cin >> newname;
					folder[5].setName(newname);
					break;

				case 6:
					std::cout << "what folder would you like to open?";
					std::cin >> folderchoice;
					switch (folderchoice)
					{

					case 1:
						std::cout << "Opening " << folder[1].getName() << endl;
						std::cout << "File Name 1: " << files[0].getName() << endl;
						std::cout << "File Name 2: " << files[1].getName() << endl;
						std::cout << "File Name 3: " << files[2].getName() << endl;
						std::cout << "File Name 4: " << files[3].getName() << endl;
						std::cout << "File Name 5: " << files[4].getName() << endl;
						std::cout << "File Name 6: " << files[5].getName() << endl;
						std::cout << "File Name 7: " << files[6].getName() << endl;
						std::cout << "File Name 8: " << files[7].getName() << endl;
						std::cout << "File Name 9: " << files[8].getName() << endl;
						std::cout << "File Name 10: " << files[9].getName() << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[0].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[1].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[2].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[3].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[4].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[5].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[6].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[7].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[8].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[9].setName(newname);
							break;

						case 11:

							std::cout << "Largest file is: ";
							return 0;
							break;

						default:
							break;
						}
						break;

					case 2:
						std::cout << "Opening " << folder[2].getName() << endl;
						std::cout << "File Name 1: " << files[0].getName() << endl;
						std::cout << "File Name 2: " << files[1].getName() << endl;
						std::cout << "File Name 3: " << files[2].getName() << endl;
						std::cout << "File Name 4: " << files[3].getName() << endl;
						std::cout << "File Name 5: " << files[4].getName() << endl;
						std::cout << "File Name 6: " << files[5].getName() << endl;
						std::cout << "File Name 7: " << files[6].getName() << endl;
						std::cout << "File Name 8: " << files[7].getName() << endl;
						std::cout << "File Name 9: " << files[8].getName() << endl;
						std::cout << "File Name 10: " << files[9].getName() << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[0].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[1].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[2].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[3].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[4].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[5].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[6].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[7].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[8].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[9].setName(newname);
							break;

						case 11:

							std::cout << "Largest file is: ";
							return 0;
							break;

						default:
							break;
						}
						break;
					case 3:
						std::cout << "Opening " << folder[3].getName() << endl;
						std::cout << "File Name 1: " << files[0].getName() << endl;
						std::cout << "File Name 2: " << files[1].getName() << endl;
						std::cout << "File Name 3: " << files[2].getName() << endl;
						std::cout << "File Name 4: " << files[3].getName() << endl;
						std::cout << "File Name 5: " << files[4].getName() << endl;
						std::cout << "File Name 6: " << files[5].getName() << endl;
						std::cout << "File Name 7: " << files[6].getName() << endl;
						std::cout << "File Name 8: " << files[7].getName() << endl;
						std::cout << "File Name 9: " << files[8].getName() << endl;
						std::cout << "File Name 10: " << files[9].getName() << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[0].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[1].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[2].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[3].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[4].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[5].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[6].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[7].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[8].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[9].setName(newname);
							break;

						case 11:

							std::cout << "Largest file is: ";
							return 0;
							break;

						default:
							break;
						}
						break;

					case 4:
						std::cout << "Opening " << folder[4].getName() << endl;
						std::cout << "File Name 1: " << files[0].getName() << endl;
						std::cout << "File Name 2: " << files[1].getName() << endl;
						std::cout << "File Name 3: " << files[2].getName() << endl;
						std::cout << "File Name 4: " << files[3].getName() << endl;
						std::cout << "File Name 5: " << files[4].getName() << endl;
						std::cout << "File Name 6: " << files[5].getName() << endl;
						std::cout << "File Name 7: " << files[6].getName() << endl;
						std::cout << "File Name 8: " << files[7].getName() << endl;
						std::cout << "File Name 9: " << files[8].getName() << endl;
						std::cout << "File Name 10: " << files[9].getName() << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[0].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[1].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[2].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[3].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[4].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[5].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[6].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[7].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[8].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[9].setName(newname);
							break;

						case 11:

							std::cout << "Largest file is: ";
							return 0;
							break;

						default:
							break;
						}
						break;

					case 5:
						std::cout << "Opening " << folder[5].getName() << endl;
						std::cout << "File Name 1: " << files[0].getName() << endl;
						std::cout << "File Name 2: " << files[1].getName() << endl;
						std::cout << "File Name 3: " << files[2].getName() << endl;
						std::cout << "File Name 4: " << files[3].getName() << endl;
						std::cout << "File Name 5: " << files[4].getName() << endl;
						std::cout << "File Name 6: " << files[5].getName() << endl;
						std::cout << "File Name 7: " << files[6].getName() << endl;
						std::cout << "File Name 8: " << files[7].getName() << endl;
						std::cout << "File Name 9: " << files[8].getName() << endl;
						std::cout << "File Name 10: " << files[9].getName() << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[0].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[1].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[2].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[3].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[4].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[5].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[6].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[7].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[8].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[9].setName(newname);
							break;

						case 11:

							std::cout << "Largest file is: ";
							return 0;
							break;

						default:
							break;
						}
						break;


					default:
						break;
					}

				default:
					break;
				}

			} while (true);

			break;




		default:

			break;
		}


	} while (true);


}
