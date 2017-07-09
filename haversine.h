#ifndef _HAVERSINE_H_
#define _HAVERSINE_H_

#define EARTH_RADIUS_KM 6371.0

#define EARTH_RADIUS_M (EARTH_RADIUS_KM * 1000)

#define EARTH_RADIUS_CM (EARTH_RADIUS_M * 100)

double haversine_distance (double latSrc, double lngSrc, double latDst, double lngDst, double sphereRadius);

double haversine_distance_in_earth_cm (double latSrc, double lngSrc, double latDst, double lngDst);

double haversine_distance_in_earth_m  (double latSrc, double lngSrc, double latDst, double lngDst);

double haversine_distance_in_earth_km (double latSrc, double lngSrc, double latDst, double lngDst);

#endif
