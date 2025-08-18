select
    name AS 顧客名,
    sum(amount) AS 合計金額
from
    ledger
where
    '2022-08-08' <= date
    and date <= '2022-08-14'
group by
    name
having
    合計金額 >= 5000;
