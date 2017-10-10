/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 20:40:50 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/17 21:48:07 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**count_words(char **dttb, char *str)
{
	int i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			wordcount++;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
	}
	if (str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n')
		wordcount++;
	dttb = (char**)malloc(sizeof(char*) * (wordcount + 1));
	dttb[wordcount] = 0x0;
	return (dttb);
}

char	**count_chars(char **dttb, char *str)
{
	int	i;
	int j;
	int charcount;

	i = 0;
	j = 0;
	charcount = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\0')
		{
			dttb[j] = (char*)malloc(sizeof(char) * (charcount + 1));
			charcount = 0;
			j++;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
		charcount++;
	}
	return (dttb);
}

char	**complete(char **dttb, char *str)
{
	int i;
	int row;
	int col;

	i = 0;
	row = 0;
	col = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		dttb[row][col] = str[i];
		i++;
		col++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\0')
		{
			dttb[row][col] = '\0';
			row++;
			col = 0;
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
		}
	}
	return (dttb);
}

char	**ft_split_whitespaces(char *str)
{
	char	**dttb;

	dttb = NULL;
	dttb = count_words(dttb, str);
	dttb = count_chars(dttb, str);
	dttb = complete(dttb, str);
	return (dttb);
}
