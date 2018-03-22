int	main(int ac, char **av)
{
	int len; char *arg;
	if (ac == 2)
	{
		arg=av[1];
		while(*arg == ' ' || *arg == '\t')
			arg++;
		len = 0;
		while(arg[len] != '\0' && arg[len] != ' ' && arg[len] != '\t')
			len++;
		write(1, arg, len);
	}
	write(1, "\n", 1);
	return(0);
}
