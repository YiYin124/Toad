#pragma once
/*  SA-MP Native SQLite Database Functions
*
*  (c) Copyright 2007, SA-MP Team
*
*/

// --------------------------------------------------
// Defines
// --------------------------------------------------

typedef int DB;
typedef int DBResult;

// --------------------------------------------------
// Natives
// --------------------------------------------------

DB db_open(char name[]);
int db_close(DB db);
DBResult db_query(DB db, char query[]);
int db_free_result(DBResult dbresult);
int db_num_rows(DBResult dbresult);
int db_next_row(DBResult dbresult);
int db_num_fields(DBResult dbresult);
int db_field_name(DBResult dbresult, int field, char result[], int maxlength);
int db_get_field(DBResult dbresult, int field, char result[], int maxlength);
int db_get_field_assoc(DBResult dbresult, const char field[], char result[], int maxlength);

// --------------------------------------------------