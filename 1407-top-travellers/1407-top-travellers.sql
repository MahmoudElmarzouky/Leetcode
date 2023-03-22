/* Write your T-SQL query statement below */
SELECT 
      U.name ,
      CASE 
        WHEN SUM(R.distance) IS NULL 
        THEN 0
        ELSE
        SUM(R.distance)
      END 
      AS travelled_distance 
FROM 
    Users U LEFT JOIN Rides R
    ON (U.id=R.user_id)
    GROUP BY U.name,U.id
    ORDER BY travelled_distance DESC , U.name ;