SET SERVEROUTPUT ON
Declare
        no number(3);
Begin 
        no := &no;

	if(no > 0) then
		dbms_output.put_line('The Number '||no||' is Positive');
	elsif(no < 0) then
		dbms_output.put_line('The Number '||no||' is Negative');
	else
		dbms_output.put_line('The Number is Zero');
	End if;
End;
/
SET SERVEROUTPUT OFF