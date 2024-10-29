/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:56:41 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/29 21:18:08 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
# include <stdio.h>

//*************************************** ISALPHA *************************************//

// int main()
// {
//     char char1 = 'a';
//     char char2 = 'Z';
//     char char3 = '1';

//     printf("%c est %d\n", char1, ft_isalpha(char1));
//     printf("%c est %d\n", char2, ft_isalpha(char2));
//     printf("%c est %d\n", char3, ft_isalpha(char3));
//     printf("%c est %d\n", char1, isalpha(char1));
//     printf("%c est %d\n", char2, isalpha(char2));
//     printf("%c est %d\n", char3, isalpha(char3));

//     return 0;
// }

//*************************************** ISDIGIT *************************************//

// int main()
// {
//     char char1 = 'a';
//     char char2 = 'Z';
//     char char3 = '1';

//     printf("%c est %d\n", char1, ft_isdigit(char1));
//     printf("%c est %d\n", char2, ft_isdigit(char2));
//     printf("%c est %d\n", char3, ft_isdigit(char3));
//     printf("%c est %d\n", char1, isdigit(char1));
//     printf("%c est %d\n", char2, isdigit(char2));
//     printf("%c est %d\n", char3, isdigit(char3));

//     return 0;
// }

//*************************************** ISALNUM *************************************//

// int main()
// {
//     char char1 = '1';
//     char char2 = 'Z';
//     char char3 = '!';

//     printf("%c est %d\n", char1, ft_isalnum(char1));
//     printf("%c est %d\n", char2, ft_isalnum(char2));
//     printf("%c est %d\n", char3, ft_isalnum(char3));
//     printf("%c est %d\n", char1, isalnum(char1));
//     printf("%c est %d\n", char2, isalnum(char2));
//     printf("%c est %d\n", char3, isalnum(char3));

//     return 0;
// }

//*************************************** ISASCII *************************************//

// int main()
// {
//     int char1 = 65;
//     int char2 = 200;
//     int char3 = 0;

//     printf("%d : %d\n", char1, ft_isascii(char1));
//     printf("%d : %d\n", char2, ft_isascii(char2));
//     printf("%d : %d\n", char3, ft_isascii(char3));
//     printf("%d : %d\n", char1, isascii(char1));
//     printf("%d : %d\n", char2, isascii(char2));
//     printf("%d : %d\n", char3, isascii(char3));

//     return 0;
// }

//*************************************** ISPRINT *************************************//

// int main()
// {
//     int char_1 = 65;
//     int char_2 = 31;
//     int char_3 = 126;

//     printf("%d : %d\n", char_1, ft_isprint(char_1));
//     printf("%d : %d\n", char_2, ft_isprint(char_2));
//     printf("%d : %d\n", char_3, ft_isprint(char_3));
//     printf("%d : %d\n", char_1, isprint(char_1));
//     printf("%d : %d\n", char_2, isprint(char_2));
//     printf("%d : %d\n", char_3, isprint(char_3));

//     return 0;
// }

//*************************************** STRLEN **************************************//

// int main(void)
// {
// 	int	i;
// 	int j;
// 	char	c[50] = "coufsdfsdfsdfdFAFdsfcou";
// 	i = ft_strlen(c);
// 	j = strlen(c);
// 	printf("%d\n", i);
// 	printf("%d\n", j);
// }

//*************************************** MEMSET **************************************//

// int main()
// {
//     char buffer[200];
//     ft_memset(buffer, 'A', 100);
//     buffer[20] = '\0';
//     printf("apres ft_memset: %s\n", buffer);
//     printf("\n");

//     char buffer1[200];
//     memset(buffer1, 'A', 100);
//     buffer1[20] = '\0';
//     printf("apres memset: %s\n", buffer1);
//     printf("\n");

// }

//*************************************** BZERO ***************************************//

// int main()
// {
//     char str[10] = "COUCOU";
// 	char str1[10] = "COUCOU";

//     ft_bzero(str, 3);

//     printf("%d %d %d %d %d %d %d %d %d %d\n", 
//            str[0], str[1], str[2], str[3], str[4], 
//            str[5], str[6], str[7], str[8], str[9]);
		   
// 	bzero(str1, 3);

//     printf("%d %d %d %d %d %d %d %d %d %d\n", 
//            str1[0], str1[1], str1[2], str1[3], str1[4], 
//            str1[5], str1[6], str1[7], str1[8], str1[9]);

