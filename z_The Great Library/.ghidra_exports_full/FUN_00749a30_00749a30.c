// FUN_00749a30 @ 00749a30 body=[[00749a30, 00749abb] [00749abf, 00749b61] [00749b65, 00749b96] [00749b9a, 00749bae]]


undefined1 * FUN_00749a30(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00bac7a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x18))(local_34);
  local_8 = 1;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (*(int *)(*(int *)(in_ECX + 0x38) + 0x164) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(*(int *)(in_ECX + 0x38) + 0x15c);
  }
  local_18 = *(int *)(iVar3 + 0x6c);
  if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                       *(int *)(*(int *)(in_ECX + 0x3c) + 4) * 0x10) + local_18 * 4) !=
      *(int *)(in_ECX + 4)) {
    cVar1 = FUN_00563fb0(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 0x38));
    if (cVar1 != '\0') goto LAB_00749b65;
  }
  FUN_00448740(&DAT_00dee2cc,1);
  uVar2 = FUN_00564220(local_34,*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x38));
  local_8 = 2;
  FUN_00448aa0(uVar2,0,0xffffffff);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
LAB_00749b65:
  uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x30))(local_34);
  local_8 = 3;
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

