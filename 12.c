1)
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() 
{
    int n, i;
    Student *students;
    float average = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    students = (Student *)malloc(n * sizeof(Student));

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        average += students[i].marks;
    }

    
    average /= n;
    printf("\nThe average marks of the class is: %.2f\n", average);

    
    free(students);
    return 0;
}


2)

#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **mat1, int **mat2, int **result, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;
    int **mat1, **mat2, **result;

    printf("Enter dimensions of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter columns for matrix B: ");
    scanf("%d", &p);

    
    mat1 = (int **)malloc(m * sizeof(int *));
    mat2 = (int **)malloc(n * sizeof(int *));
    result = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) mat1[i] = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) mat2[i] = (int *)malloc(p * sizeof(int));
    for (int i = 0; i < m; i++) result[i] = (int *)malloc(p * sizeof(int));

    
    printf("\nEnter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    
    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    
    multiplyMatrices(mat1, mat2, result, m, n, p);

    
    printf("\nResultant matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < m; i++) free(mat1[i]);
    for (int i = 0; i < n; i++) free(mat2[i]);
    for (int i = 0; i < m; i++) free(result[i]);
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}


3)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));
    
    
   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    printf("The sum of the elements is: %d\n", sum);

    
    free(arr);
    return 0;
}


4)


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char title[100];
    char author[50];
    int publicationYear;
} Book;

typedef struct {
    Book *books;
} Library;

int main() {
    Library library;
    int i;

    
    library.books = (Book *)malloc(5 * sizeof(Book));

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", library.books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", library.books[i].author);
        printf("Publication Year: ");
        scanf("%d", &library.books[i].publicationYear);
    }

    
    printf("\nBooks published after the year 2000:\n");
    for (i = 0; i < 5; i++) {
        if (library.books[i].publicationYear > 2000) {
            printf("%s\n", library.books[i].title);
        }
    }

  
    free(library.books);
    return 0;
}




