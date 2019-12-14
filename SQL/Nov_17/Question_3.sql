SET SERVEROUTPUT ON

Declare
	n number(2):= 0;
	
Begin
	Select count(*)into n from Emp where To_Char(Hiredate,'MON') = 'DEC';
	Dbms_output.put_line('Total Number of Employees Joined in December is : '||n);

End;
/

SET SERVEROUTPUT OFF
