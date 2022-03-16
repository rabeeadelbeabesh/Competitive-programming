import java.time.LocalDate;
public static String findDay(int month, int day, int year) {
     
        LocalDate date = LocalDate.of(year,month,day);

       return date.getDayOfWeek().toString();   
 }