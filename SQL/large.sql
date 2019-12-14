SET SERVEROUTPUT ON
Declare
        n1 number(3);
        n2 number(3);
Begin 
        n1 := &n1;
        n2 := &n2;

	if(n1>n2) then
		dbms_output.put_line('Maximum Number is : '||n1);
	else
		dbms_output.put_line('Maximum Number is : '||n2);
        dbms_output.put_line('Program End');
	End if;
End;
/
SET SERVEROUTPUT OFF