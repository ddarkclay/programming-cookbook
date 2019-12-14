SET SERVEROUT ON

Declare
	n1 number(3);
	n2 number(3);
	n3 number(3);
	
Begin
	n1 := &n1;
	n2 := &n2;
	n3 := &n3;
	
	if (n1 < n2) AND (n1 < n3) then
		dbms_output.put_line('Smaller Numbers is : '||n1);
	elsif (n2 < n1) AND (n2 < n3) then
		dbms_output.put_line('Smaller Numbers is : '||n2);
	else
		dbms_output.put_line('Smaller Numbers is : '||n3);
	End if;
	
End;
/

SET SERVEROUT OFF
