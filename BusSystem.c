#include <stdio.h>

#define ROWS 5
#define COLS 10

// Function to display the current status of bus seats

void displaySeats(int busSeats[][COLS]) {
printf("\nBus Seat Reservation System\n");
printf(" \n");
for (int i = 0; i < ROWS; i++) {
printf("Row %d:\t", i + 1);
for (int j = 0; j < COLS; j++) {
printf("%c ", busSeats[i][j]);
}
printf("\n");
}
}
// Function to reserve a seat
void reserveSeat(int busSeats[][COLS]) {
int row, col;
printf("\nEnter the seat row (1-%d): ", ROWS);
scanf("%d", &row);
if (row < 1 || row > ROWS) {
printf("Invalid row number. Please try again.\n");
return;
}
11
printf("Enter the seat column (1-%d): ", COLS);
scanf("%d", &col);
if (col < 1 || col > COLS) {
printf("Invalid column number. Please try again.\n");
return;
}
if (busSeats[row - 1][col - 1] == 'X') {
printf("Seat already reserved. Please choose another seat.\n");
} else {
busSeats[row - 1][col - 1] = 'X';
printf("Seat reserved successfully!\n");
}
}
// Function to cancel a reservation
void cancelReservation(int busSeats[][COLS]) {
int row, col;
printf("\nEnter the seat row (1-%d): ", ROWS);
scanf("%d", &row);
if (row < 1 || row > ROWS) {
printf("Invalid row number. Please try again.\n");
return;
}                                                                                                                                                       6 
printf("Enter the seat column (1-%d): ", COLS);
scanf("%d", &col);
if (col < 1 || col > COLS) {
12
printf("Invalid column number. Please try again.\n");
return;
}
if (busSeats[row - 1][col - 1] == 'O') {
printf("Seat not reserved. Please enter a reserved seat.\n");
} else {
busSeats[row - 1][col - 1] = 'O';
printf("Reservation canceled successfully!\n");
}
}
int main() {
int busSeats[ROWS][COLS];
// Initialize all seats as unreserved ('O')
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
busSeats[i][j] = 'O';
}
}
int choice;
do {
displaySeats(busSeats);
printf("\nBus Reservation Menu\n");
printf("1. Reserve a Seat\n");
printf("2. Cancel Reservation\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
13
switch (choice) {
case 1:
reserveSeat(busSeats);
break;
case 2:
cancelReservation(busSeats);
break;
case 3:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 3);
return 0;
}

