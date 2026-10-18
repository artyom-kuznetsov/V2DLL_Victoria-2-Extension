// FUN_009026c0 @ 009026c0 body=[[009026c0, 00902751]]


void FUN_009026c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x344) {
    puVar4 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_10);
    *(undefined4 *)(in_ECX + 0x20) = *puVar4;
    *(undefined4 *)(in_ECX + 0x24) = puVar4[1];
  }
  else {
    if (param_2 == 0x4c6) {
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
      return;
    }
    if (param_2 == 0x6e6) {
      uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x28) = uVar2;
      return;
    }
  }
  return;
}

