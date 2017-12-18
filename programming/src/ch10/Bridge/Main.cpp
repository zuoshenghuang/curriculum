#include "Bridge.h"

void testBridge()
{
	SanFransiscoBridge sb;
	LosAngelesBridge lb;

	SouthChina sz;
	EastChina sh;
	NorthEastChina hrb;

	sz.setBridge(&sb);
	sh.setBridge(&lb);
	hrb.setBridge(&sb);

	sz.go();
	sh.go();
	hrb.go();
}

int main()
{
	testBridge();
	system("pause");
    return 0;
}

