#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
   int Flat_ID;
   int count_Rooms;
   char Family_Surname[20];
   int count_Adults;
   int count_Children;
   char Date[15];
   float rent;
}S_Apartament;
int floors, flats_per_floor;
S_Apartament **ptr;
void readMemory(char FileName[50]);
int menu();
void PrintFlats();
void enterNewResidents();
void calculateTax();
void emptyApartment();
void Elevator();
void writeInfo(char FileName[50]);

#endif // HEADER_H_INCLUDED
