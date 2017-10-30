#include "Object.h"
#include "StackObject.h"
#include "HeapObject.h"

/*
	限定对象分配的区域	
*/

// 这是个全局的对象指针
Object * pObj = NULL; // nullptr

void init_object()
{
	Object obj("Apple");		// 栈上对象
	obj.show();

	pObj = new Object("Orange"); // 堆上对象
}

void test_object()
{
	init_object();
//	obj.show();					// dumb !
	pObj->show();
	delete pObj;
	pObj = NULL;
}

void test_stackobject()
{
	// 无法在堆上使用了， (2)是无效，编译无法通过

	StackObject so("Milk");							// (1)

//  StackObject * pOs = new StackObject("Milk");    // (2)
}

void test_heapObject()
{
	// 无法在栈上使用, (1)无效，编译无法通过
	//HeapObject car("Benz");									// (1)
	// car.show();

	HeapObject * product = HeapObject::produceObject("BMW"); // (2)
	product->show();
	delete product;
	product = NULL;
}

int main()
{
//	test_object();
//	test_stackobject();
	test_heapObject();
	system("pause");
    return 0;
}

