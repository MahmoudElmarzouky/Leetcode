/* Write your T-SQL query statement below */
SELECT 
    MAX(salary )AS  N'SecondHighestSalary'
from 
    employee
where 
    salary < (SELECT max(salary) FROM employee);