#include <iostream>
namespace ad
{
constexpr int DEFAULT_VEHICLE_ID = -1;
constexpr int NUM_VEHICLES = 3;

enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(const Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle velocity [kph]: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

} // namespace ad

//*const <=> &const
//const& = Read-only
//const* const: Same as const&

int main()
{
    ad::Vehicle v1 = {1, 100.0, ad::Lane::CENTER_LANE};
    ad::Vehicle v2 = {2, 90.0, ad::Lane::RIGHT_LANE};
    ad::Vehicle v3 = {ad::DEFAULT_VEHICLE_ID, 130.0, ad::Lane::LEFT_LANE};


    ad::Vehicle vehicles_in_scene[ad::NUM_VEHICLES] = {v1, v2, v3};

    for (int i = 0; i < ad::NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles_in_scene[i]);
    }

    print_vehicle_data(v1);

    return 0;
}
