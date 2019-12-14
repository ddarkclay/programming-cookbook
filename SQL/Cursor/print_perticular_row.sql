SET SERVEROUTPUT ON
Declare
	Cursor C IS Select Ename,Job from Emp Order By Empno;
	emp_record C%rowtype;
Begin
	Open C;
	Loop
		FETCH C into emp_record;
		Exit when C%NOTFOUND;
		if(C % rowcount = 3 OR C %rowcount = 5 OR C %rowcount = 6) then
			Dbms_output.put_line(emp_record.ename||' : '||emp_record.Job);
		End if;
	End loop;
	Close C;
End;
/

SET SERVEROUTPUT OFF