CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT salary FROM (SELECT DISTINCT Salary FROM Employee) e1 WHERE N = (SELECT COUNT(e2.salary) FROM (SELECT DISTINCT Salary FROM Employee) AS e2 WHERE e2.salary >= e1.salary)
  );
END