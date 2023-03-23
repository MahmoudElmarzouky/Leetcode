/* Write your T-SQL query statement below */
SELECT DISTINCT
       A.product_id, B.product_name
FROM 
     Sales A LEFT JOIN Product B
     ON A.product_id = B.product_id 
     LEFT JOIN 
     (SELECT DISTINCT
          product_id FROM Sales 
         WHERE sale_date NOT BETWEEN  '2019-01-01' AND '2019-03-31') C 
         ON A.product_id = C.product_id
WHERE C.product_id IS NULL