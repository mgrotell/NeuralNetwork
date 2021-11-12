#ifndef NEURAL_NETWORK_H
# define NEURAL_NETWORK_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>

# define WIN_W 1024
# define WIN_H 768

# define THREADS 64

typedef struct s_neuralnetwork
{
        int     layers;
        int     *layernodes;
        double  learningrate;
        double  ***weights;
        double  ***biases;

}               t_neuralnetwork;




double relu(double x);
double leakyRelu(double x);
double sigmoid(double x);


#endif