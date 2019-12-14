SET SERVEROUTPUT ON

Declare
	c_no number;
	c_sal number(10,2);
Begin
	c_sal := f2(&c_no);
	If c_sal = 0 then
		dbms_output.put_line('Emp no does not exist');
	else
		dbms_output.put_line(c_sal);
	End if;
End;
/

SET SERVEROUTPUT OFF