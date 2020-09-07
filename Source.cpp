#include"D:\visual studio\Facade_patern_washmashin\Facade.h"
#include"D:\visual studio\Facade_patern_washmashin\flyweight.h"
#include"D:\visual studio\Facade_patern_washmashin\state.h"

int main()
{
	setlocale(0, "");	
	Soul* s=new Soul(new Heaven);
	s->confess();
	s->sin();
	s->sin();
	s->sin();
	s->confess();
	s->confess();
	s->confess();

}