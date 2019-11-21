//Echo Liu
//CS 112 Project8
//Nov.21st.2019

#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <string>
#include "Data.h"

using namespace std;

int main() {

    Data other;
    stack <Data> stack1;
    queue <Data> queue1;
    priority_queue <Data> priorityQueue;

    ifstream inFile;
    inFile.open ("../2017.csv");

    ofstream aStack;
    aStack.open("Stack.txt");

    ofstream aQueue;
    aQueue.open("Queue.txt");

    ofstream aPiority;
    aPiority.open("Sorted.txt");

    //check if the input file is opened successfully
    if(!inFile.is_open()){
        cout<<"Input file hasn't been opened."<<endl;
        return 1;
    }

    // check if the stack file is opened successfully
    if(!aStack.is_open()){
        cout<<"Stack output file hasn't been opened."<<endl;
        return 2;
    }

    // check if the queue file is opened successfully
    if(!aQueue.is_open()){
        cout<<"Queue output file hasn't been opened."<<endl;
        return 3;
    }

    //check if the sort file is opened successfully
    if(!aPiority.is_open()){
        cout<<"Sorted output file hasn't been opened."<<endl;
        return 4;
    }


    aQueue<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;
    aStack<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;
    aPiority<<"This list is sorted."<<endl;
    aPiority<<"Happiness Rate, Happiness Score, GDP per Capital, Life Expectancy"<<endl;
    cout<<"All files have been opened."<<endl;


    while (!inFile.eof()) {
        string country, rate, xscore, GDP, Expectancy;
        getline(inFile, country, ',');
        getline(inFile, rate, ',');
        getline(inFile, xscore, ',');
        getline(inFile, GDP, ',');
        getline(inFile, Expectancy,'\n');

        double rating = stod(rate);
        double score = stod(xscore);
        double gdp = stod(GDP);
        double life = stod(Expectancy);


        Data info = Data(country, rating, score, gdp, life);

        stack1.push(info);
        queue1.push(info);
        priorityQueue.push(info);

    }

    // use templete()to print
    cout << "Print out data in Sorted.txt" << endl;

    while (!priorityQueue.empty()){
        aPiority << priorityQueue.top() << endl;
        priorityQueue.pop();
    }

    cout << "Print out data in Queue.txt" << endl;
    while (!queue1.empty()){
        aQueue << queue1.front() << endl;
        queue1.pop();
    }

    cout << "Print out data in Stack.txt" << endl;
    while (!stack1.empty()){
        aPiority << stack1.top() << endl;
        stack1.pop();
    }


    inFile.close();
    aQueue.close();
    aPiority.close();
    aStack.close();
    cout<<"All files are closed!"<<endl;

    return 0;

}