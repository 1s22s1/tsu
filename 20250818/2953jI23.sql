select
    region AS 地方名,
    count(*) AS 都道府県数,
    sum(area) AS 総面積
from
    prefectures
group by
    region
order by
    総面積 desc;
