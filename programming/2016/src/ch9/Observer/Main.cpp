#include "MsgObserver.h"

void testObserver()
{
	MsgCenter isdep;
	Student a("叮当"), b("大雄"), c("小丸子");
	Teacher zwl("曾老师"), yhy("叶老师");
	Staff s("李大叔");
	isdep.addObserver(a);
	isdep.addObserver(b);
	isdep.addObserver(c);
	isdep.addObserver(zwl);
	isdep.addObserver(yhy);
	isdep.addObserver(s);
	
	isdep.notify(0);
}

int main()
{
	testObserver();
	system("pause");
    return 0;
}

