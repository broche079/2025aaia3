//week01-3c.cpp
#include <stdio.h>// 使用c語言 的外掛, 負責ｉｎｐｕｔ　ｏｕｔ　ｐｕｔ


int main()
{
	int n;
	scanf("%d", &n);//使用　Ｃ　語言的　ｓｃａｎ　ｗｉｔｈ　ｆｏｒｍａｔ　讀入
	int ans = 0;
	for(int i=1; i<=n; i++){
		ans += i*i;
	}
	printf("%d", ans);//　使用Ｃ語言的ｐｒｉｎｔ　ｗｉｔｈ　ｆｏｉｒｍａｔ　印出來
}