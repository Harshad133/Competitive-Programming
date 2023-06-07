# Write your MySQL query statement below
# SELECT name,population,area FROM World WHERE area >= 3000000 OR population >= 25000000;

# SELECT name, population, area FROM World
# where area >= 3000000 OR population >= 25000000
# ORDER BY area;

SELECT name, population, area FROM World
HAVING area >= 3000000 OR population >= 25000000
ORDER BY area;

# SELECT
#     name, population, area
# FROM
#     world
# WHERE
#     area >= 3000000

# UNION

# SELECT
#     name, population, area
# FROM
#     world
# WHERE
#     population >= 25000000
# ;