#include<iostream>;

using namespace std;

int main(){
    int n;
    cin>>n;


int goal(0);
string team, win;
    while (n--) {
        if (goal != 0)
        {
            cin >> team;
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin >> win;
            goal = 1;
        }
    }

    cout <<win;
}