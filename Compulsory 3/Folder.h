#include <iostream>
using namespace std;

class Folder
{
private:

	int Folderdate = 24022023;
	string Foldername;
	int Foldersize;

	


public:
	Folder()
	{
	
	
	
	}


	Folder(string fname)
	{
		Foldername = fname;
		Foldersize = rand() % 100 + 1;

	}
	Folder(string fname, int fdate)
	{
		Foldername = fname;
		Folderdate = fdate;
	}
	Folder(string fname, int fdate, int fsize)
	{
		Foldername = fname;
		Folderdate = fdate;
		Foldersize = fsize;


	}

	void setName(string change)
	{
		Foldername = change;
	}



	string getName()
	{
		return Foldername;
	}


	int getdate()
	{
		return Folderdate;

	}

	int getSize()
	{
		return Foldersize;
	}



};

