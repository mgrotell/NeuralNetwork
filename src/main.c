#include "../headers/Neuralnetwork.h"

int initializeNetwork(t_neuralnetwork *nn, char *settings)
{
	int x = 0;
	


	return(0);
}



int	main(int ac, char **av)
{
	t_neuralnetwork *nn;

	if(ac < 4)
	{
		ft_putstr("./nn 7 5 5 2 0.1 2\n");
		ft_putstr("./nn firstlayer hiddenlayers... outputlayer learningrate activation(1-3 sigmoid, ReLU, LeakyReLu)\n");
		return(0);
	}
	if(!(nn = (t_neuralnetwork*)malloc(sizeof(t_neuralnetwork))) || initializeNetwork(nn, *av))
	{
		ft_putstr("Cannot initialize network");
		return (0);
	}

	return(0);
}
