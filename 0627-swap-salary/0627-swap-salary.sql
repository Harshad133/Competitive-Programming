# Write your MySQL query statement below
UPDATE Salary set sex = CASE
    WHEN sex = 'm' THEN 'f'
    WHEN sex = 'f' THEN 'm'
    END;