#include "../headers/neuralnetwork.h"

int initializeNetwork(neuralnetwork_t *nn, char *settings)
{
	int x = 0;
	



}



int	main(int ac, char *av)
{
	neuralnetwork_t *nn;

	if(ac < 4)
	{
		ft_putstr("./nn 7 5 5 2 0.1 2");
		ft_putstr("./nn firstlayer hiddenlayers... outputlayer learningrate activation(1-3 sigmoid, ReLU, LeakyReLu)");
		return(0);
	}
	if(!(nn = (neuralnetwork_t*)malloc(sizeof(neuralnetwork_t))) || initializeNetwork(*nn, *settings))
	{
		ft_putstr("Cannot initialize network");
		return (0);
	}

	return(0);
}