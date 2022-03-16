DECLARE  @number INT =20;

WHILE (@number>0)
BEGIN 
PRINT REPLICATE('* ', @numbeR);
SET @number=@number-1;
END 
