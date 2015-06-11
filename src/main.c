#include "doublefann.c"

FANN_EXTERNAL struct fann *FANN_API fann_create_shortcut3(unsigned int num_input, unsigned int num_hidden, unsigned int num_output)
{
  unsigned int layers[3];
  layers[0] = num_input;
  layers[1] = num_hidden;
  layers[2] = num_output;
	return fann_create_shortcut_array(3, layers);
}

FANN_EXTERNAL struct fann *FANN_API fann_create_sparse3(float connection_rate, unsigned int num_input, unsigned int num_hidden, unsigned int num_output)
{
  unsigned int layers[3];
  layers[0] = num_input;
  layers[1] = num_hidden;
  layers[2] = num_output;
	return fann_create_sparse_array(connection_rate, 3, layers);
}

FANN_EXTERNAL struct fann *FANN_API fann_create_standard3(unsigned int num_input, unsigned int num_hidden, unsigned int num_output)
{
  unsigned int layers[3];
  layers[0] = num_input;
  layers[1] = num_hidden;
  layers[2] = num_output;
	return fann_create_standard_array(3, layers);
}
