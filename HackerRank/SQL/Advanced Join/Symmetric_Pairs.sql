SELECT  F.X,F.Y FROM Functions F INNER JOIN Functions FF ON F.X=FF.Y AND F.Y=FF.X 
GROUP BY  F.X,F.Y
HAVING COUNT( F.X)>1 OR F.X<F.Y
ORDER BY  F.X