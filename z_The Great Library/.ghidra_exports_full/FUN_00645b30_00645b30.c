// FUN_00645b30 @ 00645b30 body=[[00645b30, 00645c5f] [00645c63, 00645cb1] [00645cb5, 00645d03] [00645d07, 00645d4e] [00645d52, 00645d64]]


void FUN_00645b30(int param_1)

{
  int iVar1;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5eef0;
  local_10 = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x3a58) + 0x38) != '\0') {
    ExceptionList = &local_10;
    FUN_00418660(*(int *)(param_1 + 0x3a58));
    ExceptionList = local_10;
    return;
  }
  iVar1 = *(int *)(DAT_012586dc + 0x70);
  local_1c = *(int *)(iVar1 + 0x18) / 1000;
  local_18 = *(int *)(iVar1 + 0x1c) / 1000;
  local_14 = *(int *)(iVar1 + 0x20) / 1000;
  ExceptionList = &local_10;
  FUN_00417030(*(undefined4 *)(param_1 + 0x3a58),param_1,*(int *)(iVar1 + 0x10) / 1000,
               *(int *)(iVar1 + 0x14) / 1000,local_1c,local_18,local_14);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("building_factory_small",0x16);
  local_8 = 0;
  FUN_004182d0(*(undefined4 *)(param_1 + 0x3a58),param_1,0,local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("construction_small",0x12);
  local_8 = 1;
  FUN_004182d0(*(undefined4 *)(param_1 + 0x3a58),param_1,1,local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("construction_military_small",0x1b);
  local_8 = 2;
  FUN_004182d0(*(undefined4 *)(param_1 + 0x3a58),param_1,2,local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("construction_naval_small",0x18);
  local_8 = 3;
  FUN_004182d0(*(undefined4 *)(param_1 + 0x3a58),param_1,3,local_54);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  ExceptionList = local_10;
  return;
}

