// FUN_00822e40 @ 00822e40 body=[[00822e40, 00822f95]]


void FUN_00822e40(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  iVar3 = param_1;
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  iVar5 = *(int *)(param_2[0x37] + 0x5c);
  if (0 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24) {
    iVar1 = *(int *)(DAT_012588e8 + 0xacc);
    local_8 = (int *)(*(int *)(iVar5 + 200) + 4);
    do {
      iVar2 = *(int *)(iVar1 + *local_8 * 4);
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) != '\0') {
        param_1 = 0;
        if (*(int *)(iVar2 + 0x134) == *(int *)(iVar3 + 0x38)) {
          param_1 = 100;
          if (*(int *)(iVar2 + 300) == *(int *)(iVar3 + 0x38)) {
            param_1 = 0x96;
          }
        }
        else {
          cVar4 = FUN_0051b040(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0x38) * 4));
          if (cVar4 != '\0') {
            param_1 = 0x19;
          }
        }
        if (local_c < param_1) {
          local_14 = *(int *)(iVar2 + 0x58);
          local_c = param_1;
        }
      }
      local_8 = local_8 + 9;
      local_10 = local_10 + 1;
    } while (local_10 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24);
    if (local_14 != 0) {
      iVar5 = *param_2;
      goto LAB_00822f80;
    }
  }
  iVar5 = FUN_00825380(*(undefined4 *)(param_2[0x37] + 0x58));
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *param_2;
LAB_00822f80:
  (**(code **)(iVar5 + 0x30))();
  FUN_00825460(iVar3);
  return;
}

