// FUN_0047d5b0 @ 0047d5b0 body=[[0047d5b0, 0047d621]]


void FUN_0047d5b0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  
  if (param_2 == 0xb) {
    iVar3 = in_ECX + 8;
  }
  else {
    if (param_2 == 0xe5) {
      pcVar2 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
      return;
    }
    if (param_2 != 0x344) {
      return;
    }
    iVar3 = in_ECX + 0x28;
  }
  iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar3);
  if (iVar3 == 0) {
    FUN_009a1140();
  }
  return;
}

