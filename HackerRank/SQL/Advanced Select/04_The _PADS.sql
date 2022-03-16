select concat( Name,'(',substring(OCCUPATION,0,2),')') from OCCUPATIONS  order by name asc;

select concat('There are a total of ',count(Name),' ',LOWER(OCCUPATION),'s.') from OCCUPATIONS
group by OCCUPATION  order by count(name) asc ,OCCUPATION  asc ;