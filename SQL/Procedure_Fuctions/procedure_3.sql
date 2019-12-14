SET SERVEROUTPUT ON

Create OR Replace Procedure Proc3(P_sal OUT emp.sal%TYPE)
Is
	vcount number(4);
Begin
	Select count(*) into vcount from emp where sal = P_sal;
	P_sal := vcount;
	Exception
		when NO_DATA_FOUND then
			P_sal := 0;
End Proc3;
/

SET SERVEROUTPUT OFF