#include "birat/birat_class.h"


int main() {
	
	animal abc;
	abc.legs = 12;
    strcpy(abc.name ,"tommy");
	strcpy(abc.color, "black");
	abc.displayanimalk();
	
	
	animal def;
	def.legs = 4;
	strcpy(def.name, "jack");
	strcpy(def.color, "grey");
	def.displayanimalk();
	


//#pragma region xyz
//	animal myanimal;
//	
//	myanimal.sleep();
//
//	myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep(); myanimal.sleep();
//	myanimal.speak();
//
//	myanimal.speak();
//	myanimal.legs = 5;
//	myanimal.getlefofanimal();
//
//
//
//	animal youranimal;
//	youranimal.legs = 17;
//	youranimal.getlefofanimal();
//#pragma endregion

	bird ghi;
	ghi.age = 14;
	strcpy(ghi.color," white");
	ghi.wingspan = 13;
    strcpy(	ghi.name , "hawk");

	//ghi.fly();
	ghi.displayanimalk();


	/*car suzuki;
	strcpy(suzuki.name, "allas");
	suzuki.owner();*/







}