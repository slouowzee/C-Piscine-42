/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_arg1.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: favalett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:34:31 by favalett          #+#    #+#             */
/*   Updated: 2024/08/04 16:40:53 by favalett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_ARG1_H
# define LIB_ARG1_H

# include <unistd.h>
# include "../utils/struc.h"

void	append_to_buffer(char *buffer, size_t *len, const char *str);
void	append_segments_to_buffer(char *buffer, size_t *len,
			const t_segmentData *seg_data, const char *thousands[]);
void	convert_hundreds(int number, char *buffer, size_t *len);
void	convert_number(const char *number_str, char *buffer, size_t *len);
void	convert_tens(int number, char *buffer, size_t *len);
void	convert_units(int number, char *buffer, size_t *len);
void	get_segments(const char *number_str, int number_len,
			t_segmentData *seg_data);
void	read_number(char *number_str, size_t size);
void	process_segment(int number, char *buffer, size_t *len,
			const char *suffix);

#endif