//     return 0;
// }

//*************************************** MEMCPY **************************************//

// int main()
// {
//     char src[] = "Pwet pouet";
//     char dst[10];         

//     ft_memcpy(dst, src, 8);
//     printf("%s\n", dst);

// 	char src1[] = "Pwet pouet";
//     char dst1[10];

// 	memcpy(dst1, src1, 8);
//     printf("%s\n", dst1);
      
// }

//*************************************** MEMMOVE *************************************//

// int main()
// {
// 	char str[] = "coucou";
// 	ft_memmove(str + 2, str, 3);
// 	printf("%s\n", str);

// 	char str1[] = "coucou";
// 	memmove(str1 + 2, str1, 3);
// 	printf("%s", str1);
// }

//*************************************** STRLCPY *************************************//
// #include <string.h>
// int main()
// {
//     char src[] = "Je test mon programme";
//     char dst[30];
//     size_t len = ft_strlcpy(dst, src, sizeof(dst));

//     printf("Dst: %s\n", dst);
//     printf("Longueur source: %zu\n", len);
// }

//*************************************** STRLCAT *************************************//

// int main()
// {
//     char dest[20] = "Je test";
//     char src[] = " mon programme";
//     size_t len = ft_strlcat(dest, src, sizeof(dest));

//     printf("res: %s\n", dest);
//     printf("Length: %zu\n", len);
    
// 	char dest1[20] = "Je test";
//     char src1[] = " mon programme";
//     size_t len1 = ft_strlcat(dest1, src1, sizeof(dest1));

//     printf("res: %s\n", dest1);
//     printf("Length: %zu\n", len1);
// }

//*************************************** TOUPPER *************************************//

// int main()
// {
//     char lower = 'g';
//     char upper = ft_toupper(lower);

//     printf("min: %c, MAJ: %c\n", lower, upper);

// 	char lower1 = 'g';
//     char upper1 = ft_toupper(lower1);

//     printf("min: %c, MAJ: %c\n", lower1, upper1);
// }

//*************************************** TOULOWER ************************************//

// int main()
// {
//     char upper = 'A';
//     char lower = ft_tolower(upper);

//     printf("MAJ: %c, min: %c\n", upper, lower);

//     char upper1 = 'A';
//     char lower1 = ft_tolower(upper1);

//     printf("MAJ: %c, min: %c\n", upper1, lower1);
// }

//*************************************** STRCHR **************************************//

// int main() 
// {
//     const char *str = "pwet pouet pouet pwet";
//     char ch = 'o';
// 	char *res_strrchr = strrchr(str, ch);

//     if (res_strrchr != NULL) 
//         printf("strrchr : Dernier caractère '%c' trouvé à la position : %ld\n", ch, res_strrchr - str);
//     else 
//         printf("strrchr : Le caractère '%c' n'a pas été trouvé.\n", ch);

//     char *res_ft_strrchr = ft_strrchr(str, ch);
//     if (res_ft_strrchr != NULL) 
//         printf("Dernier caractère '%c' trouvé à la position : %ld\n", ch, res_ft_strrchr - str);
//     else 
//         printf("Le caractère '%c' n'a pas été trouvé.\n", ch);
// }

//*************************************** STRNCMP *************************************//

// int main() {
//     const char *str = "pwet pouet pwet";
//     int c = 'p';
//     const char *str1 = "Coucou";
//     int d = 'p';

//     char *res_strrchr = strrchr(str, c);
//     char *res_ft_strrchr = ft_strrchr(str, c);

//     if (res_strrchr)
//         printf("strrchr : Derniere occurence '%c': %s\n", c, res_strrchr);
//     else
//         printf("strrchr : Caractere '%c' non trouve.\n", c);
//     if (res_ft_strrchr)
//         printf("ft_strrchr : Derniere occurence '%c': %s\n", c, res_ft_strrchr);
//     else
//         printf("ft_strrchr : Caractere '%c' non trouve.\n", c);

//     char *res_strrchr1 = strrchr(str1, d);
//     char *res_ft_strrchr1 = ft_strrchr(str1, d);

//     if (res_strrchr1)
//         printf("strrchr : Derniere occurence '%c': %s\n", d, res_strrchr1);
//     else
//         printf("strrchr : Pas de caractere '%c'.\n", d);
//     if (res_ft_strrchr1)
//         printf("ft_strrchr : Derniere occurence '%c': %s\n", d, res_ft_strrchr1);
//     else
//         printf("ft_strrchr : Pas de caractere '%c'.\n", d);

