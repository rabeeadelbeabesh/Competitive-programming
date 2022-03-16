--hacker_id, name,  total number of challenges created by each student
--Sort  the total number of challenges in descending order.
--Sort the result by hacker_id. 
--If more than one student created the same number of challenges and the count is less
--than the maximum number of challenges created, then exclude those students from the result.
--Hackers  hacker_id is the id of the hacker, and name
-- Challenges  challenge_id is the id of the challenge, and hacker_id i
DECLARE @MAX_VALUE INT =(SELECT MAX(TEMP.TOTAL)
                        FROM (SELECT  H.hacker_id, COUNT(CH.challenge_id) AS TOTAL FROM Hackers H 
                        INNER JOIN  Challenges CH ON H.hacker_id=CH.hacker_id GROUP BY H.hacker_id)  TEMP);

SELECT HS.hacker_id, HS.name,COUNT(CHS.challenge_id) 
FROM Hackers HS  INNER JOIN   Challenges CHS ON HS.hacker_id=CHS.hacker_id GROUP BY HS.hacker_id, HS.name
HAVING 
    COUNT(CHS.challenge_id) =@MAX_VALUE
    OR 

    COUNT(CHS.challenge_id) IN(
         SELECT TEMP2.TOTAL FROM (
                SELECT  H.hacker_id, COUNT(CH.challenge_id) AS TOTAL
                FROM Hackers H INNER JOIN  Challenges CH ON H.hacker_id=CH.hacker_id GROUP BY H.hacker_id) TEMP2
                 GROUP BY TEMP2.TOTAL HAVING COUNT(TEMP2.TOTAL)=1
     )
     ORDER BY COUNT(CHS.challenge_id)  DESC ,hacker_id ASC 