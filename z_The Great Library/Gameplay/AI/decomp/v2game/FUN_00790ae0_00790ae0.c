// FUN_00790ae0 @ 00790ae0 body=[[00790ae0, 00790c5f]]


void FUN_00790ae0(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0x2d2d2d;
  iVar3 = *(int *)(*(int *)(param_1 + 600) + 0xdc);
  local_c = 0;
  iVar1 = *(int *)(iVar3 + 0x5c);
  iVar1 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  local_10 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    local_8 = 0;
    do {
      iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 200) + 4 + local_8) * 4);
      if ((((*(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) != '\0') && (*(int *)(iVar4 + 300) != 0)) &&
          (*(int *)(iVar4 + 300) != *(int *)(*(int *)(param_1 + 600) + 0xc4))) &&
         ((cVar2 = FUN_00511140(*(undefined4 *)
                                 (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 300) * 4)),
          cVar2 != '\0' && (cVar2 = FUN_00539320(), cVar2 == '\0')))) {
        local_14 = *(undefined4 *)(iVar4 + 0x128);
        iVar4 = *(int *)(iVar4 + 300);
        break;
      }
      local_8 = local_8 + 0x24;
      local_c = local_c + 1;
      iVar4 = local_10;
    } while (local_c < iVar1);
  }
  if (iVar4 == 0) {
    *param_2 = local_14;
    param_2[1] = 0;
    return;
  }
  iVar3 = FUN_00926900(*(int *)(param_1 + 600) + 0xc0);
  if (iVar3 != 0) {
    param_2[1] = iVar4;
    *param_2 = local_14;
    return;
  }
  *param_2 = 0x2d2d2d;
  param_2[1] = 0;
  return;
}

