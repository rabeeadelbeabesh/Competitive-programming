--Company: The company_code is the code of the company and founder is the founder of the
--Lead_Manager: The lead_manager_code is the code of the lead manager, and the company_code is

--Senior_Manager: The senior_manager_code is the code of the senior manager,
--the lead_manager_code is the code of its lead manager, and the company_code is the code of the

--Manager: The manager_code is the code of the manager, the senior_manager_code is the code of its senior manager, 
--the lead_manager_code is the code of its lead manager, and the company_code

--Employee: The employee_code is the code of the employee, the manager_code is the code of its manager, 
--the senior_manager_code is the code of its senior manager,
--the lead_manager_code is the code of its lead manager, and the company_code is the code of the working company.


SELECT CC.company_code ,cc.founder ,LM.TOTAL_LM,SM.TOTAL_SM ,M.TOTAL_M,E.TOTAL_E
FROM Company CC
INNER JOIN  (
   SELECT  C.company_code ,COUNT(DISTINCT lm.lead_manager_code) AS TOTAL_LM FROM Company C
     INNER JOIN Lead_Manager lm on C.company_code= lm.company_code GROUP BY  C.company_code 
  
  ) LM on CC.company_code= LM.company_code
  
  INNER JOIN (
  
  SELECT  C.company_code ,COUNT(DISTINCT sm.senior_manager_code) AS TOTAL_SM FROM Company C
     INNER JOIN Senior_Manager sm on C.company_code= sm.company_code GROUP BY  C.company_code 
  ) SM ON CC.company_code= SM.company_code

  INNER JOIN 
  (
  
  SELECT  C.company_code ,COUNT(DISTINCT m.manager_code) AS TOTAL_M FROM Company C
     INNER JOIN Manager m on C.company_code= m.company_code GROUP BY  C.company_code 
  ) M ON CC.company_code= M.company_code
  INNER JOIN 
  (
  
  SELECT  C.company_code ,COUNT(DISTINCT e.employee_code) AS TOTAL_E FROM Company C
     INNER JOIN Employee e on C.company_code= e.company_code GROUP BY  C.company_code 
  ) E ON CC.company_code= E.company_code  ORDER BY CC.company_code ASC ;