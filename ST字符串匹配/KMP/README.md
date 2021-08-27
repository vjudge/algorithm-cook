# Knuth-Morris-Pratt算法 (KMP)

### 算法思想
* 两层循环，和暴力求解的区别在于，每次匹配不成功，移动位数为：
    - 移动位数 = 已匹配的字符数 - 对应的部分匹配值
* 部分匹配值的计算方法：以"ABCDABD"为例：
    - "A"的前缀和后缀都为空集，共有元素的长度为0
　　－　"AB"的前缀为[A]，后缀为[B]，共有元素的长度为0
　　－　"ABC"的前缀为[A, AB]，后缀为[BC, C]，共有元素的长度0
　　－　"ABCD"的前缀为[A, AB, ABC]，后缀为[BCD, CD, D]，共有元素的长度为0
　　－　"ABCDA"的前缀为[A, AB, ABC, ABCD]，后缀为[BCDA, CDA, DA, A]，共有元素为"A"，长度为1
　　－　"ABCDAB"的前缀为[A, AB, ABC, ABCD, ABCDA]，后缀为[BCDAB, CDAB, DAB, AB, B]，共有元素为"AB"，长度为2
　　－　"ABCDABD"的前缀为[A, AB, ABC, ABCD, ABCDA, ABCDAB]，后缀为[BCDABD, CDABD, DABD, ABD, BD, D]，共有元素的长度为0





















