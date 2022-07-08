
typedef struct s_philos
{
	int		id;
	int		left_fork_id;
	int		right_fork_id;

}				t_philos

typedef struct s_rules
{
	int		nb_philo;
	int		time_death;
	int		time_sleep;
	int		nb_eat;
}

void	philo_eats(t_philos *philo)
{
	t_rules *rules;

	rules = philo->rules;
	pthread_mutex_lock(&(rules->forks[philo->left _for]))	
}

