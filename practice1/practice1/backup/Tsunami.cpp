#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "Tsunami.h" 

// param filepath 읽어야하는 파일경로
// param num_event 사실은 output이고, 파일에서 쓰나미 이벤트가 몇 개 있는지 담을 정보
// return Tsunami* 동적으로 딱 맞는 갯수대로 할당된 쓰나미 배열
// anonymous namespace for any helper functions that you wish to implement

namespace 
{
	int GetLineCount(std::fstream& fs)
	{
		int lineCount = 0;
		while (fs)
		{
			std::string line;
			std::getline(fs, line);
			lineCount++;
		}

		fs.clear();
		fs.seekg(0, std::ios::beg);

		return lineCount - 1;
	}
}

namespace hlp2 {

	Tsunami* read_tsunami_data(char* filepath, int& num_events)
	{
		std::fstream fs(filepath);

		if (!fs.is_open())
		{
			std::cout << "file is not open." << std::endl;
			return nullptr;
		}

		num_events = GetLineCount(fs);

		Tsunami* tsunamis = new Tsunami[num_events];

		fs.clear();
		fs.seekg(0);

		for (int i = 0; i < num_events; ++i)
		{
			fs >> tsunamis[i].month >> tsunamis[i].day >> tsunamis[i].year >> tsunamis[i].fatalities >> tsunamis[i].Maximum_Wave_Height;
			std::getline(fs >> std::ws, tsunamis[i].Location);
			//std::getline(stream, string); , fs >> std::ws <<- 공백제거
		}

		return tsunamis;
	}

	void print_tsunami_data(Tsunami* tsunamis, int num_events, char argv[])
	{
		double max = 0;
		double average = 0;

		std::ofstream fout{"output.txt"};

		fout << "List of tsunamis:" << std::endl <<
			"-----------------" << std::endl;

		for (int i = 0; i < num_events; ++i)
		{
			fout << tsunamis[i].month << " "
				<< tsunamis[i].day << " "
				<< tsunamis[i].year << " "
				<< tsunamis[i].fatalities << " "
				<< tsunamis[i].Maximum_Wave_Height << " "
				<< tsunamis[i].Location << std::endl;
		}
		fout << std::fixed << std::setprecision(2);

		for (int i = 0; i < num_events; ++i)
		{
			if (tsunamis[i].Maximum_Wave_Height > max)
			{
				max = tsunamis[i].Maximum_Wave_Height;
			}
		}
		fout << std::endl;
		fout << "Maximum_Wave_Height: " << max << " " << std::endl << std::endl;

		for (int i = 0; i < num_events; ++i)
		{
			average += tsunamis[i].Maximum_Wave_Height;
		}
		fout << "Average wave height: " << average / num_events << " " << std::endl << std::endl;

		fout << "Tsunamis with greater than average height " << average / num_events << std::endl;
		for (int i = 0; i < num_events; ++i)
		{
			if (tsunamis[i].Maximum_Wave_Height > average / num_events)
				fout << tsunamis[i].Maximum_Wave_Height << " " << tsunamis[i].Location << std::endl;
		}
	}
}