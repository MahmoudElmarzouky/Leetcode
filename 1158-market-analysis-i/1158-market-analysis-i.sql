/* Write your T-SQL query statement below */
SELECT
    Users.user_id AS buyer_id,
    Users.join_date,
    COUNT(CASE WHEN YEAR(Orders.order_date) = 2019 THEN 1 ELSE NULL END) AS orders_in_2019
FROM
    Users
    LEFT JOIN Orders ON Users.user_id = Orders.buyer_id
GROUP BY
    Users.user_id,
    Users.join_date
ORDER BY
    Users.user_id;