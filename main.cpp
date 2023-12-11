#include"SocialGraph.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string usr1 = "Олег";
    string usr2 = "Никита";
    string usr3 = "Настя";
    string usr4 = "Ваня";
    string usr5 = "Женя";
    string usr6 = "Лена";
    string usr7 = "Дима";
    string usr8 = "Егор";
    string usr9 = "Алина";

    SocialGraph g;

    g.addUser(usr1);
    g.addUser(usr2);
    g.addUser(usr3);
    g.addUser(usr4);
    g.addUser(usr5);
    g.addUser(usr6);
    g.addUser(usr7);
    g.addUser(usr8);
    g.addUser(usr9);

    printf("\t Пользователи \n");
    g.printUsers();
    

    g.addFriendship(usr1, usr5);
    g.addFriendship(usr5, usr2);
    g.addFriendship(usr2, usr6);
    g.addFriendship(usr6, usr8);
    g.addFriendship(usr6, usr3);
    g.addFriendship(usr6, usr9);
    g.addFriendship(usr3, usr4);
    g.addFriendship(usr4, usr7);
    g.addFriendship(usr7, usr9);

    printf("\n\tматрица дружбы \n");
    g.printMatrix();

    printf("\n\tматрица знакомств \n");
    g.findMinDistancesFloyd();


	return 0;
}