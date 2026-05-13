////////////////////////////////////////////////////////////////////////////////
#ifndef OCEAN_H
#define OCEAN_H
////////////////////////////////////////////////////////////////////////////////

namespace HLP2 {
  namespace WarBoats {
      class Ocean; //!< Forward declaration for the Ocean 
      int const HIT_OFFSET{ 100 };
      int const BOAT_LENGTH{ 4 };

    enum Orientation   { oHORIZONTAL, oVERTICAL };
    enum ShotResult    { srHIT, srMISS, srDUPLICATE, srSUNK, srILLEGAL };
    enum DamageType    { dtOK = 0, dtBLOWNUP = -1 };
    enum BoatPlacement { bpACCEPTED, bpREJECTED };

      //! A coordinate in the Ocean
    struct Point {
      int x; //!< x-coordinate (column)
      int y; //!< y-coordinate (row)
    };

      //! A boat in the Ocean
    struct Boat {
      int hits;                 //!< Hits taken so far
      int ID;                   //!< Unique ID 
      Orientation orientation;  //!< Horizontal/Vertical
      Point position;           //!< x-y coordinate (left-top)
    };

      //! Statistics of the "game"
    struct ShotStats {
      int hits;       //!< The number of boat hits
      int misses;     //!< The number of boat misses
      int duplicates; //!< The number of duplicate (misses/hits)
      int sunk;       //!< The number of boats sunk
    };

      // Provided
  } // namespace WarBoats

} // namespace HLP2

namespace HLP2 {
  namespace WarBoats {
      //! The attributes of the ocean
      class Ocean
      {
      public:
          //GetDimensions를 어떻게 추가? ocean.GetDimensions().x <<- point
          Ocean(int num_boats, int x_size, int y_size);
          int x_size;
          int y_size;
          int* grid;
          Boat* boats;
          int num_boats;
          ShotStats stats;
          int* GetGrid() const;
          BoatPlacement PlaceBoat(Boat const& boat);
          ShotStats GetShotStats()const;
          ShotResult TakeShot(Point const& pt);
          Point GetDimensions() const;

          ~Ocean();
      private:

      };



  } // namespace WarBoats
} // namespace HLP2


#endif // OCEAN_H
////////////////////////////////////////////////////////////////////////////////
