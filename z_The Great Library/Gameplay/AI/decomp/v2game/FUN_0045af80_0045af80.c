// FUN_0045af80 @ 0045af80 body=[[0045af80, 0045b01f]]


int FUN_0045af80(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  iVar2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU)) {
    do {
      piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x18) + local_10 * 4) + 0x3c);
      local_c = 3;
      do {
        iVar2 = *piVar3;
        iVar4 = 0;
        if (0 < (int)(piVar3[1] - iVar2 & 0xfffffffcU)) {
          do {
            cVar1 = FUN_00467460(*(undefined4 *)(iVar2 + iVar4 * 4));
            if (cVar1 != '\0') {
              local_8 = local_8 + 1;
            }
            iVar2 = *piVar3;
            iVar4 = iVar4 + 1;
          } while (iVar4 < piVar3[1] - iVar2 >> 2);
        }
        piVar3 = piVar3 + 4;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_10 = local_10 + 1;
      iVar2 = local_8;
    } while (local_10 < *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
  }
  return iVar2;
}

