#pragma once
#include <iostream>


class Folder
{
private:
	int Folderdate = 24022023;
	std::string Foldername = "Folder";
	int Foldersize = rand() % 100 + 1;

public:


	void test(std::string fname, int fdate, int fsize)
	{
		Foldername = fname;
		Folderdate = fdate;
		Foldersize = fsize;



	}

	void print()
	{

		std::cout << "Folder Name: " << getName() << ", Date: " << getdate() << ", Size: " << getSize() << "MB" << std::endl;

	}
	void setName(std::string change)
	{
		Foldername = change;
	}



	std::string getName()
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


class File
{
private:

	int Filedate = 24022023;
	std::string Filename = "File";
	int Filesize = rand() % 100 + 1;

public:

	void test(std::string filname, int fildate, int filsize)
	{
		Filename = filname;
		Filedate = fildate;
		Filesize = filsize;



	}

	void print()
	{

		std::cout << "File Name: " << getName() << ", Date: " << getdate() << ", Size: " << getSize() << "MB" << std::endl;

	}
	void setName(std::string change)
	{
		Filename = change;
	}



	std::string getName()
	{
		return Filename;
	}


	int getdate()
	{
		return Filedate;

	}

	int getSize()
	{
		return Filesize;
	}
};



