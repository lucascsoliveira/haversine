#include <stdio.h>
#include <math.h>
#include "haversine.h"

double deg2Rad(double degrees)
{
    return degrees * (M_PI / 180.0);
}

double haversine_distance (double latSrc, double lngSrc, double latDst, double lngDst, double sphereRadius)
{	
    double dlng = deg2Rad(lngDst - lngSrc);
    double dlat = deg2Rad(latDst - latSrc);

    double a = pow(sin(dlat/2.0), 2) + cos(deg2Rad(latSrc)) * cos(deg2Rad(latDst)) * pow(sin(dlng/2.0), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    double d = sphereRadius * c;

    return d;
}

double haversine_distance_in_earth_cm (double latSrc, double lngSrc, double latDst, double lngDst)
{
    return haversine_distance(latSrc, lngSrc, latDst, lngDst, EARTH_RADIUS_CM);
}

double haversine_distance_in_earth_m  (double latSrc, double lngSrc, double latDst, double lngDst)
{
    return haversine_distance(latSrc, lngSrc, latDst, lngDst, EARTH_RADIUS_M);
}

double haversine_distance_in_earth_km (double latSrc, double lngSrc, double latDst, double lngDst)
{
    return haversine_distance(latSrc, lngSrc, latDst, lngDst, EARTH_RADIUS_KM);
}

