#include <stdio.h>
#include "../haversine.h"

typedef struct {
    double altitude;
    double latitude;
    double longitude;
} Point_t;

const Point_t GaragemIARA   = {0.0, -20.2738433, -40.3061088};
const Point_t CantinaOnofre = {0.0, -20.2748146, -40.3037323};

int main (int argc, char *argv[])
{

    double distance = haversine_distance (GaragemIARA.latitude  , GaragemIARA.longitude  ,
                                          CantinaOnofre.latitude, CantinaOnofre.longitude,
                                          EARTH_RADIUS_M);

    printf("Distance = [%lf]\n", distance);
    
    return 0;
}
