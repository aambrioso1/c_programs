#pragma once

#define MAX_LENGTH_EMPLOYEE_NAME 40

struct employee_record {
	long ssn;
	char name[MAX_LENGTH_EMPLOYEE_NAME];
};

typedef struct employee_record EmployeeRecord
main.c