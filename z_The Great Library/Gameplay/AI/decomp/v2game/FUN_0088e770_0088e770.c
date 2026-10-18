// FUN_0088e770 @ 0088e770 body=[[0088e770, 0088e7cb]]


void FUN_0088e770(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (param_2 == 0x344) {
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,&param_1);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar3;
  }
  else if (param_2 == 0x714) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    return;
  }
  return;
}

