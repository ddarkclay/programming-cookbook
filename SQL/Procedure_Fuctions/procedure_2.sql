SET SERVEROUTPUT ON

Create OR Replace Procedure Proc2(P_no In Number, P_Job OUT emp.job%TYPE)
Is
	vjob emp.job%TYPE;
Begin
	Select Job into vjob from emp where empno = P_no;
	P_Job := vjob;
	Exception
		when NO_DATA_FOUND then
			P_Job := 'No';
End Proc2;
/

SET SERVEROUTPUT OFF