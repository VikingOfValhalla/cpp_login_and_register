#include <iostream>
#include <string>

std::string new_username_registration(std::string &username,
                                      std::string &password) {
    // welcome prompt
    std::cout
        << "This is your first time executing the program, please register."
        << std::endl;

    // username registration
    std::cout << "Please select a username: ";
    std::cin >> username;

    // password registration
    std::cout << "Please select a password: ";
    std::cin >> password;

    std::string new_username_password_concat = username + password;
    return new_username_password_concat;
}

void existingUserRegistration(int &passwordAttempts, std::string &username,
                              std::string &existingCredentialConcat,
                              std::string &newCredentialConcat) {
    while(passwordAttempts > 0) {
        std::string usernameInput, passwordInput;
        // existing user username input
        std::cout << "Username: ";
        std::cin >> usernameInput;

        // existing user password input
        std::cout << "Password: ";
        std::cin >> passwordInput;

        // username validation
        if(usernameInput == username) {
            existingCredentialConcat = usernameInput + passwordInput;
        }

        // password validation
        if(newCredentialConcat != existingCredentialConcat) {
            passwordAttempts -= 1;
            std::cout
                << "Thats an incorrect Username or Password, please double "
                   "check and try again."
                << std::endl;
            std::cout << "You have " << passwordAttempts << " attempts left."
                      << std::endl;
        }

        // login validated
        if(newCredentialConcat == existingCredentialConcat) {
            std::cout << "Welcome " << username << "!" << std::endl;
            break;
        }

        // catching hacker
        if(passwordAttempts == 0) {
            std::cout << "Please try again later.";
            break;
        }
    }
}

int main() {
    int initialRegistration = 0;

    // initializing username and password
    std::string username, password;
    std::string newCredentialConcat, existingCredentialConcat;

    // initial registration
    while(initialRegistration == 0) {
        newCredentialConcat = new_username_registration(username, password);
        // to end while loop
        initialRegistration += 1;
    }

    // existing user login
    if(initialRegistration != 0) {
        // return message
        std::cout << "Welcome back! \nPlease enter your credentials: "
                  << std::endl;
        int passwordAttempts = 3;

        // existing user
        existingUserRegistration(passwordAttempts, username,
                                 existingCredentialConcat, newCredentialConcat);
    }

    return 0;
}