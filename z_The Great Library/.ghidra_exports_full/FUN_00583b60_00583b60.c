// FUN_00583b60 @ 00583b60 body=[[00583b60, 00583bfa]]


void FUN_00583b60(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x26a) {
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    return;
  }
  if (param_2 != 0x2f0) {
    if (param_2 != 0x344) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1ce0();
    return;
  }
  puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
  *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
  return;
}

