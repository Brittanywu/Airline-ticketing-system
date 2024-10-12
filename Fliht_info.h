
#pragma warning(disable : 4996)
#include "数据结构.h"
#ifndef Fliht_info_h
#define Fliht_info_h



int is_Chinese(char*);

void search_Flight( );

char* choose_City();

char *build_Flightnum(FlightInfo, FlightInfo);

int in_Put(FlightInfo*);

int judge_Time(FlightInfo , FlightInfo );

int judge_Land(FlightInfo , FlightInfo );

void modify_Flight(FlightInfo*);

int modify_Polit(int , int , FlightInfo* );

int reserve_Flight(FlightInfo*);

void add_Flight();


#endif 

