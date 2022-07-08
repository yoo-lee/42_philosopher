#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <pthread.h>


typedef	struct			s_philosopher
{
	int					id;
	int					x_ate;
	int					left_fork_id;
	int					right_fork_id;
	long long			t_last_meal;
	struct s_rules		*rules;
	pthread_t			thread_id;
}						t_philosopher;

typedef	struct			s_philosopher
{
	int		id;
	int		x_ate;
	int		left_fork;
	int		right_fork;
	long long	t_last_meal;
	struct s_rules	*rules;
	pthread_t	thread_id;	
}			t_philosopher;


typedef			s_rules
{
	int				nb_philo;
	int				time_death;
	int				time_eat;
	int				time_sleep;
	int				nb_eat;
	int				dieded;
	long long		first_timestamp;
	pthread
	pthread_mutex_t		meal_check;
	pthread_mutex_t		forks[250];
	pthread_mutex_t		writing;
	t_philosopher		s_philosopher[250];

}			t_rules;

typedef			s_rules
{
	int			nb_philo;
	
}