#ifndef DVD_H
#define DVD_H

#include <string>
#include <iostream>
#include <fstream>

class DVD{

private:		
	std::string Title;
	std::string Year;
	std::string Genre;
	std::string CheckoutDate;
	std::string ReturnDate;
	std::string Rating;

public:
	DVD();
	
	DVD(std::string title,
       std::string year,
       std::string genre,
       std::string checkout_date,
       std::string return_date,
       std::string rating);
    
     ~DVD();
	
    void setTitle(std::string title){
		Title = title;
	}
   	void setYear( std::string year){
		Year = year;
	}
	void setGenre(std::string genre){
		Genre = genre;
	}
	void setCheckoutDate(std::string checkout_date){
		CheckoutDate = checkout_date;
	}
	void setReturnDate(std::string return_date){
		ReturnDate = return_date;
	}
	void setRating(std::string rating){
		Rating = rating;
	}
   
	std::string getTitle() const{ 
		return Title; 
	}
	std::string getYear() const{ 
		return Year;  
	}
	std::string getGenre() const{ 
		return Genre; 
	}
	std::string getCheckoutDate() const{ 
		return CheckoutDate; 
	} 
	std::string getReturnDate() const{ 
		return ReturnDate; 
	} 
	std::string getRating() const{ 
		return Rating; 
	}  

	std::string underscore2space(std::string text){
	    for(int i = 0; i < text.length(); i++)
	    {
	        if(text[i] == '_')
	            text[i] = ' ';
	    }
	    return text;
	}
	
	void Read (std::ifstream& ifin){
		ifin >> Title >> Year >> Genre >> CheckoutDate >> ReturnDate >> Rating;
	}
	
	void Print(){
		Title = underscore2space(Title);
		std::cout << Title << " " << Year << " " << Genre << " " << CheckoutDate << " " << ReturnDate << " " << Rating << std::endl;
	}	
};

DVD::DVD() : Title{ "" }, Year{ "" }, Genre{ "" }, CheckoutDate{ "" }, ReturnDate{ "" }, Rating{ "" } {}

DVD::~DVD() {}

#endif // DVD_H ///:~