// }

//*************************************** MEMCHR **************************************//

// int main() 
// {
//     const char str[] = "Pwet Pouet Pwet";
//     int c = 'o';
//     size_t n = sizeof(str);


//     char *res = ft_memchr(str, c, n);
//     if (res)
//         printf(" '%c' position %ld\n", c, res - str);
//     else
//         printf("aucun caractere %c \n", c);

//     char *res1 = memchr(str, c, n);
//     if (res1)
//         printf("memchr : '%c' position %ld\n", c, res1 - str);
//     else
//         printf("memchr :aucun caractere %c \n", c);

//     return 0;
// }

//*************************************** MEMCMP **************************************//

// int main()
// {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Hello, World";
//     size_t n = 13;
//     int res = ft_memcmp(str1, str2, n);
// 	int res1 = memcmp(str1, str2, n);

//     if (res == 0)
//         printf("Egal\n");
//     else
//         printf("Inegal\n");

		
//     if (res1 == 0)
//         printf("Egal\n");
//     else
//         printf("Inegal\n");
//     return 0;
// }

//*************************************** STRNSTR **************************************//

// int main() {
//     const char *haystack = "Pwet, Pouet !";
//     const char *needle = "et,";
//     size_t len = 13;

//     char *res = ft_strnstr(haystack, needle, len);
//     if (res)
//         printf("ft_strnstr - trouve: %s\n", res);
//     else
//         printf("ft_strnstr - Non trouve\n");
//     return 0;
// }

//*************************************** STNCMP **************************************//


// int main()
// {
//     const char *s1 = "Je test Pwet Pouet Pwet";
//     const char *s2 = "Je tedt mon programme";
//     size_t n = 6;

//     int res = ft_strncmp(s1, s2, n);

//     if (res == 0)
//         printf("les premiers %zu caracteres sont les memes.\n", n);
// 	else if (res < 0)
//         printf("les premiers %zu caractes de '%s' sont < a '%s'.\n", n, s1, s2);
//     else
// 	{
//         printf("les premiers %zu caractere de '%s' sont > a '%s'.\n", n, s1, s2);
// 	}
	
// 	int res1 = ft_strncmp(s1, s2, n);

// 	if (res1 == 0)
//         printf("les premiers %zu caracteres sont les memes.\n", n);
//     else if (res1 < 0)
//         printf("les premiers %zu caractes de '%s' sont < a '%s'.\n", n, s1, s2);
//     else
//         printf("les premiers %zu caractere de '%s' sont > a '%s'.\n", n, s1, s2);
// }

//*************************************** CALLOC **************************************//

// int main() {
//     int *array = ft_calloc(5, sizeof(int));

//     if (array == NULL)
//         return 1;
//     printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
//     free(array);

// 	int *array1 = calloc(5, sizeof(int));

// 	if (array1 == NULL)
//         return 1;
//     printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[3], array1[4]);
// 	free(array1);
// }

//*************************************** STRDUP **************************************//

// int main()
// {
//     char *src = "Hello, World!";
//     char *dup = ft_strdup(src);

//     if (dup == NULL)
//         return 1;
//     printf("base : %s\n", src);
//     printf("Duplique : %s\n", dup);
//     free(dup);

// 	char *dup1 = ft_strdup(src);

// 	if (dup1 == NULL)
//         return 1;
//     printf("base : %s\n", src);
//     printf("Duplique : %s\n", dup1);
//     free(dup1);
// }

//*************************************** ATOI ****************************************//

// int main()
// {
//     char str[] = "-89v789";
//     int val = ft_atoi(str);
//     printf("%d\n", atoi(str));
//     printf ("%d ", val);
//     return 0;
// }

//*************************************** SUBSTR **************************************//

// int main()
// {
//     char const *s = "Pwet, pwet!";
//     unsigned int start = 7;
//     size_t len = 5;
//     char *sub = ft_substr(s, start, len);
    
//     if (sub == NULL)
//         return 1;
//     printf("base: %s\n", s);
//     printf("Sub: %s\n", sub);
//     free(sub);
// }

//*************************************** STRJOIN *************************************//

