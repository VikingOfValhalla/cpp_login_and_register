#include <iostream>
#include <string>

void print_text(std::string string_input) { std::cout << string_input; }

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

std::string existing_credential_validation(
    std::string existing_credential_concat) {
    /*
    while (existing_credential_concat != NULL) {
       // do something
    }
    */

    return existing_credential_concat;
}

int main() {
    int x = 0;

    // initializing username and password
    std::string username, password;

    // initializing username and password user input checks
    std::string username_input, password_input;

    // initializing concatenation for validation
    std::string new_username_password_concat,
        exisiting_username_password_concat;

    // initial registration
    while(x == 0) {
        account_registration();

        // to end while loop
        x += 1;
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
                std::cout << "You have " << passwordAttempts
                          << " attempts left." << std::endl;
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
                                     existingCredentialConcat,
                                     newCredentialConcat);
        }

        return 0;
    }
