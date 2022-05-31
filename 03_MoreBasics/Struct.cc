#include <iostream>

//Enum values are integers
//Enum values in UPPERCASE
//Enum values are constant

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

struct UserData
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
};

void greet_permission_level(PermissionLevel level)
{
    switch (level)
    {
    case PermissionLevel::ADMIN:
    {
        std::cout << "Hello ADMIN" << std::endl;
        break;
    }
    case PermissionLevel::STUDENT:
    {
        std::cout << "Hello STUDENT" << std::endl;
        break;
    }
    case PermissionLevel::TUTOR:
    {
        std::cout << "Hello TUTOR" << std::endl;
        break;
    }
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << "Hello INSTRUCTOR" << std::endl;
        break;
    }
    default:
    {
        std::cout << "UUNKNOWN! ERROR!" << std::endl;
    }
    }
}

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;

    PermissionLevel permission_level_michael = PermissionLevel::STUDENT;

    UserData user_jan = {"Jan", 108014222, permission_level_jan};

    greet_permission_level(user_jan.permission_level);

    UserData user_michael;
    user_michael.name = "Michael";
    user_michael.id = 1080153456;
    user_michael.permission_level = permission_level_michael;
    greet_permission_level(user_michael.permission_level);

    return 0;
}
