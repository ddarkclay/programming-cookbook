SET SERVEROUTPUT ON

Create OR Replace Procedure Proc1(P_no In Number)
Is
	vsal number(10,2);
Begin
	Select Sal into vsal from emp where empno = P_no;
	if vsal < 22000 then
		Update emp set Sal = Sal + 20000 where empno = P_no;
		Dbms_output.put_line('Updating to add Salary by 20000 Salary Successfully');
	else
		Update emp set Sal = 5000 where empno = P_no;
		Dbms_output.put_line('Updating to Set Salary is 5000 Salary Successfully');
	End if;
End Proc1;
/

SET SERVEROUTPUT OFF