select H.Hacker_id,H.name
 from Submissions s  inner join Challenges ch
  on ch.challenge_id=s.challenge_id
  inner join Difficulty d on d.difficulty_level =ch.difficulty_level
  inner join  Hackers H
  on H.Hacker_id=s.Hacker_id  
  where s.score=d.score and ch.difficulty_level = d.difficulty_level
     group by H.Hacker_id,H.name
 having count(H.Hacker_id)>1 order by  count(H.Hacker_id)desc ,H.Hacker_id asc