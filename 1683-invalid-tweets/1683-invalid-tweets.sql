# Write your MySQL query statement below
Select tweet_id from Tweets where CHAR_LENGTH(content)>15;
-- Select tweet_id from Tweets where LENGTH(content)>15;


-- | Function        | DB Used In        | Counts     | Special Behavior           |
-- | --------------- | ----------------- | ---------- | -------------------------- |
-- | `LENGTH()`      | MySQL, PostgreSQL | Bytes      | Unicode chars may count >1 |
-- | `CHAR_LENGTH()` | MySQL, PostgreSQL | Characters | Accurate text length       |
-- | `LEN()`         | SQL Server        | Characters | Ignores trailing spaces    |


-- LENGTH()
--     👉 Used in: MySQL, PostgreSQL, Oracle
--     Returns number of bytes, not characters
--     Important when dealing with Unicode / multi-byte characters


-- 2. CHAR_LENGTH()
-- 👉 Used in: MySQL, PostgreSQL
-- Returns number of characters, not bytes
-- Safe for Unicode strings
-- This is usually what you want when counting actual text length