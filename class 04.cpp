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
    vector<player> teamPlayers;
    vector<rating> teamRatings;

    void addPlayer(const player& p, const rating& r)
    {
        teamPlayers.push_back(p);
        teamRatings.push_back(r);
    }
};

int main()
{
    int numTeams;
    cout << "Enter the number of teams: ";
    cin >> numTeams;

    vector<team> teams;

    for (int i = 0; i < numTeams; ++i)
    {
        team currentTeam;

        for (int j = 0; j < 3; ++j)
        {
            string name, position;
            int age, playerRating;

            cout << "Enter details for player " << j + 1 << " in Team " << i + 1 << " (name, position, age, separated by space): " << endl;
            cin >> name >> position >> age;

            player currentPlayer(name, position, age);

            cout << "Enter rating for player " << j + 1 << ": ";
            cin >> playerRating;

            rating currentRating(playerRating, currentPlayer);

            currentTeam.addPlayer(currentPlayer, currentRating);
        }

        teams.push_back(currentTeam);
    }

    system("cls");  // Clear the console screen

    cout << "\nDetails for all players and ratings:\n";
    for (int i = 0; i < numTeams; ++i)
    {
        cout << "Team " << i + 1 << " details:\n";
        for (int j = 0; j < 3; ++j)
        {
            cout << "Player " << j + 1 << " details: ";
            cout << "Player Name: " << teams[i].teamPlayers[j].name << endl;
            cout << "Foot: " << teams[i].teamPlayers[j].foot() << endl;
            cout << "Age: " << teams[i].teamPlayers[j].age << " years old" << endl;
            cout << "Position: " << teams[i].teamPlayers[j].position << endl;
            cout << "Rating: " << teams[i].teamRatings[j].rate << endl;

            // Check if the player is a Legend or Former player
            if (teams[i].teamPlayers[j].age >= 38)
            {
                cout << "Status: Legend\n";
            }
            else
            {
                cout << "Status: Former player\n";
            }

            cout << "------------------------\n";
        }
        cout << "************************\n";
    }

    return 0;
}
