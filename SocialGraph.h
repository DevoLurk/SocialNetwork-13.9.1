#ifndef SOCIALGRAPH
#define SOCIALGRAPH

#include <iostream>
#include <cstring>

#define SIZE 9
#define VERYBIGINT 10000


class SocialGraph
{
private:
    int matrix[SIZE][SIZE];          // матрица смежности
    std::string users[SIZE];         // хранилище вершин
    int usersCount;                  // количество добавленных вершин

    bool FriendshipExists(std::string u1, std::string u2);
    int getUserIndex(std::string user);

public:
    SocialGraph();
    void addUser(std::string user);
    void addFriendship(std::string u1, std::string u2);
    void findMinDistancesFloyd();
    void printUsers();
    void printMatrix();
};




#endif // SOCIALGRAPH