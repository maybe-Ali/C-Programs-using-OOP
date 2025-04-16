// Practice Class Inheritance Relationship
#include<iostream>
using namespace std;

class rectangle{
	protected:
		float length;
		float width;
		float area;
	public:
		rectangle(float l ,float w){
			length = l;
			width = w;
			area = length*width;
		}
};
class playArea:public rectangle{
	protected:
		string surfaceType;
	public:
		playArea(float l,float w,string surface):rectangle( l, w){
			surfaceType = surface;
		}
		
		
};
class playGround:public playArea{
	float players;
	public:
		playGround(float l,float w,string surface, float player):playArea( l, w ,surface){
			players=player;
		}
		void avgplayer(playGround &p1,playGround &p2){
			cout<<"~ Average Number Of Players ~"<<endl;
			cout<<(players+p1.players+p2.players)/3;
		}
		void displayInfo(){
			cout<<"Ground Area:"<<area;
			cout<<endl<<"Surface Type: "<<surfaceType;
			cout<<endl<<"Number Of Players: "<<players<<endl;
		}
};

int main(){
	playGround football(12,10,"Grass",20);
	cout<<"----Football Ground----"<<endl;
	football.displayInfo();
	cout<<endl;
	playGround tennis(13,20,"Stone",10);
	cout<<"----Tennis Ground----"<<endl;
	tennis.displayInfo();
	cout<<endl;
	playGround basketball(10,10,"Wood",9);
	cout<<"----BasketBall Ground----"<<endl;
	basketball.displayInfo();
	cout<<endl;
	basketball.avgplayer(football,tennis);
}








