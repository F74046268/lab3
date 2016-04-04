					1000000		100000		10000		 1000         (資料量)
quick sort		    0.447874   0.048637    0.004482     0.000243      (單位 秒)

insertion sort       太久了    125.746      1.25799     0.012499      (單位 秒)


由觀察結果可知,資料量每乘上10倍,quick sort的時間大約會增10倍
而insertion sort則會增100倍.

皆符合兩者的時間複雜度
quick sort : nlogn
insertion sort : n^2

由此預估insertion sort在1,000,000筆資料量時,
可能花費時間約為12575秒.
