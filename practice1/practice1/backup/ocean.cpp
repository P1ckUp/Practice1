#include "ocean.h"
#include <iostream> // std::cout
#include <iomanip>  // std::setw

namespace HLP2 {
  namespace WarBoats {
    int const BOAT_LENGTH {4};   //!< Length of a boat
    int const HIT_OFFSET  {100}; //!< Add this to the boat ID

    /*
     * ALL STUDENT IMPLEMENTATION GOES HERE 
    */

    /**************************************************************************/
    /*!
      \brief
        Prints the grid (ocean) to the screen.
      
      \param ocean
        The Ocean to print
      
      \param field_width
        How much space each position takes when printed.
      
      \param extraline
        If true, an extra line is printed after each row. If false, no extra
        line is printed.
        
      \param showboats
        If true, the boats are shown in the output. (Debugging feature)
    */
    /**************************************************************************/
    void DumpOcean(const HLP2::WarBoats::Ocean &ocean,
                                    int field_width, 
                                    bool extraline, 
                                    bool showboats) {
      for (int y = 0; y < ocean.y_size; y++) { // For each row
        for (int x = 0; x < ocean.x_size; x++) { // For each column
            // Get value at x/y position
          int value = ocean.grid[y * ocean.x_size + x];
            // Is it a boat that we need to keep hidden?
          value = ( (value > 0) && (value < HIT_OFFSET) && (showboats == false) ) ? 0 : value;
          std::cout << std::setw(field_width) << value;
        }
        std::cout << "\n";
        if (extraline) { std::cout << "\n"; }
      }


    }

    Ocean* CreateOcean(int num_boats, int x_size, int y_size)
    {
        Ocean* ocean = new Ocean;
        ocean->grid = new int[x_size * y_size] {};       //[] : <- 배열
        ocean -> num_boats = num_boats;
        ocean->stats = ShotStats{};
        ocean->x_size = x_size;
        ocean->y_size = y_size;
        ocean->boats = new Boat[num_boats]{};

        return ocean;
    }

    void DestroyOcean(Ocean* theOcean)
    {
        delete[] theOcean->boats;
        delete[] theOcean->grid;
        delete theOcean;
    }
//enum Orientation { oHORIZONTAL, oVERTICAL };
//enum ShotResult { srHIT, srMISS, srDUPLICATE, srSUNK, srILLEGAL };
//enum DamageType { dtOK = 0, dtBLOWNUP = -1 };
//enum BoatPlacement { bpACCEPTED, bpREJECTED };
    ShotResult TakeShot(Ocean& ocean, Point const& coordinate)
    {
        int x = coordinate.x;
        int y = coordinate.y;

        if (x < 0 || x >= ocean.x_size || y < 0 || y >= ocean.y_size)
        {
            return ShotResult{srILLEGAL};
        }

        int index = y * ocean.x_size + x;
        int value = ocean.grid[index];  //좌표값 읽

        if (value == DamageType::dtOK)
        {
            ocean.grid[index] = DamageType::dtBLOWNUP;
            ocean.stats.misses++;
            return ShotResult{srMISS};
        }

        else if (value == DamageType::dtBLOWNUP || value >= HIT_OFFSET)
        {
            ocean.stats.duplicates++;
            return ShotResult(srDUPLICATE);
        }

        else
        {
            ocean.grid[index] += HIT_OFFSET;
            ocean.stats.hits++;
            
            int boatID = value;

            bool IsAlive = false;

            for (int i = 0; i < ocean.x_size * ocean.y_size; ++i)
            {
                if (ocean.grid[i] == boatID)
                {
                    IsAlive = true;
                }
            }
            if (!IsAlive)
            {
                ocean.stats.sunk++;
                return srSUNK;
            }
            return ShotResult(srHIT);
        }


        return ShotResult{};
    }

    BoatPlacement PlaceBoat(Ocean& ocean, Boat const& boat)
    {
        //배검사. 정상적이면 inject, 불가능한 위치면 reject
        if (boat.orientation == oHORIZONTAL)
        {
            if (boat.position.x + BOAT_LENGTH > ocean.x_size)
            {
                return bpREJECTED;
            }

            for (int i = 0; i < BOAT_LENGTH; ++i)
            {
                int x = boat.position.x + i;
                int y = boat.position.y;
                int index = y * ocean.x_size + x;

                if (ocean.grid[index] != DamageType::dtOK)
                {
                    return bpREJECTED;
                }
            }

            for (int i = 0; i < BOAT_LENGTH; ++i)
            {
                int x = boat.position.x + i;
                int y = boat.position.y;
                int index = y * ocean.x_size + x;

                ocean.grid[index] = boat.ID;
            }
        } 

        if (boat.orientation == oVERTICAL)
        {
            if (boat.position.y + BOAT_LENGTH > ocean.y_size)
            {
                return bpREJECTED;
            }
            for (int i = 0; i < BOAT_LENGTH; ++i)
            {
                int x = boat.position.x;
                int y = boat.position.y + i;
                int index = y * ocean.x_size + x;

                if (ocean.grid[index] != DamageType::dtOK)
                {
                    return bpREJECTED;
                }
            }

            for (int i = 0; i < BOAT_LENGTH; ++i)
            {
                int x = boat.position.x;
                int y = boat.position.y + i;
                int index = y * ocean.x_size + x;

                ocean.grid[index] = boat.ID;
            }
        }
        return bpACCEPTED;     
    }

    ShotStats GetShotStats(Ocean const& ocean)
    {
        return ocean.stats;
    }




  } // namespace WarBoats
} // namespace HLP2

