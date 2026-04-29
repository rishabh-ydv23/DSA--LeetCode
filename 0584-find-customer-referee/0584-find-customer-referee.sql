# Write your MySQL query statement below
Select name from Customer where referee_id !='2' OR referee_id IS NULL;

-- IS ka use special values ke saath hota hai, mainly:
-- NULL
-- TRUE / FALSE (kuch DBs me)
-- 👉 Sabse important: IS NULL
-- SQL me NULL ka matlab hota hai unknown / missing value
-- referee_id = NULL
-- referee_id == NULL  (==)naam ke cheez hoti he nhi hai


-- | Situation    | Use this        |
-- | ------------ | --------------- |
-- | Normal value | `=` or `!=`     |
-- | NULL check   | `IS` / `IS NOT` |

-- = → compare karta hai values ko
-- IS → check karta hai existence / absence (NULL)