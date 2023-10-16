#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string.
 */
static int count_words(const char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            if (in_word)
                in_word = 0;
        }
        else
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        str++;
    }
    return count;
}

/**
 * strtow - Split a string into words
 * @str: The input string
 *
 * Return: An array of strings representing the words.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);
    char **words = malloc((num_words + 1) * sizeof(char *));

    if (words == NULL)
        return NULL;

    int word_len = 0;
    int word_index = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            word_len++;
        else if (word_len > 0)
        {
            words[word_index] = malloc(word_len + 1);

            if (words[word_index] == NULL)
            {
                for (int j = 0; j < word_index; j++)
                    free(words[j]);
                free(words);
                return NULL;
            }

            strncpy(words[word_index], str + i - word_len, word_len);
            words[word_index][word_len] = '\0';
            word_index++;
            word_len = 0;
        }
    }

    if (word_len > 0)
    {
        words[word_index] = malloc(word_len + 1);

        if (words[word_index] == NULL)
        {
            for (int j = 0; j <= word_index; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        strncpy(words[word_index], str + strlen(str) - word_len, word_len);
        words[word_index][word_len] = '\0';
    }

    words[num_words] = NULL;
    return words;
}

