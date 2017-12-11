#include "Object.h"
#include "Factory.h"
#include "AutoWorks.h"

void testGod()
{
	
	Object * a = God::produce("light");
	Object * b = God::produce("human");
	Object * c = God::produce("baboon");
	a->show();
	b->show();

	((Animal *)b)->move();
	dynamic_cast<Human *>(b)->move();
	c->show();
	dynamic_cast<Baboon *>(c)->move();

	delete a;
	delete b;
	delete c;

	/*	构造函数被私有化，不能创建对象
	Human h;
	h.show();
	*/
}

void testFactory()
{
	Car::CarFactory cf;
	Vehicle * lamborghini = cf.produce();
	lamborghini->run();
	Vehicle * benz = cf.produce();
	benz->run();

	delete lamborghini;
	delete benz;

	Van::VanFactory vf;
	Vehicle * toyota = vf.produce();
	toyota->run();
	delete toyota;

	Tank::TankFactory tf;
	Vehicle * bmw = tf.produce();
	bmw->run();
	delete bmw;
}

void testAutoWorks()
{
	BenzWorks bw;
	Bus * bb = bw.produceBus();
	bb->run();

	MotorCar * bc = bw.produceCar();
	bc->run();

	ToyotaWorks tw;
	Bus * tb = tw.produceBus();
	tb->run();
	delete tb;

	delete bc;
	delete bb;
}

int main()
{
	//testGod();
	//testFactory();

	testAutoWorks();
	system("pause");
	return 0;
}