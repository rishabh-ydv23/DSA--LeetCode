# Write your MySQL query statement below
Select e.name, u.unique_id from Employees e
LEFT JOIN EmployeeUNI u ON e.id=u.id;