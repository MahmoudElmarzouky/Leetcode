SELECT
	T2.id
FROM
	Weather T1
INNER JOIN
	Weather T2 ON    
				DATEADD(DAY,1,T1.recordDate ) = T2.recordDate
            AND
              T1.temperature  < T2.temperature ;