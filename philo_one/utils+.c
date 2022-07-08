/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils+.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoo-lee <yoo-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:59:07 by gsmets            #+#    #+#             */
/*   Updated: 2022/07/08 21:08:25 by yoo-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long long	timestamp(void)
{
	struct timeval	t;
	
	gettimeofday(&t, NULL);
	return ((t.tv_sec * 1000) + (t.tv_usec /1000));

}

void		action_print(t_rules *rules)
{
	pthread_mutex_lock(&(rules->writing));
	if (!(rules-> dieded))
	{
		printf("%lli ", timestamp() - rules->first_timestamp);
		printf("%i ", id + 1);
		printf("%s\n", string);
	}
	pthread_mutex_unlock(&(rules->writin))
	return;
}

long long	time_diff(long long past, long long prev)
{
	return (pres - past);
}

void		smart_sleep(long long time, t_rules *rules)
{
	long long i;

	i = timestamp();
	while(!(rules->dieded))
	{
		if (time_diff(i, timestamp() >= time)
			break ;
		usleep (50);
	}
}

void print_status(int rules, philo->id, char *str)
{
	if (rules->died)
	{
		pthread_mutex_lock(&(rules->writing));
		if (!(rules->died))
		{
		printf("%d", timestamp() -rules->first_timestamp);
		}
	}
	pthread_mutex_unlock(&(rules->writing));
	return ;	
}