// int main()
// {
//     char const *s1 = "Pwet";
//     char const *s2 = ", Pwet !";
//     char *res = ft_strjoin(s1, s2);

//     if (res == NULL)
//         return 1;
//     printf("%s\n", res);
//     free(res);
//     return 0;
// }

//*************************************** STRTRIM *************************************//

// int main()
// {
//     char const *s1 = "!!PWET, PWET!!";
//     char const *set = "! ";
//     char *trim = ft_strtrim(s1, set);

//     if (trim == NULL)
//         return 1;
//     printf("'%s'\n", s1);
//     printf("'%s'\n", trim);
//     free(trim);
// }

//*************************************** SPLIT ***************************************//

// int main()
// {
//     char const *s = "Pwet, Pwet pouet pwet PWET";
//     char c = ' ';
//     char **res = ft_split(s, c);

//     if (res == NULL)
//         return 1;
//     printf("mot 0: %s\n", res[0]);
//     printf("mot 1: %s\n", res[1]);
//     printf("mot 2: %s\n", res[2]);
//     printf("mot 3: %s\n", res[3]);
//     printf("mot 4: %s\n", res[4]);
//     printf("mot 5: %s\n", res[5]);
//     free(res[0]);
//     free(res[1]);
//     free(res[2]);
//     free(res[3]);
//     free(res[4]);
//     free(res[5]);   
//     free(res);
//     return 0;
// }

//*************************************** ITOA ****************************************//

// int main()
// {
//     int num = -112345;
//     char *res = ft_itoa(num);

//     printf("Converted number: %s\n", res);
//     free(res);

//     return 0;
// }

//*************************************** STRMAPI *************************************//

// char transform_char(unsigned int index, char c) 
// {
//     (void)index;
//     return c + 2;
// }

// int main() {
//     char *input = "hello";
//     char *result;
//     result = ft_strmapi(input, transform_char);
    
//     if (result == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     printf("Transformed string: %s\n", result);
//     free(result);
//     return 0;
// }

//*************************************** STRITERI ************************************//

// void transform_char(unsigned int index, char *c)
// {
//     (void)index;
//     if (*c >= 'a' && *c <= 'z') 
//         *c -= 32; 
// }

// int main() {
//     char str[] = "hello";

//     ft_striteri(str, transform_char);
//     printf("Transformed string: %s\n", str);
//     return 0;
// }

//*************************************** PUTCHAR_FD **********************************//

// int main() 
// {
//     char c = 'A';

//     ft_putchar_fd(c, 1);
//     ft_putchar_fd('\n', 1);
//     return 0;
// }

//*************************************** PUTSTR_FD ***********************************//

// int main()
// {
//     ft_putstr_fd("Bonjour\n", 1);
//     ft_putstr_fd("coucou", 1);
// }

//*************************************** PUTENDL_FD **********************************//

// int main()
// {
//     ft_putendl_fd("Bonjour", 1);
//     ft_putendl_fd("coucou", 1);
// }

//*************************************** PUTNBR_FD ***********************************//

// int main(void)
// {
//     ft_putnbr_fd(12345, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-6789, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);

//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);

//     return 0;
// }

//*************************************** FT_LST_NEW **********************************//

// int main() 
// {
//     int value = 452;
//     t_list *new_node = ft_lstnew(&value);

//     printf("Liste : %d\n", *(int *)new_node->content);
//     free(new_node); 
//     return 0;
// }

//*************************************** FT_LST_ADD_FRONT ****************************//

// int main() {
//     t_list *list = NULL;
//     int value1 = 42;
//     t_list *node1 = ft_lstnew(&value1);
    
//     ft_lstadd_front(&list, node1);
//     printf("List node content: %d\n", *(int *)list->content);
//     free(node1);
//     return 0;
// }

//*************************************** FT_LSTSIZE **********************************//

// int main() 
// {
//     t_list *list = NULL;
//     int value1 = 42;
//     int value2 = 84;

//     t_list *node1 = ft_lstnew(&value1);
//     t_list *node2 = ft_lstnew(&value2);

//     node1->next = node2;
//     list = node1;
//     int size = ft_lstsize(list);
//     printf("List size: %d\n", size);
//     free(node1);
//     free(node2); 
//     return 0;
// }

//*************************************** FT_LSTLAST **********************************//

