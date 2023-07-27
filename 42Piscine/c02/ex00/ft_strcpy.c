/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:36:31 by marvin            #+#    #+#             */
/*   Updated: 2023/07/27 13:36:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
int main()
{
    char src[] = "teste";
    char dest[15];

    printf("src: %d", src);
    printf("dest: %d", dest);
}