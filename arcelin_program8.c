
/* 
 * COP2220 
 * Nicolas Arcelin
 * November 30, 20223
 * Program 8: Sturcts
 */

#include <string.h>
#include <stdio.h>
#define SIZE 25

typedef struct {
	char breed[SIZE];
	int age;
	char name[SIZE];
	char color[SIZE];
}dog;

//Function Prototypes(dog example)

// fills the data fields of a dog instance
//returns the filled dog
dog FillDog(); 

//fills the data fields of a dog instance
//by reference using a pointer to a dog
void FillDogPtr(dog* dogPtr); 

//fills an array of dogs( or cats)
void FillDogArray(dog dogList[], int* size); 

//displays one dog
void DisplayDog(dog anyDog); 

int main()
{
	dog myDog1, myDog2, myDog3;
	dog dogList[SIZE];  //dogList
	int cSize;
	int i;

	myDog1 = FillDog();
	myDog2 = FillDog();

	//print using display function
	printf("Dog 1:\n  Breed: %s\n  Age: %d\n  Name: %s\n  Color: %s\n\n", myDog1.breed, myDog1.age, myDog1.name, myDog1.color);
	printf("\nDog 2:\n  Breed: %s\n  Age: %d\n  Name: %s\n  Color: %s\n\n", myDog2.breed, myDog2.age, myDog2.name, myDog2.color);

	FillDogPtr(&myDog3);
	printf("\nDog 3:\n  Breed: %s\n  Age: %d\n  Name: %s\n  Color: %s\n", myDog3.breed, myDog3.age, myDog3.name, myDog3.color);

	FillDogArray(dogList, &cSize);
	
	for (i = 0; i < cSize; i++)
	{
		DisplayDog(dogList[i]);
	}

	return 0;
}

//Function Definitions

char breed[SIZE];
	int age;
	char name[SIZE];
	char color[SIZE];

dog FillDog(){
	dog filledDog;
		printf("\nDogs Brees\n");
		scanf(" %s", filledDog.breed);
		printf("Dogs Age\n");
		scanf("%d", &filledDog.age);
		printf("Dogs name\n");
		scanf(" %s", filledDog.name);
		printf("Dogs Color\n");
		scanf(" %s", filledDog.color);
	return filledDog;
}; 

//fills the data fields of a dog instance
//by reference using a pointer to a dog
void FillDogPtr(dog* dogPtr){
		printf("Dogs Brees\n");
		scanf(" %s", (*dogPtr).breed);
		printf("Dogs Age\n");
		scanf("%d", &(*dogPtr).age);
		printf("Dogs name\n");
		scanf(" %s", (*dogPtr).name);
		printf("Dogs Color\n\n");
		scanf(" %s", (*dogPtr).color);
}; 

//fills an array of dogs( or cats)
void FillDogArray(dog dogList[], int* size){
	printf("\nEnter # of Dogs: ");
	scanf("%d", size);
	for(int i = 0; i < *size; i++){
		printf("Enter breed:  ");
		scanf("%s", dogList[i].breed);

		printf("Enter age:  ");
		scanf(" %d", &dogList[i].age);

		printf("Enter name:  ");
		scanf("%s", dogList[i].name);
		
		printf("Enter color:  ");
		scanf("%s", dogList[i].color);
	}
}; 

//displays one dog
void DisplayDog(dog anyDog){
	printf("\nDog:\n  Breed: %s\n  Age: %d\n  Name: %s\n  Color: %s\n", anyDog.breed, anyDog.age, anyDog.name, anyDog.color);
}; 










