// FUN_0093c590 @ 0093c590 body=[[0093c590, 0093c62d]]


undefined4 FUN_0093c590(int param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar4 = in_ECX[1] - *in_ECX >> 3;
  local_8 = 0;
  if (0 < iVar4) {
    iVar1 = *(int *)(param_1 + 4);
    puVar5 = (undefined4 *)(*in_ECX + 4);
    do {
      local_c = *puVar5;
      FUN_0093d080(&local_c);
      if ((local_10 != iVar1) &&
         (iVar3 = 0, 0 < (int)(*(int *)(local_10 + 0x14) - *(int *)(local_10 + 0x10) & 0xffffffc0U))
         ) {
        piVar2 = (int *)(*(int *)(local_10 + 0x10) + 0xc);
        do {
          if (*(char *)(*piVar2 + 0x1cc) != '\0') {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 0x10;
        } while (iVar3 < *(int *)(local_10 + 0x14) - *(int *)(local_10 + 0x10) >> 6);
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 2;
    } while (local_8 < iVar4);
  }
  return 0;
}

