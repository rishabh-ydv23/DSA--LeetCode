# Write your MySQL query statement below
select department, Employee, Salary
from(
    select d.name as Department,
    e.name as Employee,
    e.salary,
    RANK() OVER(
        PARTITION BY e.departmentID
        ORDER BY e.salary desc
    ) as rnk
    FROM Employee e
    JOIN Department d
    ON e.departmentId=d.id
)t
where rnk=1;