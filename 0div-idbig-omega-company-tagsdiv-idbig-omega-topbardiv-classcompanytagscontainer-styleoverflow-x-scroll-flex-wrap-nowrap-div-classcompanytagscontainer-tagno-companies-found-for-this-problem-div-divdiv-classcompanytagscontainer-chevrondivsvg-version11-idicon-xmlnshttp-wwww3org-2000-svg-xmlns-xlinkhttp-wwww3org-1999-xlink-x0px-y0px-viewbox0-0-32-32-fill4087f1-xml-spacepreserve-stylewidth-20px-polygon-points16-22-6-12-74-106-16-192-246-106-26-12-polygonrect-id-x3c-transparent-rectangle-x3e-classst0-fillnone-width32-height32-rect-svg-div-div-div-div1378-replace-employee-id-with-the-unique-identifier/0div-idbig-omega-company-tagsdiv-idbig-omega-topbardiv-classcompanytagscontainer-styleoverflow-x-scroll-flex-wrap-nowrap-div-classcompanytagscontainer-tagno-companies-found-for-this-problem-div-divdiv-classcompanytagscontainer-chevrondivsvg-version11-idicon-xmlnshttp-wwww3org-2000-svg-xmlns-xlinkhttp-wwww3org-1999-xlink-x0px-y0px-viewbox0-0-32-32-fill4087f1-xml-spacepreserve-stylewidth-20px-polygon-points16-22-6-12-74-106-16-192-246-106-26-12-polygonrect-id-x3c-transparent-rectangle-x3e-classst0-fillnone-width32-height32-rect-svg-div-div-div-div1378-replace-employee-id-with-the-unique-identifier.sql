# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees as A
LEFT JOIN EmployeeUNI as B
ON A.id = B.id;