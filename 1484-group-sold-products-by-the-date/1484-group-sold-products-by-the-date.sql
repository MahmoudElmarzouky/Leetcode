/* Write your T-SQL query statement below */
SELECT sell_date, COUNT( DISTINCT Product) AS num_sold,STRING_AGG(product,',')
WITHIN GROUP(ORDER BY product ASC) AS products FROM (SELECT DISTINCT * FROM Activities ) S GROUP BY sell_date ORDER BY sell_date