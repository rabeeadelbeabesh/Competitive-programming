DECLARE  @number INT =3;
DECLARE @I INT =2;
DECLARE @F INT=1;
DECLARE @ANS VARCHAR(100)='';
DECLARE @ANSFULL VARCHAR(1000)='2';
DECLARE @NUM INT =10;
WHILE (@number<1000)
BEGIN 
  SET @I=2;
  SET @F=1;
      WHILE (@I*@I<=@number)
         BEGIN
           if ( @number%@I=0)
               begin 
                 SET @F=0
               end
            set @I=@I+1;
          end
   if (@F=1)
        begin 
        SET @ANS='';
        SET @NUM=@number
          WHILE(@NUM>0)
           BEGIN 
              SET @ANS=CONCAT(@ANS,'0'+@NUM%10)
             SET @NUM=@NUM/10;
           END
           SET @ANSFULL=CONCAT(@ANSFULL,'&')
           SET @ANSFULL=CONCAT(@ANSFULL,REVERSE(@ANS))
        end
   SET @numbeR =@numbeR+1
END

SELECT @ANSFULL