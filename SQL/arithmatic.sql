SET SERVEROUTPUT ON
Declare
        n1 number(3);
        n2 number(3);
Begin 
        n1 := &n1;
        n2 := &n2;
	dbms_output.put_line('Addition of two numbers are : '||(n1+n2));
        dbms_output.put_line('Multiplication of two numbers are : '||(n1*n2));
	dbms_output.put_line('Division of two numbers are : '||(n1/n2));

End;
/
SET SERVEROUTPUT OFF