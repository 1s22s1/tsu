select
    id,
    name AS 都道府県名,
    (population / area) AS 人口密度
from
    prefectures
order by
    population / area desc;
