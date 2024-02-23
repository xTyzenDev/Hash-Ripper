#include <iostream>
#include <cstring>
#include <thread>
#include <chrono>
#include <cstdlib>

std::string chemin_acces = "";
std::string chemin_wordlist = "";
std::string chemin_hashcat = "";


int configuration()
{
	std::system("cls");
	std::cout << "Configuration...";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::system("cls");
	std::cout << "Please enter the directory of the file hash : ";
	std::cin >> chemin_acces;
	std::cout << "\n";
	std::cout << "Please enter the directory of the wordlists : ";
	std::cin >> chemin_wordlist;
	std::cout << "\n";
	std::cout << "Please enter the directory of the hashcat : ";
	std::cin >> chemin_hashcat;
	return 0;
}


int WinZip()
{
	int choose = 0;
	std::cout << "Do you want use the graphics card for cracking the hash ? [!] Cuda required [!] [/] No need for an AMD card [/] (y/n) : ";
	std::cin >> choose;

	if (choose == 'y')
	{
		std::cout << "Graphics Card Starts Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command = chemin_hashcat + " -a 0 -m 13600 " + chemin_acces + chemin_wordlist + " -d 0";
		std::system(command.c_str());

	}
	else
	{
		std::cout << "Starting Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command2 = chemin_hashcat + " -a 0 -m 13600 " + chemin_acces + chemin_wordlist;
		std::system(command2.c_str());
	}

	return 0;
}

int ZipSept()
{
	int choose = 0;
	std::cout << "Do you want use the graphics card for cracking the hash ? [!] Cuda required [!] [/] No need for an AMD card [/] (y/n) : ";
	std::cin >> choose;

	if (choose == 'y')
	{
		std::cout << "Graphics Card Starts Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command = chemin_hashcat + " -a 0 -m 11600 " + chemin_acces + chemin_wordlist + " -d 1";
		std::system(command.c_str());

	}
	else
	{
		std::cout << "Starting Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command2 = chemin_hashcat + " -a 0 -m 11600 " + chemin_acces + chemin_wordlist;
		std::system(command2.c_str());
	}

	return 0;
}

int RAR()
{
	int choose = 0;
	std::cout << "Do you want use the graphics card for cracking the hash ? [!] Cuda required [!] [/] No need for an AMD card [/] (y/n) : ";
	std::cin >> choose;

	if (choose == 'y')
	{
		std::cout << "Graphics Card Starts Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command = chemin_hashcat + " -a 0 -m 13000 " + chemin_acces + chemin_wordlist + " -d 1";
		std::system(command.c_str());

	}
	else
	{
		std::cout << "Starting Hash Cracking...";
		std::cout << "\n";
		std::cout << "Careful! Temperature can be increased up to 90°C !";
		std::cout << "\n";
		std::string command2 = chemin_hashcat + " -a 0 -m 13000 " + chemin_acces + chemin_wordlist;
		std::system(command2.c_str());
	}

	return 0;
}


int main()
{

	configuration();
	std::system("cls");

	int chooseoptions = 0;

	std::cout << "    __  __           __          ____  _                      \n";
	std::cout << "   / / / /___ ______/ /_        / __ \\(_)___  ____  ___  _____\n";
	std::cout << "  / /_/ / __ `/ ___/ __ \\______/ /_/ / / __ \\/ __ \\/ _ \\/ ___/\n";
	std::cout << " / __  / /_/ (__  ) / / /_____/ _, _/ / /_/ / /_/ /  __/ /    \n";
	std::cout << "/_/ /_/\\__,_/____/_/ /_/     /_/ |_|/_/ .___/ .___/\\___/_/     \n";
	std::cout << "                                    /_/   /_/                 \n";
	std::cout << "\n";
	std::cout << "\nPlease choose a option";
	std::cout << "\n";
	std::cout << "\nPlease choose an option based on what the hash presents";
	std::cout << "\n";
	std::cout << "\n1. Zip";
	std::cout << "\n2. 7-Zip";
	std::cout << "\n3. Rar5";
	std::cout << "\n==> ";
	std::cin >> chooseoptions;
	std::system("cls");
	std::cout << "    __  __           __          ____  _                      \n";
	std::cout << "   / / / /___ ______/ /_        / __ \\(_)___  ____  ___  _____\n";
	std::cout << "  / /_/ / __ `/ ___/ __ \\______/ /_/ / / __ \\/ __ \\/ _ \\/ ___/\n";
	std::cout << " / __  / /_/ (__  ) / / /_____/ _, _/ / /_/ / /_/ /  __/ /    \n";
	std::cout << "/_/ /_/\\__,_/____/_/ /_/     /_/ |_|/_/ .___/ .___/\\___/_/     \n";
	std::cout << "                                    /_/   /_/                 \n";
	std::cout << "\n";


	if (chooseoptions == 1)
	{
		WinZip();
	}
	else if (chooseoptions == 2)
	{
		ZipSept();
	}
	else if (chooseoptions == 3)
	{
		RAR();
	}

	return 0;
	std::cin.ignore();
}