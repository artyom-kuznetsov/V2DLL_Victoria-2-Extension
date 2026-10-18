// FUN_007a8dd0 @ 007a8dd0 body=[[007a8dd0, 007a8e97] [007a8e9b, 007a8ee6] [007a8eea, 007a8f57] [007a8f5b, 007a8f75] [007a8f79, 007a8f89]]


/* WARNING: Removing unreachable block (ram,0x007a8f6d) */

void FUN_007a8dd0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b91350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a8070();
  if (((*(int *)(in_ECX + 0x398) != 0) && (*(int *)(in_ECX + 0x3a0) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x3a0) + 0x4c) == 1)) {
    FUN_007a8a10();
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x38c) + 0x18) + 0x34))();
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("LoginNameEditbox",0x10);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x38c) + 0x40))(local_48);
  iVar2 = FUN_00475500();
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x40))(iVar2 + 0x108);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("LoginNameEditbox",0x10);
  local_8 = 1;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x38c) + 0x40))(local_48);
  FUN_009b6400(uVar3);
  local_8 = 0xffffffff;
  if (local_34 < 0x10) {
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 2;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("LoginResultText",0xf);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(**(int **)(in_ECX + 0x38c) + 0x38))(local_2c);
    FUN_009e7500();
    if (local_18 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

