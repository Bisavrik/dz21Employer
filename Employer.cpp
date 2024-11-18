#include "Employer.h"
#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;

President::President(const char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

President::President(const President& other)
{
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
}

President& President::operator=(const President& other)
{
    if (this != &other) 
    {
        delete[] name;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }
    return *this;
}

void President::Print() const
{
    cout << "President: " << name << endl;
}

President::~President()
{
    delete[] name;
}

Manager::Manager(const char* department) 
{
    this->department = new char[strlen(department) + 1];
    strcpy(this->department, department);
}

Manager::Manager(const Manager& other) 
{
    department = new char[strlen(other.department) + 1];
    strcpy(department, other.department);
}

Manager& Manager::operator=(const Manager& other)
{
    if (this != &other) 
    {
        delete[] department;
        department = new char[strlen(other.department) + 1];
        strcpy(department, other.department);
    }
    return *this;
}

void Manager::Print() const
{
    cout << "Manager of department: " << department << endl;
}

Manager::~Manager() 
{
    delete[] department;
}

Worker::Worker(const char* jobTitle)
{
    this->jobTitle = new char[strlen(jobTitle) + 1];
    strcpy(this->jobTitle, jobTitle);
}

Worker::Worker(const Worker& other)
{
    jobTitle = new char[strlen(other.jobTitle) + 1];
    strcpy(jobTitle, other.jobTitle);
}

Worker& Worker::operator=(const Worker& other) 
{
    if (this != &other) 
    {
        delete[] jobTitle;
        jobTitle = new char[strlen(other.jobTitle) + 1];
        strcpy(jobTitle, other.jobTitle);
    }
    return *this;
}

void Worker::Print() const 
{
    cout << "Worker, job title: " << jobTitle << endl;
}

Worker::~Worker() 
{
    delete[] jobTitle;
}