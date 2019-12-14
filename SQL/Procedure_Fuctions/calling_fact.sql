SET SERVEROUTPUT ON

Declare
	c_no number;
	facto number;
Begin
	c_no := &c_no;
	facto := f3(c_no);
	dbms_output.put_line('Factorial of Number is : '||facto);
End;
/

SET SERVEROUTPUT OFF