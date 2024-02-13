#include "main.h"

/**
* create_file - create file
* @filename: filename
* @text_content: content writtend
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
int fid;
int numlett;
int rewri;
if (!filename)
return (-1);
fid = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fid == -1)
return (-1);
if (!text_content)
text_content = "";
for (numlett = 0; text_content[numlett]; numlett++)
;
rewri = write(fid, text_content, numlett);
if (rewri == -1)
return (-1);
close(fid);
return (1);
}
