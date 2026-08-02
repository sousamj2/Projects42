int	column_validation(int grid[4][4], int coluna, int valor)
{
	int	linha;

	linha = 0;
	while (linha < 4)
	{
		if (grid[linha][coluna] == valor)
			return (0);
		linha++;
	}
	return (1);
}

int	line_validation(int grid[4][4], int linha, int valor)
{
	int	coluna;

	coluna = 0;
	while (coluna < 4)
	{
		if (grid[linha][coluna] == valor)
			return (0);
		coluna++;
	}
	return (1);
}

int	visibility(int seq[4], int direction)
{
	int	visible;
	int	i;

	visible = 0;
	i = 0;
	while (i < 
