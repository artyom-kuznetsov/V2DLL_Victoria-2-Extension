// FUN_004012f0 @ 004012f0 body=[[004012f0, 00401317]]


void FUN_004012f0(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  return;
}

