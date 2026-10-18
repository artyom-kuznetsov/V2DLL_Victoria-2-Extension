// FUN_008a41e0 @ 008a41e0 body=[[008a41e0, 008a42b1]]


void FUN_008a41e0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  char *pcVar3;
  
  if (param_2 < 0x934) {
    if (param_2 == 0x933) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0x4c6) {
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      return;
    }
    if (param_2 == 0x6e6) {
      uVar2 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x20) = uVar2;
      return;
    }
  }
  else if (param_2 == 0x934) {
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    uVar2 = FUN_00976f50();
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
  }
  return;
}

