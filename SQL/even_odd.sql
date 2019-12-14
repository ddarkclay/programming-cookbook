SET SERVEROUTPUT ON
Declare
        no number(3);
Begin 
        no := &no;

	if(mod(no,2) = 0) then
		dbms_output.put_line('The Number '||no||' is : Even Number');
		dbms_output.put_line('The  Square of Number '||no||' is : '||no*no);
	else
		dbms_output.put_line('The Number '||no||' is : Odd Number');
		dbms_output.put_line('The  Cube of Number '||no||' is : '||no*no*no);
	End if;
End;
/
SET SERVEROUTPUT OFF