#include "utils.h"

// #############################################################################
// ### UTILITY FUNCTIONS
// #############################################################################

/**
 * @brief Trims whitespace from a given character array
 * @param to_trim - pointer to array to trim whitespace from
 */
void trimwhitespace(char *to_trim)
{
    char *j;
    while (isspace(*to_trim))
    {
        to_trim++;
    }
    size_t length = strlen(to_trim);
    j = to_trim + length - 1;
    while (isspace(*j))
    {
        *j = 0;
        j--;
    }
    strcat(j, "\n");
}