#include "main.h"

/**
* append_text_to_file - appends text
* @filename: filename
* @text_content: added contents
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fid;
int numlett;
int rewri;
if (!filename)
return (-1);
fid = open(filename, O_WRONLY | O_APPEND);
if (fid == -1)
return (-1);
if (text_content)
{
for (numlett = 0; text_content[numlett]; numlett++)
;
rewri = write(fid, text_content, numlett);
if (rewri == -1)
return (-1);
}
close(fid);
return (1);
}
