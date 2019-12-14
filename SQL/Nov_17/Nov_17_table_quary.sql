Oracle Practical Nov 2017

Question 1] ***************************************

1]
Select * from Emp where City = 'Pune';

2]
Select Ename,City,Job from Emp where Deptno = 10 AND Sal < 10000;

3]
Select * from Emp where Ename like 'S%';

4]
Select Ename, Comm from Emp where Comm is Not NULL;

5]
Select Deptno, count(*) from Emp group by Deptno;



Question 2] **********************************

1]
Select * from Emp where To_Char(Hiredate,'MON') = 'MAY';

2]
Select Empno,Ename from Emp order by Empno;

3]
Select * from Emp where Ename like '_____';

4]
Select * from Emp where Job = 'Manager' AND Deptno = 20;

5]
Select Job, count(*) from Emp group by Job;


Question 3] ***********************************

1]  
Select * from Emp where Sal < 20000 And City = 'Mumbai';

2]
Select Ename, City, Sal from Emp order by Ename DESC;

3]
Select * from Emp where City like '%lore';

4]
Select Ename, Sal, Dname from Emp,Dept where Emp.Deptno = Dept.Deptno;

5]
Select sal from Emp where sal = (Select max(Sal) from Emp);



Question 4] *************************************


1]
Select * from Student_April_18 where City = 'Mumbai';

2]
Select Name,State, Feespaid from Student_April_18 where Course_name = 'BCA' And State = 'Maharashtra';

3]
Select * from Student_April_18 where Name like 'A%';

4]
Select Student_id,Name,Cname from Student_April_18,Course_April_18 where Student_April_18.Cource_id = Course_April_18.Cource_id;

5]
Select sum(feespaid) from Course_April_18;