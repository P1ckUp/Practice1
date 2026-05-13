#include "ocean.h"
#include <iostream> // std::cout
#include <iomanip>  // std::setw

namespace HLP2 {
  namespace WarBoats {

      Point Ocean::GetDimensions() const
      {
          return Point{};
      }

    ShotResult Ocean::TakeShot(Point const& pt)
    {

        return ShotResult{};
    }

    BoatPlacement Ocean::PlaceBoat(Boat const& boat)
    {
        return bpACCEPTED;     
    }

    ShotStats Ocean::GetShotStats()const
    {
        return stats;
    }

    int* Ocean::GetGrid() const
    {
        return grid;
    }

    Ocean::Ocean(int num_boats, int x_size, int y_size)
        : num_boats(num_boats),
        x_size(x_size),
        y_size(y_size)
    {
        grid = new int[x_size * y_size];
        boats = new Boat[num_boats];


        stats.hits = 0;
        stats.misses = 0;
        stats.duplicates = 0;
        stats.sunk = 0;
    };

    Ocean::~Ocean()
    {
        delete[] grid;
        delete[] boats;
    }



  } // namespace WarBoats
} // namespace HLP2

