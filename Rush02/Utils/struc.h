/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: favalett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:57:21 by favalett          #+#    #+#             */
/*   Updated: 2024/08/04 16:57:25 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUC_H
# define STRUC_H

# include <unistd.h>

typedef struct s_segmentData
{
	char	segments[256][256];
	size_t	segment_lens[256];
	int		segment_count;
}	t_segmentData;

#endif
