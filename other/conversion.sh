sed  's/!\[\](\(.*\)/![](https:\/\/raw.githubusercontent.com\/zzbased\/zzbased.github.com\/master\/other\/aggregation\/\1/g' aggregation/Aggregation模型.md > temp.md
cat head.txt temp.md > ../_posts/2015-04-03-Aggregation模型.md

sed  's/!\[\](\(.*\)/![](https:\/\/raw.githubusercontent.com\/zzbased\/zzbased.github.com\/master\/other\/em\/\1/g' em/EM_algorithm.md > temp.md
cat head.txt temp.md > ../_posts/2015-03-27-EM算法随笔.md

sed  's/!\[\](\(.*\)/![](https:\/\/raw.githubusercontent.com\/zzbased\/zzbased.github.com\/master\/other\/mlfoundation_learn\/\1/g' mlfoundation_learn/机器学习基石学习笔记.md > temp.md
cat head.txt temp.md > ../_posts/2015-03-25-机器学习基石学习笔记.md
sed  's/!\[\](\(.*\)/![](https:\/\/raw.githubusercontent.com\/zzbased\/zzbased.github.com\/master\/other\/mlfoundation_learn\/\1/g' mlfoundation_learn/机器学习技法学习笔记.md > temp.md
cat head.txt temp.md > ../_posts/2015-03-26-机器学习技法学习笔记.md

sed  's/!\[\](\(.*\)/![](https:\/\/raw.githubusercontent.com\/zzbased\/zzbased.github.com\/master\/other\/leetcode\/\1/g' leetcode/leetcode.md > temp.md
cat head.txt temp.md > ../_posts/2015-05-21-leetcode刷题小结.md

rm temp.md
