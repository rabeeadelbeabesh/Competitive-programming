--Projects columns: Task_ID, Start_Date and End_Date. 
SELECT  S.Start_Date ,MIN(D.End_Date) FROM  (

SELECT  Start_Date  FROM Projects WHERE Start_Date NOT IN 
		 (
			SELECT End_Date FROM Projects
		 ) 
	 )
	 
	 S,
	 (

        SELECT  End_Date  FROM Projects WHERE End_Date NOT IN 
		 (
			SELECT Start_Date  FROM Projects
		 ) 
	 ) D

	 WHERE S.Start_Date < D.End_Date
	 GROUP BY S.Start_Date
	 ORDER BY DATEDIFF(DAY, S.Start_Date , MIN(D.End_Date)) Asc , S.Start_Date



