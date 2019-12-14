SET SERVEROUTPUT ON;

Declare
	Cursor C IS Select Emp_no,Name,D_name from Emp_Nov_18 e,Dept_Nov_18 d where e.Dept_no = d.Dept_no And d.D_Name = 'Account';
	
Begin
	For i in C
	loop
		Dbms_output.put_line(i.Emp_no||'   '||i.Name||'   '||i.D_name);
	End loop;
End;
/

SET SERVEROUTPUT OFF;
