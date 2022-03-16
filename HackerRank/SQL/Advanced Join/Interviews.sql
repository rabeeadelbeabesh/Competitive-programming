SELECT F1.F1_CID,F1.F1_HID,F1.F1_NAME,F2.TotalSubmissions,F2.TotaAcceptedSubmissions,F1.TotalViews,F1.TotalUniqueViews
FROM 
(SELECT C.contest_id AS F1_CID ,C.hacker_id AS F1_HID ,C.name AS F1_NAME ,sum(total_views)AS    TotalViews,
sum(total_unique_views) AS  TotalUniqueViews FROM

Contests C INNER JOIN Colleges CG ON C.contest_id =CG.contest_id

INNER JOIN Challenges CH ON CH.college_id =CG.college_id 

INNER JOIN View_Stats VS ON VS.challenge_id =CH.challenge_id 

GROUP BY C.contest_id ,C.hacker_id ,C.name) F1

INNER JOIN 

(SELECT C.contest_id AS F2_CID ,C.hacker_id AS F2_HID  ,C.name AS F2_NAME,SUM(total_submissions) AS TotalSubmissions ,
SUM(total_accepted_submissions) AS TotaAcceptedSubmissions FROM
Contests C INNER JOIN Colleges CG ON C.contest_id =CG.contest_id
INNER JOIN Challenges CH ON CH.college_id =CG.college_id 
INNER JOIN Submission_Stats  SS ON SS.challenge_id =CH.challenge_id 
GROUP BY C.contest_id ,C.hacker_id ,C.name) F2

ON F1.F1_CID=F2.F2_CID AND F2.F2_HID=F1.F1_HID

WHERE (F2.TotalSubmissions+F2.TotaAcceptedSubmissions+F1.TotalViews+F1.TotalUniqueViews)>0
ORDER BY F1.F1_CID
