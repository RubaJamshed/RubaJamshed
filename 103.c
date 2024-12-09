1)


#include <stdio.h>


void printArray(int arr[], int size) {
    if (size == 0) {
        return; 
    }
    printf("%d ", arr[0]); 
    printArray(arr + 1, size - 1); 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}

2)

#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Point;


float calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


int isWithinBoundary(Point p, Point topLeft, Point bottomRight) {
    return (p.x >= topLeft.x && p.x <= bottomRight.x &&
            p.y >= bottomRight.y && p.y <= topLeft.y);
}

int main() {
    Point p1 = {2.0, 3.0}, p2 = {5.0, 7.0};
    Point topLeft = {0.0, 10.0}, bottomRight = {10.0, 0.0};
    printf("Distance: %.2f\n", calculateDistance(p1, p2));
    printf("Is within boundary: %s\n", isWithinBoundary(p1, topLeft, bottomRight) ? "Yes" : "No");
    return 0;
}


3)


#include <stdio.h>

#define MAX_TEMP 35

void checkTemperature(float temp) {
    static int count = 0;
    if (temp > MAX_TEMP) {
        count++;
        printf("Temperature %.2f exceeds the limit. Count: %d\n", temp, count);
    } else {
        printf("Temperature %.2f is within the limit.\n", temp);
    }
}

int main() {
    checkTemperature(36.5);
    checkTemperature(34.0);
    checkTemperature(40.0);
    return 0;
}


4)

#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

typedef struct {
    char make[50];
    char model[50];
    int year;
    float price;
    float mileage;
} Car;

Car cars[MAX_CARS];
int carCount = 0;


void addCar(const char* make, const char* model, int year, float price, float mileage) {
    strcpy(cars[carCount].make, make);
    strcpy(cars[carCount].model, model);
    cars[carCount].year = year;
    cars[carCount].price = price;
    cars[carCount].mileage = mileage;
    carCount++;
}


void displayCars() {
    for (int i = 0; i < carCount; i++) {
        printf("Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %.2f\n",
               cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
    }
}


void searchCars(const char* term) {
    for (int i = 0; i < carCount; i++) {
        if (strstr(cars[i].make, term) || strstr(cars[i].model, term)) {
            printf("Found - Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %.2f\n",
                   cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
        }
    }
}

int main() {
    addCar("Toyota", "Corolla", 2020, 20000, 15000);
    addCar("Honda", "Civic", 2019, 18000, 20000);

    printf("Available cars:\n");
    displayCars();

    printf("Search results for 'Civic':\n");
    searchCars("Civic");
    return 0;
}


5)


#include <stdio.h>

void bubbleSort(int arr[], int size) {
    if (size == 1) {
        return; 
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, size - 1); 
}

int main() {
    int arr[] = {5, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}



6)

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char destination[50];
    int duration; 
    float cost;
    int seatsAvailable;
} TravelPackage;

TravelPackage packages[100];
int packageCount = 0;


void addPackage(const char* name, const char* destination, int duration, float cost, int seats) {
    strcpy(packages[packageCount].name, name);
    strcpy(packages[packageCount].destination, destination);
    packages[packageCount].duration = duration;
    packages[packageCount].cost = cost;
    packages[packageCount].seatsAvailable = seats;
    packageCount++;
}


void bookPackage(const char* name) 
{
  
    for (int i = 0; i < packageCount; i++) 
    {
        if (strcmp(packages[i].name, name) == 0 && packages[i].seatsAvailable > 0) 
        {
            packages[i].seatsAvailable--;
            printf("Booking successful for %s. Seats left: %d\n", name, packages[i].seatsAvailable);
            return;
        }
    }
    printf("Package not found or no seats available.\n");
}

int main() {
    addPackage("Beach Getaway", "Maldives", 5, 1500.0, 10);
    addPackage("City Tour", "Paris", 7, 2000.0, 5);

    printf("Available packages:\n");
    for (int i = 0; i < packageCount; i++) {
        printf("%s to %s - $%.2f, %d seats\n",
               packages[i].name, packages[i].destination, packages[i].cost, packages[i].seatsAvailable);
    }

    bookPackage("Beach Getaway");
    return 0;
}


7)

#include <stdio.h>

#define METERS_TO_KM 0.001

void convertToKilometers(float meters) 
{
    static int callCount = 0;
    callCount++;
    printf("%.2f meters is %.2f kilometers. Function called %d times.\n",
           meters, meters * METERS_TO_KM, callCount);
}

int main() {
    convertToKilometers(1500);
    convertToKilometers(3000);
    convertToKilometers(4500);
    return 0;
}


8)


#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) 
{
    if (index == size) {
        return -1; 
    }
    if (arr[index] == target) {
        return index; 
    }
    return linearSearch(arr, size, target, index + 1); 
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = linearSearch(arr, size, target, 0);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found.\n", target);
    }
    return 0;
}


