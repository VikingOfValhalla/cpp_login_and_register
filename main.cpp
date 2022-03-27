#include <iostream>
#include <string>

int main ()
{
	int x = 0;

	// initializing username and password
	std::string username, password;

	// initializing username and password user input checks
	std::string username_input, password_input;

	// initializing concatenation for validation
	std::string new_username_password_concat, exisiting_username_password_concat;

	// initial registration
	while (x == 0) 
	{
		// welcome prompt
		std::cout << "This is your first time executing the program, please register." << std::endl;	

		// username registration
		std::cout << "Please select a username: ";
		std::cin >> username;
		
		// password registration
		std::cout << "Please select a password: ";
		std::cin >> password;

		// new username and password concatenation
		new_username_password_concat = username + password;

		// to end while loop
		x += 1;
	}

	// exisiting user login
	if (x == 1)
	{
	
		// return message
		std::cout << "Welcome back! \nPlease enter your credentials: " << std::endl;

		// password attempts
		int a = 3;


		while (a > 0)
		{

			// existing user username input
			std::cout << "Username: ";
			std::cin >> username_input;

			// existing user password input
			std::cout << "Password: ";
			std::cin >> password_input;

			// username validation
			if (username_input == username) 
			{
				exisiting_username_password_concat = username_input + password_input;
			}			
			
			// password validation
			if (new_username_password_concat != exisiting_username_password_concat)
			{
				// subtracting from attempts
				a -= 1;
				std::cout << "Thats an incorrect Username or Password, please double check and try again." << std::endl; 
				std::cout << "You have "<< a << " attempts left." << std::endl;
			}

			// login validated
			if (new_username_password_concat == exisiting_username_password_concat)
			{
				std::cout << "Welcome " << username << "!" << std::endl;
				break;
			}

			// catching hacker
			if (a == 0)
			{
				std::cout << "Please try again later.";
				break;
			}
			
		}

	}
	
	return 0;
}