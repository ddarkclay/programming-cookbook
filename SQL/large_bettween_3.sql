SET SERVEROUTPUT ON
Declare
        n1 number(3);
        n2 number(3);
	n3 number(3);
Begin 
        n1 := &n1;
        n2 := &n2;
	n3 := &n3;
	if(n1>n2 AND n1>n3) then
		dbms_output.put_line('Maximum Number is : '||n1);
	elsif(n2>n1 AND n2>n3) then
		dbms_output.put_line('Maximum Number is : '||n2);
	elsif(n3>n1 AND n3>n2) then
		dbms_output.put_line('Maximum Number is : '||n3);
	else
		dbms_output.put_line('All Three Numbers are equal');
	End if;
        dbms_output.put_line('Program End');
End;
/
SET SERVEROUTPUT OFF