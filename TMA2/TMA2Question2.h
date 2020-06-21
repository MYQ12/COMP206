#ifndef HEN_H
#define HEN_H

#include <iostream>

class Hen{

public:
	Hen(){ 
		std::cout << "A new hen has been created!" << std::endl;
	}
	~Hen(){ 
		std::cout << "The Hen has died!" << std::endl;
	}
	void display(){
		std::cout << "This is what a Hen looks like:" << std::endl;
		std::cout << "		  MM" << std::endl;
		std::cout << "	         / .|_" << std::endl;
		std::cout <<"	        /(_)_< --- cack cack!" << std::endl;
	    std::cout <<"	       /  (" << std::endl;
		std::cout <<"       (____.-     )" << std::endl;
		std::cout <<"  	\\         /" << std::endl;
		std::cout <<"   	 \\ -.-.-`/" << std::endl;
		std::cout <<"	  \\_____/" << std::endl;
		std::cout <<"      	   _|_\\_" << std::endl;
		std::cout <<"     ---------------" << "\n" << std::endl;
	}
	
	class Nest{
	
	public:
		Nest(){ 
			std::cout << "The hen has created a new nest!" << std::endl;
		}
		~Nest(){
			std::cout << "The nest has been destroyed!" << std::endl;
		}
		void display(){
			std::cout << "This is how a hen sits in it's nest:" << std::endl;
			std::cout <<"		       (\\(\\)" << std::endl;
			std::cout <<"      ,_               ;  o >" << std::endl;
			std::cout <<"        {`-.          /  (_)" << std::endl;
			std::cout <<"	 ={\\`-._____/`   |" << std::endl;
			std::cout <<"	  -{ /    -=`\\   |" << std::endl;
			std::cout <<"	.=`={  -= = _/   /`-." << std::endl;
			std::cout <<"      (=======================)" << std::endl;
			std::cout <<"       \\=====================/" << std::endl;
			std::cout <<"	\\===================/" << std::endl;
			std::cout <<"	 \\=================/" << std::endl;
			std::cout <<"	  \\===============/" << std::endl;
			std::cout <<"	   `-------------" <<"\n" << std::endl;
		}
	
		class Egg{
			
		public:
			Egg(){
				std::cout << "The hen has layed a new egg!" << "\n" << std::endl;
			}
			~Egg(){
				std::cout << "The egg has been destroyed and a new chick is born!" << std::endl;
			}
			void display(){
				std::cout << "This is how a hen lays an egg:" << std::endl;
				std::cout << "  MM" << std::endl;                     
		        std::cout << " <o \\___/|" << std::endl;             
		        std::cout << "  \\_  _/ O" << std::endl;              
		        std::cout <<"     ][" << "\n" << std::endl;                    
			}
		};
	};
};
#endif // HEN_H ///:~