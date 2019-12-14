SET SERVEROUTPUT ON

Declare
	c_sal emp.sal%TYPE;
Begin
	c_sal := &c_sal;
	Proc3(c_sal);
	if c_sal = 0 then
		dbms_output.put_line('No Employee having salary equal to accepted salary');
	else
		dbms_output.put_line(c_sal);
	End if;
End;
/

SET SERVEROUTPUT OFF