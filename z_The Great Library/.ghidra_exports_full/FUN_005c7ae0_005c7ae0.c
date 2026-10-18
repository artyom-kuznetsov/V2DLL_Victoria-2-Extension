// FUN_005c7ae0 @ 005c7ae0 body=[[005c7ae0, 005c7b78]]


void FUN_005c7ae0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  FUN_005c7b80();
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    if (in_ECX[0x2c] < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe4)) {
      in_ECX[0x6f] = in_ECX[0x6f] + 1;
    }
    else {
      in_ECX[0x6f] = 0;
    }
    (**(code **)(*in_ECX + 0x7c))(&local_8);
    if (0 < (int)local_8) {
      piVar1 = (int *)in_ECX[0xe];
      iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe8);
      while (piVar1 != (int *)0x0) {
        iVar3 = *piVar1;
        piVar1 = (int *)piVar1[2];
        if (iVar2 < *(int *)(iVar3 + 0x3c)) {
          iVar3 = *(int *)(iVar3 + 0x3c) - (int)local_8;
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          FUN_005c02f0(iVar3);
        }
      }
    }
  }
  return;
}

