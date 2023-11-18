#include <stdlib.h>

/**
 * Deletes the variable name from the environment.
 *
 * @param name The name of the variable to be deleted.
 * @return 0 on success, -1 on failure
*/
int _unsetenv(const char *name)
{
	if (!name || !*name)
	{
		return (-1);
	}
	char **env = environ;

	while (*env)
	{
		if (strcmp(*env, name) == 0)
		{
			while (*env++ != NULL)
			{
				*env = *(env + 1);
			}
			return (0);
		}
		env++;
	}
	return (-1);
}
