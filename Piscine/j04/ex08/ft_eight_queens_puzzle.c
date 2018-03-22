int	ft_eight_queen_puzzle(int a)
{
	if (a != 92)
		return (ft_eight_queen_puzzle(a + 1));
	return (a);
}

int	ft_eight_queens_puzzle(void)
{
	return (ft_eight_queen_puzzle(1));
}
