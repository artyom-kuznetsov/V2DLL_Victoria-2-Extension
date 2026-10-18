// FUN_00989030 @ 00989030 body=[[00989030, 0098904b]]


void FUN_00989030(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00448740(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  return;
}

