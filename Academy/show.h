#pragma once

#include <iostream>

#include "Student.h"
#include "Teacher.h"
#include "Manager.h"

using namespace std;

void ShowStudent(Student student)
{
    cout << "=== Информация о студенте ===" << endl;
    cout << student.personal_info.ToString();
    cout << "Рейтинг: " << student.rating << endl;
    cout << "Факультет: " << FacultyToString(student.faculty) << endl;
    cout << "-----------------------------" << endl;
}