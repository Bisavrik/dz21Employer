#ifndef EMPLOYER_H
#define EMPLOYER_H

class Employer
{
public:
    virtual void Print() const = 0; 
    virtual ~Employer() = default; 
};

class President : public Employer
{
private:
    char* name;
public:
    explicit President(const char* name);
    President(const President& other);
    President& operator=(const President& other);
    void Print() const override;
    ~President() override;
};

class Manager : public Employer 
{
private:
    char* department;
public:
    explicit Manager(const char* department);
    Manager(const Manager& other);
    Manager& operator=(const Manager& other);
    void Print() const override;
    ~Manager() override;
};

class Worker : public Employer
{
private:
    char* jobTitle;
public:
    explicit Worker(const char* jobTitle);
    Worker(const Worker& other);
    Worker& operator=(const Worker& other);
    void Print() const override;
    ~Worker() override;
};

#endif 
