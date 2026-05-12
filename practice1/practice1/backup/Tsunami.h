#pragma once 

#include <string>

namespace hlp2 {

    struct Tsunami {
        // declare data members ...
        int month;
        int day;
        int year;
        int fatalities;
        double Maximum_Wave_Height;
        std::string Location;
    };

    // declaration of interface functions ...

    Tsunami* read_tsunami_data(char* filepath, int& num_events);
    
    void print_tsunami_data(Tsunami* , int num_events, char argv[]);

} // end namespace hlp2
