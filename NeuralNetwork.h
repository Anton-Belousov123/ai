#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

class NeuralNetwork {
private:
    static const int numWeights_ = 3;  // Количество весов
    double weights_[numWeights_];     // Веса

    double activate(double a);        // Функция активации

public:
    NeuralNetwork();                   // Конструктор по умолчанию
    NeuralNetwork(int numWeights);      // Конструктор с заданием количества весов

    void train(int data[4][3], int exp[4]);  // Обучение нейронной сети
    double predict(double inputs[3]);        // Предсказание выходного значения
};

#endif
