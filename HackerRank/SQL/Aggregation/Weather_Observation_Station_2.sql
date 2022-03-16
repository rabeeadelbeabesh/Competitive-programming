declare @ans1 float =(select sum(LAT_N) from station)
declare @ans2 float =(select sum(LONG_W) from station)

select format(round(@ans1,2),'#.00'),format(round(@ans2,2),'#.00') 