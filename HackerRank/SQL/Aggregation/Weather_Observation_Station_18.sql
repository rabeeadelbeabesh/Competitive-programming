SELECT FORMAT(ROUND(
ABS((SELECT MIN(LAT_N ) FROM STATION)-(SELECT MAX(LAT_N ) FROM STATION)) +
    ABS((SELECT MIN(LONG_W) FROM STATION)-(SELECT MAX(LONG_W) FROM STATION)),4),'#.0000')