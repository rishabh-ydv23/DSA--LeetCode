# Write your MySQL query statement below
Select w1.id from Weather w1 
JOIN Weather w2
    ON DATEDIFF(w1.recordDate,w2.recordDate)=1
where w1.temperature > w2.temperature;


-- ON - join ke time pe condition lagata hai — kaun si rows ko match karna hai
    -- ON → batayega kaise combine karna hai

-- DATEDIFF -Ye function do dates ke beech ka difference (days me) nikalta hai