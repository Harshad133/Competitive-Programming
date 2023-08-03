# Write your MySQL query statement below
# SELECT name FROM Employee WHERE id IN (SELECT managerId FROM Employee GROUP BY managerId HAVING COUNT(managerId) >= 5);
SELECT e2.name FROM Employee e1
INNER JOIN Employee e2
ON e1.managerId = e2.id
WHERE e1.managerId IS NOT NULL
GROUP BY e1.managerId
HAVING COUNT(e1.managerId) >= 5