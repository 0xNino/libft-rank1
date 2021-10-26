/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:32:34 by ngenoud           #+#    #+#             */
/*   Updated: 2021/10/26 11:32:37 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list {
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

#endif