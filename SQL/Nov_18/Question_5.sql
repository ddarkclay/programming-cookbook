SET SERVEROUTPUT ON

Declare
	Cursor C IS Select Name,job,City from Emp_Nov_18 where Dept_no = 1012;
Begin
	for i in C
	Loop
		Dbms_output.put_line(i.Name||'    '||i.Job||'    '||i.city);
	End Loop;
End;
/
SET SERVEROUTPUT OFF
