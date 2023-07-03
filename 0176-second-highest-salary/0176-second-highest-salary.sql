# Write your MySQL query statement below
# SELECT COALESCE((SELECT salary FROM Employee e1 WHERE 2 = (SELECT COUNT(e2.salary) FROM Employee AS e2 WHERE e2.salary >= e1.salary)
# ),'null') AS SecondHighestSalary;

SELECT max(Salary) AS SecondHighestSalary
FROM Employee
WHERE Salary < (SELECT max(Salary) FROM Employee)