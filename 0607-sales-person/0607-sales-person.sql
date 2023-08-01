# Write your MySQL query statement below
SELECT name FROM SalesPerson WHERE sales_id NOT IN (SELECT sales_id FROM Orders WHERE com_id IN (SELECT com_id FROM Company WHERE name = 'RED'));

# //SECOND METHOD

# select s.name
# from SalesPerson s
# where s.name not in
#     (select s.name
#     from SalesPerson s
#         left join Orders o on s.sales_id = o.sales_id
#         left join Company c on o.com_id = c.com_id
#     where c.name = 'Red');