#include <iostream>
#include <string>

int main() {
    std::string username, password, role;

    // program start sequence
    std::cout << "Password Program" << std::endl;
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    // hierarchy
    if (username == "admin" && password == "admin") {
        role = "admin";
    } else if (username == "mod" && password == "modpass") {
        role = "moderator";
    } else if (username == "user" && password == "userpass") {
        role = "user";
    } else {
        std::cout << "Invalid username or password. Access denied." << std::endl;
        return 1;
    }

    // continue with the program based on the user's role
    // ...

    return 0;
}