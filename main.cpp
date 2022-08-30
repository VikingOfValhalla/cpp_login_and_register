#include <iostream>
#include <string>

void print_text(std::string string_input) {
    std::cout << string_input;
}

std::string account_registration() {
    std::string username, password;

    print_text("Please select a username: ");
    std::cin >> username;

    print_text("Please select a password: ");
    std::cin >> password;
    
    // concatentation for unique comparable value
    std::string username_password_concat = username + password; 

    return username_password_concat;
}

std::string existing_credential_validation(std::string existing_credential_concat) {

    /*
    while (existing_credential_concat != NULL) {
       // do something 
    }
    */

    return existing_credential_concat;
}


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
	        account_registration();        

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
