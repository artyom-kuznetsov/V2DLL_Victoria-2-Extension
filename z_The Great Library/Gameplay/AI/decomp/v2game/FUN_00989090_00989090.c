// FUN_00989090 @ 00989090 body=[[00989090, 009890bb]]


void FUN_00989090(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_005484e0(param_1,in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  return;
}

