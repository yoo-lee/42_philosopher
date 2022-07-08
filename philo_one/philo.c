#include <philo.h>

typedef s_rules
{
	int			nb_philo;
	int			time_death;
	int			time_eat;
	int			time_sleep;
	int 		nb_eat;
	int			died;
	int			all_ate;
	long long	first_timestamp;
	pthread_mutex_t		meal_check;
	pthread_mutex_t		forks[250];

}			t_rules;


philo_eats(t_philos *philo)
{
	t_rules *rules;
	rules = philo->rules;
	pthread_mutex_lock(&(rules->forks[philo->left_fork_id]));
	print_status(rules, philo->id, "has taken a fork");
	pthread_mutex_lock(&(rules->forks[philo->right_fork_id]));
	print_status(rules, philo->id, "has taken a fork");
	pthread_mutex_lock(&(rules->meal_check));
	smart_sleep();
	(philo->ate)++;
	pthread_mutex_unlock(&rules->[philo->left_fork_id]);
	pthread_mutex_unlock(&rules->[philo->right_fork_id]);
}

void *p_thread(void *void_philos)
{
	int			i;
	t_
}
	
	
}
