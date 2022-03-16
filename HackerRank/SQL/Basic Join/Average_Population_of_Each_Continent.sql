SELECT C.Continent ,ROUND( AVG(CC.Population),0) FROM CITY cc inner join  COUNTRY C ON cc.COUNTRYCODE =C.CODE 
GROUP BY C.Continent