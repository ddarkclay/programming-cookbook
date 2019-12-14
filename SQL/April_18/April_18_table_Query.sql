Question 1]***********************

Create table Course_April_18(
Cource_id number(3) Primary key,
cname varchar2(2),
duration number(2),
fees number(7,2));

Insert into Course_April_18 values(101,'BBA',3,25000);
Insert into Course_April_18 values(102,'BCA',3,30000);
Insert into Course_April_18 values(103,'BFA',4,60000);
Insert into Course_April_18 values(104,'HM',3,70000);
Insert into Course_April_18 values(105,'LAW',4,15000);


create table Student_April_18(
Student_id Number(4),
Name varchar2(20),
Address varchar2(30),
City varchar2(20),
dt_of_birth date,
admit_dt date,
Mobile_no number(10),
Cource_id number(5) references Course_April_18);

Insert into Student_April_18 values(1,'Sujay','Swargate','Pune','02-Sep-99','15-Jun-17',8888888888,102);
Insert into Student_April_18 values(2,'Ajay','Dharavi','Mumbai','12-Feb-99','15-Jun-17',1111111111,101);
Insert into Student_April_18 values(3,'Vijay','Chandani Chock','Delhi','20-Oct-98','25-Jul-17',2222222222,105);
Insert into Student_April_18 values(4,'Jayesh','Shivaji Nagar','Pune','02-May-99','15-Jun-17',4444444444,102);
Insert into Student_April_18 values(5,'Mayur','Mumbai','Mumbai','02-Feb-98','15-Jun-17',8888888888,103);


1]
Select * from Student_April_18, Course_April_18 where To_Char(admit_dt,'MON') = 'SYSDATE';

2
Alter Table Student_April_18 Add(Email_id varchar2(20));

3]
Select count(*) from Student_April_18 group by Cource_id;

4]
Delete from Student_April_18 where City = 'Pune';

5]
Update fees set fees = (fees/100)*5 where course_id = 101;



Question 2] ***********************************

1]
Select * from where City = 'Delhi';

*****2]
Select Dname from Emp,Dept where Emp.Deptno != Dept.Deptno;

*****3]
Select * from Emp where salary = (Select salary from Emp where salary*12 <= 500000));

*****4]
Select avg(sal) from Emp group by Deptno;

5]
Select * from Emp where sal = (select max(sal) from Emp);


Question 3] *********************************

1]
Select Name from Client where name like '_a%';

2]
Select City from Client where name like 'M%';

3]
Select * from Client where City = 'Pune' OR City = 'Mumbai';

4]
Select * from Client where bal_due < 1000;

5]
Alter table Client Add(Email_id varchar2(20));


Question 4] **************************************

Create table Course_Question_4(
Cource_id number(5) Primary key,
CName varchar2(15),
duration number(2),
fees number(7,2));

Select * from Course_Question_4;

Insert into Course_Question_4 values(101,'BBA',3,25000);
Insert into Course_Question_4 values(102,'BCA',3,30000);
Insert into Course_Question_4 values(103,'BFA',4,60000);
Insert into Course_Question_4 values(104,'HM',3,70000);
Insert into Course_Question_4 values(105,'LAW',4,15000);



create table Student_Question_4(
Student_id Number(4) Primary key,
Name varchar2(20),
Address varchar2(30),
City varchar2(20),
dt_of_birth date,
Mobile_no number(10));

Select * from Student_Question_4;
Insert into Student_Question_4 values(1,'Sujay','Swargate','Pune','02-Sep-99',8888888888);
Insert into Student_Question_4 values(2,'Ajay','Dharavi','Mumbai','12-Feb-99',1111111111);
Insert into Student_Question_4 values(3,'Vijay','Chandani Chock','Delhi','20-Oct-98',2222222222);
Insert into Student_Question_4 values(4,'Jayesh','Shivaji Nagar','Pune','02-May-99',4444444444);
Insert into Student_Question_4 values(5,'Mayur','Mumbai','Mumbai','02-Feb-98',8888888888);


Create table Enrollment(
Student_id number(5) references Student_Question_4,
Course_id number(5) references Course_Question_4,
Enroll_dt date,
fees_paid number(7,2));

Select * from Enrollment;

Insert into Enrollment values(1,101,'02-Sep-17',20000);
Insert into Enrollment values(3,103,'14-Jul-17',40000);
Insert into Enrollment values(3,105,'28-Jun-17',60000);
Insert into Enrollment values(5,101,'17-May-17',25000);
Insert into Enrollment values(5,102,'15-Feb-17',10000);
Insert into Enrollment values(2,101,'15-Feb-17',30000);

1]
Select * from Course_Question_4;
Update Course_Question_4 set fees = fees + (fees*10)/100;

2]
Select sum(fees_paid) from Course_Question_4 c,Enrollment e where c.Cource_id = e.Course_id AND c.cname = 'BCA';

3]
Select * from Enrollment;
Select * from Course_Question_4 where Cource_id = (Select max(course_id) from Enrollment);

4]
Select * from Course_Question_4 c,Enrollment e where c.Cource_id = e.Course_id AND e.Student_id = (Select  Max(Student_id) from Enrollment);

5]
Delete from Enrollment where Fees_Paid is NOT NULL;


Question 5] ****************************************

1]
Select * from Emp order by Ename Desc;

2]
Alter table Emp Add(Email_id varchar2(20));

********3]
Select * from Emp where sal > (Select (sum(sal)*12) from Emp where sal > 500000);

4]
Select deptno,count(*) from Emp group by Deptno;

5]
Select * from Emp where sal = (Select min(sal) from Emp);


Question 6 ] ****************************************************

1]
Select * from Student_Question_4, Course_Question_4, Enrollment where To_Char(Enroll_dt,'MON') = 'APR';

2]
Select * from Student_Question_4, Enrollment where Student_Question_4.Student_id NOT IN Enrollment.Student_id;

3]
Select course_id, count(*) from Enrollment group by course_id;

*****4]
Delete from Enrollment,Course_Question_18 where Enrollment.fees_paid NOT IN Course_Question_18.fees;

5]
Alter table Student_Question_4 Add(Email_id varchar2(20));

