#include "../headers/Neuralnetwork.h"

double leakyRelu(double x)
{
    return (x > 0 ? x : 0.01*x);
}

double relu(double x)
{
    return (x > 0 ? x : 0);
}

double sigmoid(double x)
{
    return (1 / (1 + exp(-x)));
}