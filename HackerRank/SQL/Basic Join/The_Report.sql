(SELECT S.NAME AS N,G.GRADE AS R ,S.MARKS  AS M FROM Students S INNER JOIN Grades G ON S.MARKS BETWEEN MIN_MARK AND MAX_MARK 
WHERE G.GRADE>7  )  
UNION
(SELECT 'NULL',G.GRADE AS R ,S.MARKS FROM Students S INNER JOIN Grades G ON S.MARKS BETWEEN MIN_MARK AND MAX_MARK 
WHERE G.GRADE<=7 )   ORDER BY R DESC ,N ASC ,M ASC