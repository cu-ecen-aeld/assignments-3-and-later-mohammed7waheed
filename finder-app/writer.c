
#include <stdio.h>
#include <syslog.h>


int main (int argc, char* argv[]){

openlog(NULL,0,LOG_USER);
FILE *file;
if(argc<3){
syslog(LOG_ERR,"number of arguments should be 2 not %d",argc);
return 1;
}else if (argc>3){
syslog(LOG_ERR,"number of arguments should be 2 not %d",argc);
return 1;
}
else {
file = fopen(argv[1],"w+");
if(file==NULL){
syslog(LOG_ERR,"cannot open/create this file %s",argv[1]);
return 1;
}else {
syslog(LOG_DEBUG,"Writing %s to %s",argv[2],argv[1]);
fprintf(file,"%s",argv[2]);
}

}
return 0;
}
