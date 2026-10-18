// FUN_00ad4720 @ 00ad4720 body=[[00ad4720, 00ad472c] [00ad4730, 00ad474a]]


void FUN_00ad4720(char *param_1)

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

