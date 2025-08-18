select
    prefectures.name AS 都道府県名,
    regions.name AS 地方名
from
    prefectures
    join regions on prefectures.region_id = regions.id;
