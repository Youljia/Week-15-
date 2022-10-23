# Week-15-

# 数据结构与算法

## 字符串查询问题

* 字符串查询问题简述

  在源字符串s中查找是否有目标字符串t,

  如果有返回第一个字母下标，如果没有则返回-1；

* 暴力查询

  主要思想是遍历，时间复杂度是O(|s|*|t|)

* 使用哈希思想进行查询

  * 引例 -- 段式回文

    * 问题简述

      ```c++
      	volvo 将它分成五段，v,o,l,v,o显然不是一个回文数
      	但是将它分成三段，vo,l,vo就是一个段式回文
      	分成一段，也是一个段式回文
      	并且返回值是--》最多的段数
      ```

    * 不使用哈希思想

      ```c++
      bool is_equals(const string& s, int left, int i, int j, int right) {
      	int a = left;
      	int b = j;
      	for (a,b; a <= i && b <= right; a++, b++) {
      		if (s.at(a) != s.at(b))return false;
      	}
      	return true;
      }
      //那么每次都要比较一下两个区间是否相等
      ```

 

