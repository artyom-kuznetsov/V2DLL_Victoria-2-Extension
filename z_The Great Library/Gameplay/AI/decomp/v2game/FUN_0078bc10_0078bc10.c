// FUN_0078bc10 @ 0078bc10 body=[[0078bc10, 0078bcd7] [0078bcdb, 0078bd01] [0078bd05, 0078bd99] [0078bd9d, 0078be11] [0078be15, 0078bed7] [0078bedb, 0078beeb]]


void FUN_0078bc10(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  undefined8 uVar7;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7ab90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = (**(code **)(*in_ECX + 0x38))();
  if (cVar3 == '\0') {
    (**(code **)(*in_ECX + 0x28))();
  }
  if ((*(int *)(in_ECX[4] + 0x74) == in_ECX[3]) && (cVar3 = FUN_0059c160(in_ECX[3]), cVar3 != '\0'))
  {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfac10,4);
    local_8 = 0;
    uVar4 = FUN_005a9230(local_68);
    local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)(*(int *)in_ECX[1] + 0x3c))(local_30);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8 = 0xffffffff;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[3] + 0x1c))(&local_14);
    uVar7 = __allmul(*piVar5,*piVar5 >> 0x1f,100000,0);
    iVar6 = __alldiv(uVar7,1000,0);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("progress",8);
    local_8 = 2;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[1] + 0x44))(local_30);
    (**(code **)(*piVar5 + 0x48))(iVar6 / 1000);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if ((*(int *)(*(int *)(in_ECX[3] + 0x10) + 0x38) - *(int *)(*(int *)(in_ECX[3] + 0x10) + 0x34) &
        0xfffffff8U) != 0) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("attacker_flag",0xd);
      local_8 = 3;
      local_14 = *(int *)(*(int *)(in_ECX[3] + 0x10) + 0x34);
      (**(code **)(*(int *)in_ECX[1] + 0x44))(local_30);
      FUN_00646670();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
    local_8 = 0xffffffff;
    if ((*(int *)(*(int *)(in_ECX[3] + 0x14) + 0x38) - *(int *)(*(int *)(in_ECX[3] + 0x14) + 0x34) &
        0xfffffff8U) == 0) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("defender_flag",0xd);
      local_8 = 5;
      local_14 = *(int *)(in_ECX[3] + 0x18) + 0x130;
      (**(code **)(*(int *)in_ECX[1] + 0x44))(local_4c);
      FUN_00646670();
      uVar1 = local_4c[0];
      uVar2 = local_38;
    }
    else {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("defender_flag",0xd);
      local_8 = 4;
      local_14 = *(int *)(*(int *)(in_ECX[3] + 0x14) + 0x34);
      (**(code **)(*(int *)in_ECX[1] + 0x44))(local_30);
      FUN_00646670();
      uVar1 = local_30[0];
      uVar2 = local_1c;
    }
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

