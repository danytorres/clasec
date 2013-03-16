#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int MiNum,
		num = 0;
	MiNum = rand() % 4000;

	for(puts("en que numero estoy pensando? "); num != MiNum;){
		scanf("%d", &num);
		if( num > MiNum )
    {
      puts( "Demasiado Grande" );
      puts( "En que número estoy pensando? " );
    }
    else if ( num < MiNum )
    {
      puts( "Demasiado pequeña" );
      puts( "En que número estoy pensando? " );
    }
    else
      puts( "Si, Es el\n" );
	}
	return 0;
}