/* Write your T-SQL query statement below */
SELECT product_id ,N'store1' AS N'store' ,store1 AS N'price' 
FROM Products WHERE store1 IS NOT NULL
UNION 
SELECT product_id ,N'store2' AS N'store' ,store2 AS N'price' 
FROM Products WHERE store2 IS NOT NULL
UNION 
SELECT product_id ,N'store3' AS N'store' ,store3 AS N'price' 
FROM Products WHERE store3 IS NOT NULL