--Students, Friends and Packages. Students contains two columns: ID and Name
-- Friends contains two columns: ID and Friend_ID (ID of the ONLY best friend). 
 --Packages contains two columns: ID and Salary (offered salary in $ thousands per month).

 SELECT SS.S_NAME  FROM  

(SELECT  S.ID AS S_ID , S.NAME AS S_NAME ,P.SALARY AS S_SALARY  FROM Students S INNER JOIN Packages P ON P.ID=S.ID ) SS
INNER JOIN 
(SELECT F.ID AS FS_ID , F.Friend_ID AS F_FID ,P.SALARY AS F_FSALARY  FROM Friends F INNER JOIN Packages P ON P.ID=F.Friend_ID ) FF

ON SS.S_ID=FF.FS_ID   WHERE FF.F_FSALARY>SS.S_SALARY ORDER BY FF.F_FSALARY ASC 