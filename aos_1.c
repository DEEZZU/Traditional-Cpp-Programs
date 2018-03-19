//recursively visit diretories
#include <unistd.h>
#include <sys/types.h> // ino_t of dirent-structure
#include <sys/stat.h>
#include <dirent.h>  // for dir functions
#include <stdio.h>
#include <string.h>
#include <time.h>
void listdir(const char *name, int indent)
{
    DIR *dir; // data type used by opendir() and other directory system calls , represents : directory streams

    struct stat fileStat; // predefined datatype to store information about files
   
    struct dirent *entry; //file serial no+name  
// struct vs stream ??

    char date[10]; //date's array

    if (!(dir = opendir(name)))
        return;

    while ((entry = readdir(dir)) != NULL) 
	{
        
	if (entry->d_type == DT_DIR) 
		{
            	char path[1024];
            	if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                	continue;
            	snprintf(path, sizeof(path), "%s/%s", name, entry->d_name);
            	printf("%*s[%s]\n", indent, "", entry->d_name);
            	listdir(path, indent + 2);
        	}
	else 
		{
		printf("%*s- %s", indent, "", entry->d_name);
		stat(entry->d_name, &fileStat);    
		printf(" %d",fileStat.st_size);

		//printf("%s\n",ret.st_mode);
		printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
	    	printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
	    	printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
	   	printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
	    	printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
	    	printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
	    	printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
	    	printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
	    	printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
	    	printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
	    	strftime(date, 10, "%d-%m-%y", gmtime(&(fileStat.st_mtime)));
	    	printf("The file  was last modified at %s\n", date);
	    	printf("\n\n");
        	}
    	}
    closedir(dir);
}

int main(void) {
    listdir(".", 0); //current directory 
    return 0;
}
