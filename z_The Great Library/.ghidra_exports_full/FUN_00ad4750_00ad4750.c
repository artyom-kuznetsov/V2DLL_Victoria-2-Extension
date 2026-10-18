// FUN_00ad4750 @ 00ad4750 body=[[00ad4750, 00ad475c] [00ad4760, 00ad477a]]


void FUN_00ad4750(char *param_1)

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

