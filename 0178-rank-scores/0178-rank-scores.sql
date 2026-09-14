# Write your MySQL query statement below
Select score,
DENSE_RANK() Over (ORDER BY score DESC) as `rank` from Scores