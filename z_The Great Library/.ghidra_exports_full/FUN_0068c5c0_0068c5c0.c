// FUN_0068c5c0 @ 0068c5c0 body=[[0068c5c0, 0068c656]]


void FUN_0068c5c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x1c);
  iVar5 = *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2;
  local_8 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xadc) + local_8 * 4);
      if (((iVar2 != 0) && (*(char *)(iVar2 + 0x31) != '\0')) &&
         (iVar3 = *(int *)(iVar2 + 0xe88), iVar3 != 0)) {
        uVar4 = (iVar1 / 1000 - *(int *)(iVar2 + 0x1404)) * 0x14;
        *(uint *)(iVar3 + 0x10) = (uVar4 + 100) * 0x8000;
        *(uint *)(iVar3 + 0x14) =
             (((int)uVar4 >> 0x1f) + (uint)(0xffffff9b < uVar4)) * 0x8000 | uVar4 + 100 >> 0x11;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar5);
  }
  return;
}