// int main() 
// {
//     t_list *list = NULL;
//     int value1 = 42;
//     int value2 = 84;
//     int value3 = 21;
//     t_list *node1 = ft_lstnew(&value1);
//     t_list *node2 = ft_lstnew(&value2);
//     t_list *node3 = ft_lstnew(&value3);

//     node1->next = node2;
//     node2->next = node3;
//     list = node1;
//     t_list *last = ft_lstlast(list);
//     if (last != NULL) {
//         printf("Last element content: %d\n", *(int *)(last->content));
//     } else {
//         printf("List is empty.\n");
//     }
//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }

//*************************************** FT_LST_ADD_BACK *****************************//

// int main()
// {
//     t_list *list = NULL;
//     int value1 = 42;
//     int value2 = 84;
//     int value3 = 21;
//     t_list *node1 = ft_lstnew(&value1);
//     t_list *node2 = ft_lstnew(&value2);
//     t_list *node3 = ft_lstnew(&value3);

//     ft_lstadd_back(&list, node1);
//     ft_lstadd_back(&list, node2);
//     ft_lstadd_back(&list, node3);
//     t_list *current = list;
//     while (current != NULL)
//     {
//         printf("Node content: %d\n", *(int *)(current->content));
//         current = current->next;
//     }
//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }

//*************************************** FT_LSTDELONE ********************************//

// void del_content(void *content) 
// {
//     (void)content;
// }

// int main() {

//     int *value = malloc(sizeof(int));
//     *value = 42;
//     t_list *node = ft_lstnew(value);


//     printf("Before deletion: %d\n", *(int *)(node->content));


//     ft_lstdelone(node, del_content);

//     return 0;
// }
//*************************************** FT_LSTCLEAR *********************************//

// void del_content(void *content) 
// {
//     (void)content;
// }

// int main() {
//     // Création de quelques nœuds de liste
//     int *value1 = malloc(sizeof(int));
//     int *value2 = malloc(sizeof(int));
    
//     *value1 = 42;
//     *value2 = 84;
//     t_list *node1 = ft_lstnew(value1);
//     t_list *node2 = ft_lstnew(value2);
//     node1->next = node2;
//     printf("Before clear:\n");
//     printf("Node 1 content: %d\n", *(int *)(node1->content));
//     printf("Node 2 content: %d\n", *(int *)(node2->content));
//     t_list *head = node1;
//     ft_lstclear(&head, del_content);
//     if (head == NULL) {
//         printf("After clear: List is empty.\n");
//     } else {
//         printf("List still has nodes.\n");
//     }
//     return 0;
// }

//*************************************** FT_LSTITER **********************************//

// void print_content(void *content) {
//     printf("%d\n", *(int *)content);
// }

// int main() {

//     int *value1 = malloc(sizeof(int));
//     int *value2 = malloc(sizeof(int));
//     int *value3 = malloc(sizeof(int));
//     *value1 = 42;
//     *value2 = 84;
//     *value3 = 21;
//     t_list *node1 = ft_lstnew(value1);
//     t_list *node2 = ft_lstnew(value2);
//     t_list *node3 = ft_lstnew(value3);

//     node1->next = node2;
//     node2->next = node3;
//     printf("Contents of the list:\n");
//     ft_lstiter(node1, print_content);
//     free(value1);
//     free(value2);
//     free(value3);
//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }

//*************************************** FT_LSTMAP ***********************************//

// void *double_content(void *content) 
// {
//     int *new_content = malloc(sizeof(int));
//     if (new_content) 
//     {
//         *new_content = (*(int *)content) * 2;
//     }
//     return new_content;
// }

// void free_content(void *content) 
// {
//     free(content);
// }

// int main() {
 
//     int *value1 = malloc(sizeof(int));
//     int *value2 = malloc(sizeof(int));
//     int *value3 = malloc(sizeof(int));
//     *value1 = 1;
//     *value2 = 2;
//     *value3 = 3;
//     t_list *node1 = ft_lstnew(value1);
//     t_list *node2 = ft_lstnew(value2);
//     t_list *node3 = ft_lstnew(value3);
//     node1->next = node2;
//     node2->next = node3;
//     t_list *new_list = ft_lstmap(node1, double_content, free_content);

//     printf("Contents of the new list after mapping:\n");
//     t_list *current = new_list;
//     while (current) 
//     {
//         printf("%d\n", *(int *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&new_list, free_content);
//     ft_lstclear(&node1, free_content);
//     return 0;
// }

