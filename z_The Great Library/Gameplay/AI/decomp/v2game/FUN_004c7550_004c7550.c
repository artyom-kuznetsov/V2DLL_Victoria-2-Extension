// FUN_004c7550 @ 004c7550 body=[[004c7550, 004c756c] [004c7570, 004c75fb]]


void FUN_004c7550(int param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_2 == '\0') {
    iVar1 = 0;
    piVar2 = (int *)(in_ECX + 0x160);
    do {
      if (param_1 == *piVar2) {
        *(undefined4 *)(in_ECX + 0x160 + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 6);
    iVar1 = 0;
    piVar2 = (int *)(in_ECX + 0x178);
    do {
      if (param_1 == *piVar2) {
        *(undefined4 *)(in_ECX + 0x178 + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
    iVar1 = 0;
    piVar2 = (int *)(in_ECX + 0x188);
    do {
      if (param_1 == *piVar2) {
        *(undefined4 *)(in_ECX + 0x188 + iVar1 * 4) = 0;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
    if (param_1 == *(int *)(in_ECX + 0x198)) {
      *(undefined4 *)(in_ECX + 0x198) = 0;
      return;
    }
    if (param_1 == *(int *)(in_ECX + 0x19c)) {
      *(undefined4 *)(in_ECX + 0x19c) = 0;
    }
  }
  return;
}

