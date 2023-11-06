#include <iostream>
#include "class.h"
using namespace std;

int main()
{
	int LargestFile = 0;
	int numberoffiles = 10;
	std::string nameLargest;
	int testy;
	int choice;
	int folderchoice;
	int answer;
	std::string newname;
	Folder folder[6];
	File files[49];
	bool menu;
	menu = true;
	folder[0].setName("Main Folder");

	while(menu)
	{
		std::cout << "open\n";
		std::cout << "Folder Name: " << folder[0].getName() << ", Date: " << folder[0].getdate() << ", Size: " << folder[0].getSize() << "MB" << std::endl;
		std::cout << "What operation would you like to use?\n";
		std::cout << "1:change name\n";
		std::cout << "2:Open Folder\n";
		std::cout << "3: End program\n";
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
				std::cout << "Choice: ";

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
						std::cout << "File Name 1: " << files[0].getName() << ", Date: " << files[0].getdate() << ", Size: " << files[0].getSize() << "MB" << endl;
						std::cout << "File Name 2: " << files[1].getName() << ", Date: " << files[1].getdate() << ", Size: " << files[1].getSize() << "MB" << endl;
						std::cout << "File Name 3: " << files[2].getName() << ", Date: " << files[2].getdate() << ", Size: " << files[2].getSize() << "MB" << endl;
						std::cout << "File Name 4: " << files[3].getName() << ", Date: " << files[3].getdate() << ", Size: " << files[3].getSize() << "MB" << endl;
						std::cout << "File Name 5: " << files[4].getName() << ", Date: " << files[4].getdate() << ", Size: " << files[4].getSize() << "MB" << endl;
						std::cout << "File Name 6: " << files[5].getName() << ", Date: " << files[5].getdate() << ", Size: " << files[5].getSize() << "MB" << endl;
						std::cout << "File Name 7: " << files[6].getName() << ", Date: " << files[6].getdate() << ", Size: " << files[6].getSize() << "MB" << endl;
						std::cout << "File Name 8: " << files[7].getName() << ", Date: " << files[7].getdate() << ", Size: " << files[7].getSize() << "MB" << endl;
						std::cout << "File Name 9: " << files[8].getName() << ", Date: " << files[8].getdate() << ", Size: " << files[8].getSize() << "MB" << endl;
						std::cout << "File Name 10: " << files[9].getName() << ", Date: " << files[9].getdate() << ", Size: " << files[9].getSize() << "MB" << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cout << "Choice:";
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
							for (int z = 0; z < 20; z++) {
								if (LargestFile < files[z].getSize()) {
									nameLargest = files[z].getName();
									LargestFile = files[z].getSize();
								}
							}

							std::cout << "Largest file: " << nameLargest << " has " << LargestFile << " MB\n";

							return 0;
							break;

						default:
							break;
						}
						break;

					case 2:
						std::cout << "Opening " << folder[2].getName() << endl;
						std::cout << "File Name 1: " << files[10].getName() << ", Date: " << files[0].getdate() << ", Size: " << files[0].getSize() << "MB" << endl;
						std::cout << "File Name 2: " << files[11].getName() << ", Date: " << files[1].getdate() << ", Size: " << files[1].getSize() << "MB" << endl;
						std::cout << "File Name 3: " << files[12].getName() << ", Date: " << files[2].getdate() << ", Size: " << files[2].getSize() << "MB" << endl;
						std::cout << "File Name 4: " << files[13].getName() << ", Date: " << files[3].getdate() << ", Size: " << files[3].getSize() << "MB" << endl;
						std::cout << "File Name 5: " << files[14].getName() << ", Date: " << files[4].getdate() << ", Size: " << files[4].getSize() << "MB" << endl;
						std::cout << "File Name 6: " << files[15].getName() << ", Date: " << files[5].getdate() << ", Size: " << files[5].getSize() << "MB" << endl;
						std::cout << "File Name 7: " << files[16].getName() << ", Date: " << files[6].getdate() << ", Size: " << files[6].getSize() << "MB" << endl;
						std::cout << "File Name 8: " << files[17].getName() << ", Date: " << files[7].getdate() << ", Size: " << files[7].getSize() << "MB" << endl;
						std::cout << "File Name 9: " << files[18].getName() << ", Date: " << files[8].getdate() << ", Size: " << files[8].getSize() << "MB" << endl;
						std::cout << "File Name 10: " << files[19].getName() << ", Date: " << files[9].getdate() << ", Size: " << files[9].getSize() << "MB" << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cout << "Choice:";
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[10].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[11].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[12].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[13].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[14].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[15].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[16].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[17].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[18].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[19].setName(newname);
							break;

						case 11:
							for (int z = 0; z < 20; z++) 
							{
								if (LargestFile < files[z].getSize()) {
									nameLargest = files[z].getName();
									LargestFile = files[z].getSize();
								}
							}

							std::cout << "Largest file: " << nameLargest << " has " << LargestFile << " MB\n";

							return 0;
							break;

						default:
							std::cout << "Sorry didn't understand.\n";
							break;
						}
						break;
					case 3:
						std::cout << "Opening " << folder[3].getName() << endl;
						std::cout << "File Name 1: " << files[20].getName() << ", Date: " << files[0].getdate() << ", Size: " << files[0].getSize() << "MB" << endl;
						std::cout << "File Name 2: " << files[21].getName() << ", Date: " << files[1].getdate() << ", Size: " << files[1].getSize() << "MB" << endl;
						std::cout << "File Name 3: " << files[22].getName() << ", Date: " << files[2].getdate() << ", Size: " << files[2].getSize() << "MB" << endl;
						std::cout << "File Name 4: " << files[23].getName() << ", Date: " << files[3].getdate() << ", Size: " << files[3].getSize() << "MB" << endl;
						std::cout << "File Name 5: " << files[24].getName() << ", Date: " << files[4].getdate() << ", Size: " << files[4].getSize() << "MB" << endl;
						std::cout << "File Name 6: " << files[25].getName() << ", Date: " << files[5].getdate() << ", Size: " << files[5].getSize() << "MB" << endl;
						std::cout << "File Name 7: " << files[26].getName() << ", Date: " << files[6].getdate() << ", Size: " << files[6].getSize() << "MB" << endl;
						std::cout << "File Name 8: " << files[27].getName() << ", Date: " << files[7].getdate() << ", Size: " << files[7].getSize() << "MB" << endl;
						std::cout << "File Name 9: " << files[28].getName() << ", Date: " << files[8].getdate() << ", Size: " << files[8].getSize() << "MB" << endl;
						std::cout << "File Name 10: " << files[29].getName() << ", Date: " << files[9].getdate() << ", Size: " << files[9].getSize() << "MB" << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cout << "Choice:";
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[20].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[21].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[22].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[23].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[24].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[25].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[26].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[27].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[28].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[29].setName(newname);
							break;


						case 11:

							for (int z = 0; z < 20; z++)
							{
								if (LargestFile < files[z].getSize()) 
								{
									nameLargest = files[z].getName();
									LargestFile = files[z].getSize();
								}
							}

							std::cout << "Largest file: " << nameLargest << " has " << LargestFile << " MB\n";

							return 0;
							break;

						default:
							std::cout << "Sorry didn't understand.\n";
							break;
						}
						break;

					case 4:
						std::cout << "Opening " << folder[4].getName() << endl;
						std::cout << "File Name 1: " << files[30].getName() << ", Date: " << files[0].getdate() << ", Size: " << files[0].getSize() << "MB" << endl;
						std::cout << "File Name 2: " << files[31].getName() << ", Date: " << files[1].getdate() << ", Size: " << files[1].getSize() << "MB" << endl;
						std::cout << "File Name 3: " << files[32].getName() << ", Date: " << files[2].getdate() << ", Size: " << files[2].getSize() << "MB" << endl;
						std::cout << "File Name 4: " << files[33].getName() << ", Date: " << files[3].getdate() << ", Size: " << files[3].getSize() << "MB" << endl;
						std::cout << "File Name 5: " << files[34].getName() << ", Date: " << files[4].getdate() << ", Size: " << files[4].getSize() << "MB" << endl;
						std::cout << "File Name 6: " << files[35].getName() << ", Date: " << files[5].getdate() << ", Size: " << files[5].getSize() << "MB" << endl;
						std::cout << "File Name 7: " << files[36].getName() << ", Date: " << files[6].getdate() << ", Size: " << files[6].getSize() << "MB" << endl;
						std::cout << "File Name 8: " << files[37].getName() << ", Date: " << files[7].getdate() << ", Size: " << files[7].getSize() << "MB" << endl;
						std::cout << "File Name 9: " << files[38].getName() << ", Date: " << files[8].getdate() << ", Size: " << files[8].getSize() << "MB" << endl;
						std::cout << "File Name 10: " << files[39].getName() << ", Date: " << files[9].getdate() << ", Size: " << files[9].getSize() << "MB" << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cout << "Choice:";
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[30].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[31].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[32].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[33].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[34].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[35].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[36].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[37].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[38].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[39].setName(newname);
							break;

						case 11:

							for (int z = 0; z < 20; z++) 
							{
								if (LargestFile < files[z].getSize())
								{
									nameLargest = files[z].getName();
									LargestFile = files[z].getSize();
								}
							}

							std::cout << "Largest file: " << nameLargest << " has " << LargestFile << " MB\n";

							return 0;
							break;

						default:
							break;
						}
						break;

					case 5:
						std::cout << "Opening " << folder[5].getName() << endl;
						std::cout << "File Name 1: " << files[40].getName() << ", Date: " << files[0].getdate() << ", Size: " << files[0].getSize() << "MB" << endl;
						std::cout << "File Name 2: " << files[41].getName() << ", Date: " << files[1].getdate() << ", Size: " << files[1].getSize() << "MB" << endl;
						std::cout << "File Name 3: " << files[42].getName() << ", Date: " << files[2].getdate() << ", Size: " << files[2].getSize() << "MB" << endl;
						std::cout << "File Name 4: " << files[43].getName() << ", Date: " << files[3].getdate() << ", Size: " << files[3].getSize() << "MB" << endl;
						std::cout << "File Name 5: " << files[44].getName() << ", Date: " << files[4].getdate() << ", Size: " << files[4].getSize() << "MB" << endl;
						std::cout << "File Name 6: " << files[45].getName() << ", Date: " << files[5].getdate() << ", Size: " << files[5].getSize() << "MB" << endl;
						std::cout << "File Name 7: " << files[46].getName() << ", Date: " << files[6].getdate() << ", Size: " << files[6].getSize() << "MB" << endl;
						std::cout << "File Name 8: " << files[47].getName() << ", Date: " << files[7].getdate() << ", Size: " << files[7].getSize() << "MB" << endl;
						std::cout << "File Name 9: " << files[48].getName() << ", Date: " << files[8].getdate() << ", Size: " << files[8].getSize() << "MB" << endl;
						std::cout << "File Name 10: " << files[49].getName() << ", Date: " << files[9].getdate() << ", Size: " << files[9].getSize() << "MB" << endl;
						std::cout << "Change name (select the number of which folder you would like to change the name)" << endl;
						std::cout << "Print out the largest file press 11" << endl;
						std::cout << "Choice:";
						std::cin >> testy;
						switch (testy)
						{
						case 1:
							cout << "New name:";
							std::cin >> newname;
							files[40].setName(newname);
							break;

						case 2:
							cout << "New name:";
							std::cin >> newname;
							files[41].setName(newname);
							break;

						case 3:
							cout << "New name:";
							std::cin >> newname;
							files[42].setName(newname);
							break;

						case 4:
							cout << "New name:";
							std::cin >> newname;
							files[43].setName(newname);
							break;

						case 5:
							cout << "New name:";
							std::cin >> newname;
							files[44].setName(newname);
							break;
						case 6:
							cout << "New name:";
							std::cin >> newname;
							files[45].setName(newname);
							break;

						case 7:
							cout << "New name:";
							std::cin >> newname;
							files[46].setName(newname);
							break;

						case 8:
							cout << "New name:";
							std::cin >> newname;
							files[47].setName(newname);
							break;

						case 9:
							cout << "New name:";
							std::cin >> newname;
							files[48].setName(newname);
							break;

						case 10:
							cout << "New name:";
							std::cin >> newname;
							files[49].setName(newname);
							break;

						case 11:
							for (int z = 0; z < 20; z++)
							{
								if (LargestFile < files[z].getSize())
								{
									nameLargest = files[z].getName();
									LargestFile = files[z].getSize();
								}
							}

							std::cout << "Largest file: " << nameLargest << " has " << LargestFile << " MB\n";

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


			case 3:
				std::cout << "end program";
				return 0;
				break;

		default:
			std::cout << "Sorry didn't understand.\n";

			break;
		}


	}


}
