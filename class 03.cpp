#include <iostream>
#include <vector>

using namespace std;

class player
{
public:
    string name;
    string position;
    int age;

    player(const string& pname, const string& pposition, int page)
        : name(pname), position(pposition), age(page)
    {
    }

    string foot()
    {
        if (position == "LWF" || position == "lwf")
        {
            return "Right foot";
        }
        else if (position == "RWF" || position == "rwf")
        {
            return "Left foot";
        }
        else
        {
            return "Left or Right foot";
        }
    }
};

class rating
{
public:
    int rate;
    player position;

    rating(int r, const player& p)
        : rate(r), position(p)
    {
    }
};

class team
{
public:
    player teamPlayer;
    rating teamRating;

    team(const player& p, const rating& r)
        : teamPlayer(p), teamRating(r)
    {
    }
};

int main()
{
    int n;
    cout << "Enter the number of players: ";
    cin >> n;

    vector<team> teams;

    for (int i = 0; i < n; ++i)
    {
        string name, position;
        int age, playerRating;

        cout << "Enter player " << i + 1 << " details (name, position, age, separated by space): " << endl;
        cin >> name >> position >> age;

        player currentPlayer(name, position, age);

        cout << "Enter rating for player " << i + 1 << ": ";
        cin >> playerRating;

        rating currentRating(playerRating, currentPlayer);

        teams.push_back(team(currentPlayer, currentRating));
    }

    system("cls");

    cout << "\nDetails for all players and ratings:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Team " << i + 1 << " details: ";
        cout << "Player Name: " << teams[i].teamPlayer.name << endl;
        cout << "Foot: " << teams[i].teamPlayer.foot() << endl;
        cout << "Age: " << teams[i].teamPlayer.age << endl;
        cout << "Position: " << teams[i].teamPlayer.position << endl;
        cout << "Rating: " << teams[i].teamRating.rate << endl;
    }

    return 0;
}
