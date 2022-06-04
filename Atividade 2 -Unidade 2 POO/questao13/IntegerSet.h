#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet{
public:
IntegerSet();
IntegerSet(int[] ,int);

void insertElement(int);
void deleteElement(int);
void print() const;
friend void unionOfSets(IntegerSet, IntegerSet);
friend void intersectionOfSets(IntegerSet, IntegerSet);

private:
int arr[100];
int tamanho;
};


#endif