// FUN_00ad32c0 @ 00ad32c0 body=[[00ad32c0, 00ad32cc] [00ad32d0, 00ad32e4]]


void FUN_00ad32c0(char *param_1)

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

