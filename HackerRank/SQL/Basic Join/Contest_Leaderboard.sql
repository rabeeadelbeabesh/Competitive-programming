SELECT  H.hacker_id, H.name, S.total
FROM  Hackers H INNER JOIN
    (
        select  t.hacker_id ,sum(t.max_scor)as total from 
            (
                SELECT hacker_id , MAX(score) as max_scor 
                FROM Submissions GROUP BY challenge_id , hacker_id 
            
              ) as t
 GROUP BY t.hacker_id
  ) as S
ON H.hacker_id =S.hacker_id 
where S.total<>0
ORDER BY  S.total DESC ,H.hacker_id ASC ;
