# Write your MySQL query statement below
select product_name , year, price from Product join Sales where Sales.product_id = Product.product_id;