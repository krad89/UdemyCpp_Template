#include <iostream>

//1. Two Enums can not share the same names
//2. No variable can have a name which is already reserved by an enum
//3. Enums are not typesafe

enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum class ExamPerson
{
    STUDENT,
    INSTRUCTOR
};

// void greet_permission_level_if(PermissionLevel level)
// {
//     if (level == PermissionLevel::ADMIN)
//     {
//         std::cout << "Hello ADMIN" << std::endl;
//     }
//     else if (level == PermissionLevel::INSTRUCTOR)
//     {
//         std::cout << "Hello INSTRUCTOR" << std::endl;
//     }
//     else if (level == PermissionLevel::TUTOR)
//     {
//         std::cout << "Hello TUTOR" << std::endl;
//     }
//     else if (level == PermissionLevel::STUDENT)
//     {
//         std::cout << "Hello STUDENT" << std::endl;
//     }
// }

// void greet_permission_level_switch(PermissionLevel level)
// {
//     switch (level)
//     {
//     case PermissionLevel::ADMIN:
//     {
//         std::cout << "Hello ADMIN" << std::endl;
//         break;
//     }
//     case PermissionLevel::STUDENT:
//     {
//         std::cout << "Hello STUDENT" << std::endl;
//         break;
//     }
//     case PermissionLevel::TUTOR:
//     {
//         std::cout << "Hello TUTOR" << std::endl;
//         break;
//     }
//     case PermissionLevel::INSTRUCTOR:
//     {
//         std::cout << "Hello INSTRUCTOR" << std::endl;
//         break;
//     }
//     default:
//     {
//         std::cout << "UUNKNOWN! ERROR!" << std::endl;
//     }
//     }
// }

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;

    PermissionLevel permission_level_michael = PermissionLevel::STUDENT;

    ExamPerson michael = ExamPerson::STUDENT;

    return 0;
}
