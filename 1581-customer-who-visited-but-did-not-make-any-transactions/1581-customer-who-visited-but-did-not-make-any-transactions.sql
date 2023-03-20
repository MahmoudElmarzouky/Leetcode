/* Write your T-SQL query statement below */
SELECT DISTINCT
     customer_id ,COUNT (customer_id) AS N'count_no_trans'
FROM 
    Visits
WHERE 
    visit_id NOT IN (SELECT visit_id FROM Transactions)
GROUP BY customer_id;