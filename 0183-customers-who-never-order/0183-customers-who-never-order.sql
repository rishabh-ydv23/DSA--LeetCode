# Write your MySQL query statement below
-- Select c.name as Customers from Customers c
-- left JOIN Orders o
-- ON c.id = o.customerId
-- where o.id IS NULL;



select name as Customers from Customers 
where id NOT IN(
    Select customerId from Orders
)