# Write your MySQL query statement below

SELECT name AS NAME , BALANCE FROM Users INNER JOIN (SELECT account,SUM(amount) AS BALANCE FROM Transactions GROUP BY account HAVING balance > 10000) AS Temp ON Users.account = Temp.account;