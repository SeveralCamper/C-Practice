#include <stdio.h>
#include <stdlib.h>

void randomFilling();
void fillingInOrder();
void thirdDinamicArrRalisation();
void rotateTo90Degrees();
void tmth();

int main()
{
    printf("Random Filling\n");
    randomFilling();
    printf("\nFilling In Order\n");
    fillingInOrder();
    printf("\nDynamic Filling in Order\n");
    thirdDinamicArrRalisation();
    printf("\n\n");
    //rotateTo90Degrees();
    tmth();

    return 1;
}

void randomFilling()
{
    int Arr[10][10];
    printf("\n");

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            Arr[i][j] = rand() % 100;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }
}

void fillingInOrder()
{
    int array[10][10];
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = (i + 1) + (j + 1);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

void thirdDinamicArrRalisation()
{
    int *a, N = 5, M = 4, i = 0;
    a = (int*)malloc(N * M * sizeof(int));
    for (int p = 0; p < N; p++) {
        for (int j = 0; j < M; j++) {
            *(a + p * N + j) = i + 1;
            i++;
        }
    }
    for (int p = 0; p < N; p++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            if ((j + 1) == M) {
                printf("%d", *(a + p * N + j));
            } else {
                printf("%d\t", *(a + p * N + j));
            }
        }
    }
    free(a);
}

void rotateTo90Degrees() {
    int *a, N = 4, M = 4, i = 0;
    a = (int*)malloc(N * M * sizeof(int));
    for (int p = 0; p < N; p++) {
        for (int j = 0; j < M; j++) {
            *(a + p * N + j) = i + 1;
            i++;
        }
    }
    for (int p = 0; p < N; p++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            if ((j + 1) == M) {
                printf("%d", *(a + p * N + j));
            } else {
                printf("%d\t", *(a + p * N + j));
            }
        }
    }
    free(a);
}
