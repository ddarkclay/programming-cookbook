SET SERVEROUTPUT ON
Declare
        no number(3);
Begin 
        no := &no;

	if(mod(no,10) = 0) then
		dbms_output.put_line('The Number '||no||' is Divisible by 10');
	else
		dbms_output.put_line('The Number '||no||' is not Divisible by 10');
        dbms_output.put_line('Program End');
	End if;
End;
/
SET SERVEROUTPUT OFF