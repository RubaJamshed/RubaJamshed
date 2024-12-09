1)


#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 10

typedef struct 
{
    int flightNumber;
    char departureCity[30];
    char destinationCity[30];
    char date[15];
    int availableSeats;
} Flight;

void displayFlightDetails(Flight flights[], int count) 
{
    for (int i = 0; i < count; i++) {
        printf("\nFlight Number: %d\n", flights[i].flightNumber);
        printf("Departure City: %s\n", flights[i].departureCity);
        printf("Destination City: %s\n", flights[i].destinationCity);
        printf("Date: %s\n", flights[i].date);
        printf("Available Seats: %d\n", flights[i].availableSeats);
    }
}

void bookSeat(Flight flights[], int count) 
{
    int flightNumber, found = 0;
    printf("\nEnter the flight number to book a seat: ");
    scanf("%d", &flightNumber);

    for (int i = 0; i < count; i++) {
        if (flights[i].flightNumber == flightNumber) 
        {
            found = 1;
            if (flights[i].availableSeats > 0) 
            {
                flights[i].availableSeats--;
                printf("Seat booked successfully. Remaining seats: %d\n", flights[i].availableSeats);
            } else 
            {
                printf("No seats available for this flight.\n");
            }
            break;
        }
    }

    if (!found) 
    {
        printf("Flight not found.\n");
    }
}

int main() 
{
    Flight flights[MAX_FLIGHTS];
    int flightCount = 0, choice;

    do {
        printf("\n1. Add Flight\n2. Display Flight Details\n3. Book Seat\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1 && flightCount < MAX_FLIGHTS) 
        {
            printf("\nEnter Flight Number: ");
            scanf("%d", &flights[flightCount].flightNumber);
            printf("Enter Departure City: ");
            scanf("%s", flights[flightCount].departureCity);
            printf("Enter Destination City: ");
            scanf("%s", flights[flightCount].destinationCity);
            printf("Enter Date (dd-mm-yyyy): ");
            scanf("%s", flights[flightCount].date);
            printf("Enter Available Seats: ");
            scanf("%d", &flights[flightCount].availableSeats);
            flightCount++;
        } else if (choice == 2) 
        {
            displayFlightDetails(flights, flightCount);
        } else if (choice == 3) 
        {
            bookSeat(flights, flightCount);
        } else if (choice != 4) 
        {
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}


2)


#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 20

typedef struct {
    char title[50];
    char genre[20];
    char director[30];
    int releaseYear;
    float rating;
} Movie;

void addMovie(Movie movies[], int *count) {
    if (*count >= MAX_MOVIES) {
        printf("Maximum movie limit reached.\n");
        return;
    }

    printf("\nEnter Title: ");
    scanf(" %[^\n]s", movies[*count].title); // Use space before % to handle newline
    printf("Enter Genre: ");
    scanf("%s", movies[*count].genre);
    printf("Enter Director: ");
    scanf(" %[^\n]s", movies[*count].director);
    printf("Enter Release Year: ");
    scanf("%d", &movies[*count].releaseYear);
    printf("Enter Rating (out of 10): ");
    scanf("%f", &movies[*count].rating);
    (*count)++;
}

void searchByGenre(Movie movies[], int count) {
    char genre[20];
    int found = 0;

    printf("\nEnter Genre to search: ");
    scanf("%s", genre);

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("\nTitle: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Rating: %.1f\n", movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found for genre: %s\n", genre);
    }
}

void displayAllMovies(Movie movies[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nTitle: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Rating: %.1f\n", movies[i].rating);
    }
}

int main() {
    Movie movies[MAX_MOVIES];
    int movieCount = 0, choice;

    do {
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All Movies\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addMovie(movies, &movieCount);
        } else if (choice == 2) {
            searchByGenre(movies, movieCount);
        } else if (choice == 3) {
            displayAllMovies(movies, movieCount);
        } else if (choice != 4) {
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}




