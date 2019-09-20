#include <iostream>
#include <string>
#include <list>
using namespace std;

#include<vector>

struct post 
{

	string txt ;
	int no_likes ;
    vector <string >name_likes ;
    int owner_ID ;
};


class user {

private:

    
    string name ;
    string password ;
    string email ;
	int ID ;
    vector <post> my_posts ;
	


public :
	user (int ID  ,string name , string password , string email) ;
	
	void add_friend (string email);
	void display() ;
	void show_posts() ;
	void show_my_posts();
	
	friend void sign_in ();
	friend void creat_account();                                          
	void write_post();
	void sign_out();
	void show_my_friends_list();
	void like_post(post x) ;
};


void creat_account ();

void home_page();
void sign_in ();







