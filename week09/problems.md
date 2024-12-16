# Седмица 9

## Структури

Структурите (struct) са съставен тип данни, които се използват за групиране на данни, наречени членове.

За разлика от масивите, които съхраняват елементи от един тип, всеки елемент в структурите може да е от различен тип и с различна големина.

### Дефиниране на структура

```c++
struct Student {
    char fn[11];
    char firstName[32];
    char lastName[32];

    unsigned age;
    unsigned grade;
};
```

### Създаване на статични инстанции на структура

```c++
int main() {
    // Стойности по подразбиране
    Student defaultStudent;

    strcpy(defaultStudent.fn, "2MI0800432");
    strcpy(defaultStudent.firstName, "Example");
    strcpy(defaultStudent.lastName, "Student");
    defaultStudent.age = 20;
    defaultStudent.grade = 2;

    std::cout << defaultStudent.fn << ' ' << defaultStudent.firstName << ' ' << defaultStudent.lastName << std::endl;
    // Output: 2MI0800432 Example Student

    // Задаване на стойности при създаване на инстанция
    Student customStudent = { "9MI0800123", "Greg", "Teknikoff", 21, 3};
}
```

### Разлика между class и struct

```c++
struct Student {
    // Тези данни са публични
    char fn[11];
    char firstName[32];
    char lastName[32];

    unsigned age;
    unsigned grade;
};

class Student {
    // Тези данни са частни (private), като за да ги направим достъпни използваме:
public:
    char fn[11];
    char firstName[32];
    char lastName[32];

    unsigned age;
    unsigned grade;
};
```

### Подаване на структури във функции

```c++
// Подаване по копие
void printStudent(Student st) const {
    std::cout << st.fn << ' ' << st.firstName << ' ' 
    << st.lastName << ' ' << st.age << ' ' << st.grade << std::endl;
}

// Това натоварва излишно програмата, затова най-често се използва:

// Подаване по (константна*) референция
// *Ако няма да променяме структурата, която подаваме,
// е препоръчително да я подадем по константна референция
void printStudent(const Student& st) {
    std::cout << st.fn << ' ' << st.firstName << ' ' 
    << st.lastName << ' ' << st.age << ' ' << st.grade << std::endl;
}
```

### Създаване на инстанции в динамичната памет

```c++
int main() {
    // Създаване по подразбиране
    Student* defaultStudent = new Student();

    strcpy((*defaultStudent).fn, "2MI0800432");
    strcpy((*defaultStudent).firstName, "Example");
    strcpy((*defaultStudent).lastName, "Student");

    // Този запис е тромав, поради което се използва:
    defaultStudent->age = 20;
    defaultStudent->grade = 2;

    Student* st = new Student({"7MI0800135", "Ivan", "Ivanov", 19, 1});

    // ...

    // Не забравяйте :)
    delete defaultStudent;
    delete st;
}
```

### Композиция на инстанции и член-функции

```c++
struct Student {
    char fn[11];
    char firstName[32];
    char lastName[32];

    unsigned age;
    unsigned grade;
};

struct Class {
    Student students[200];
    size_t studentCount;

    void addStudent(Student& student) {
        // ...
    }
};
```

## Разделна компилация

![Етапи на компилация](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fhackingcpp.com%2Fcpp%2Flang%2Fseparate_compilation.png&f=1&nofb=1&ipt=6422e92144a3766abfb80dc7704f7abcd0aa6e97c433fce213b24d0f4ff85a32&ipo=images)

## Задачи

### Задача 1

Използвайки структурите Student и Class, добавете член-функция "printStudents" към Class, която извежда данните на всеки студент на отделен ред.

### Задача 2

Дефинирайте структура Point2D, която представлява две координати в декартова система. Реализирайте следните член-функции:

- print(), която извежда двете координати на точката
- dist(Point2D& other), която намира разстоянието между тази и друга точка
- copy(Point2D& other), която взима координатите на друга точка и ги присвоява на сегашната

### Задача 3*

Използвайки структурата Point2D, дефинирайте следните структури със съответните член-функции:

- LineSegment, която представлява две точки в равнината

  - findLength(), която връща дължината на отсечката
  - findSlope(), която намира ъгловия коефициент на отсечката

- Rectangle, която представлява две точки в равнината

  - findPerimeter(), която пресмята обиколката на правоъгълника
  - findArea(), която намира лицето на правоъгълника
  - contains(Rectangle& other), която проверява дали друг правоъгълник се вписва в него
  - copy(Rectangle& other), която присвоява координатите на точките на друг правоъгълник

- Circle, която представлява точка център и радиус

  - findCircumference(), която намира обиколката на кръга
  - findArea(), която пресмята лицето на кръга
  - intersects(Circle& other), която намира дали два кръга се пресичат (дори и само в една точка)
  - contains(Circle& other), която проверява дали друг кръг се вписва в него
  - copy(Circle& other), която присвоява данните на друг кръг

### Задача 4**

Създайте структура DynamicIntArray, която има член-данни динамичен масив от тип int, брой елементи и размер, който се оразмерява при необходимост.

P.S. Когато опитате да добавите елемента на позиция размера на масива (тоест извън неговите рамки), създайте нов масив с двойно по-голям размер и прехвърлете данните на стария масив в новия, като накрая трябва да изтриете стария и присвоите новия.
