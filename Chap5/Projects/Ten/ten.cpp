#include <iostream>
using namespace std;
const int ROWS(7), SEATS_PER_ROW(4);
void printSeats(char seats[][SEATS_PER_ROW]);
void fillSeat(char seats[][SEATS_PER_ROW]);
bool checkFull(char seats[][SEATS_PER_ROW]);
void initSeats(char seats[][SEATS_PER_ROW]);
bool validSeat(int row, char seat, char seats[][SEATS_PER_ROW]);

int main()
{
    bool isFull = false;
    char seats[ROWS][SEATS_PER_ROW];
    initSeats(seats);

    do
    {
        printSeats(seats);
        fillSeat(seats);
        isFull = checkFull(seats);
    } while (isFull == false);

    return 0;
}
void printSeats(char seats[][SEATS_PER_ROW])
{
    for (int i = 0; i < ROWS; i++)
    {
        cout << (i + 1) << " ";
        for (int columns = 0; columns < SEATS_PER_ROW; columns++)
        {
            cout << seats[i][columns] << " ";
        }
        cout << endl;
    }
    return;
}
void fillSeat(char seats[][SEATS_PER_ROW])
{
    int seatNum;
    char seatLetter;
    cout << "Enter the seat you would like to take: ";
    do
    {
        cin >> seatNum >> seatLetter;
    } while (validSeat(seatNum, seatLetter, seats) == false);

    seats[seatNum-1][static_cast<int>(seatLetter) - 65] = 'X';
    return;
}
bool checkFull(char seats[][SEATS_PER_ROW])
{
    bool empty = true;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < SEATS_PER_ROW; j++)
        {
            if (seats[i][j] != 'X')
            {
                empty = false;
            }
        }
    }
    return empty;
}
void initSeats(char seats[][SEATS_PER_ROW])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int columns = 0; columns < SEATS_PER_ROW; columns++)
        {
            switch(columns)
            {
                case 0:
                    seats[i][columns] = 'A';
                    break;
                case 1:
                    seats[i][columns] = 'B';
                    break;
                case 2:
                    seats[i][columns] = 'C';
                    break;
                case 3:
                    seats[i][columns] = 'D';
                    break;
                default:
                    break;
            }
        }
    }
}
bool validSeat(int row, char seat, char seats[][SEATS_PER_ROW])
{
    if (seats[row - 1][static_cast<int>(seat) - 65] == 'X')
    {
        cout << "Seat taken, enter another seat number: ";
        return false;
    }
    else
        return true;
}
