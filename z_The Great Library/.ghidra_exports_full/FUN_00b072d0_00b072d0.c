// FUN_00b072d0 @ 00b072d0 body=[[00b072d0, 00b072dc] [00b072e0, 00b072f7]]


void FUN_00b072d0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}

