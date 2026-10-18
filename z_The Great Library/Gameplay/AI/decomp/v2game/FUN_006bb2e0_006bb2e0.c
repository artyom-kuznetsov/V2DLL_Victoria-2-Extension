// FUN_006bb2e0 @ 006bb2e0 body=[[006bb2e0, 006bb749] [006bb74d, 006bb771] [006bb775, 006bb7a1]]


void FUN_006bb2e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  code *pcVar7;
  int *in_ECX;
  int iVar8;
  undefined **local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9eec0;
  local_14 = ExceptionList;
  iVar8 = in_ECX[0x173];
  if (iVar8 != 0) {
    iVar1 = in_ECX[0x266];
    iVar2 = *(int *)(iVar8 + 0x54);
    iVar8 = iVar8 + -8;
    local_78 = 0x18d;
    local_7c = CMapPoint::vftable;
    local_74 = 0.0;
    local_70 = 0;
    if (iVar1 == 1) {
      local_74 = *(float *)(iVar2 + 0x54) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x54) = local_74;
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    }
    else if (iVar1 == 9) {
      local_74 = *(float *)(iVar2 + 100) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 100) = local_74;
      *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x68);
      DAT_012586da = 1;
    }
    else if (iVar1 == 3) {
      local_74 = *(float *)(iVar2 + 0x1b4) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x1b4) = local_74;
      *(undefined4 *)(iVar2 + 0x1b8) = *(undefined4 *)(iVar2 + 0x1b8);
      FUN_006be8a0(iVar8);
    }
    else if (iVar1 == 4) {
      local_74 = *(float *)(iVar2 + 0x1c4) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x1c4) = local_74;
      *(undefined4 *)(iVar2 + 0x1c8) = *(undefined4 *)(iVar2 + 0x1c8);
      FUN_006be9d0(iVar8);
    }
    else if (iVar1 == 2) {
      local_74 = (float)*(int *)(iVar2 + 0x7c) - 1.0;
      ExceptionList = &local_14;
      *(int *)(iVar2 + 0x7c) = (int)local_74;
      *(int *)(iVar2 + 0x80) = (int)(float)*(int *)(iVar2 + 0x80);
      FUN_004c6ad0();
      FUN_005cb2c0(iVar8);
    }
    else if (iVar1 == 5) {
      local_74 = *(float *)(iVar2 + 0x44) - 0.3;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x44) = local_74;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x48);
      (**(code **)(*in_ECX + 0x38))();
      FUN_00645da0();
    }
    else if (iVar1 == 6) {
      iVar1 = *(int *)(in_ECX[0x2aa] + 0x58);
      iVar3 = *(int *)(iVar2 + 0x330);
      local_70 = *(undefined4 *)(iVar3 + 0xc + iVar1 * 0x10);
      iVar4 = *(int *)(in_ECX[0x2aa] + 0x58);
      local_74 = *(float *)(iVar3 + 8 + iVar1 * 0x10) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar3 + 8 + iVar4 * 0x10) = local_74;
      *(undefined4 *)(iVar3 + 0xc + iVar4 * 0x10) = local_70;
      cVar5 = FUN_0040b360();
      if (cVar5 != '\0') {
        FUN_004a0c40(DAT_0125870c);
        cVar5 = FUN_004946b0();
        if (cVar5 == '\0') {
          FUN_009885d0();
          local_c = 0;
          piVar6 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_34);
          pcVar7 = *(code **)(*piVar6 + 0x34);
        }
        else {
          FUN_009885d0();
          local_c = 1;
          piVar6 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_34);
          pcVar7 = *(code **)(*piVar6 + 0x38);
        }
        (*pcVar7)();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      FUN_006b6e70(in_ECX,iVar8);
    }
    else if (iVar1 == 7) {
      local_74 = *(float *)(iVar2 + 0x1d4) - 0.1;
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x1d4) = local_74;
      *(undefined4 *)(iVar2 + 0x1d8) = *(undefined4 *)(iVar2 + 0x1d8);
      FUN_006bea70(in_ECX,iVar8);
    }
    else {
      ExceptionList = &local_14;
      if (iVar1 == 8) {
        ExceptionList = &local_14;
        if (*(int *)(iVar2 + 0xb4) < *(int *)(*(int *)(iVar2 + 200) + 4 + DAT_012589a8 * 0x24)) {
          ExceptionList = &local_14;
          FUN_004c3f30(*(int *)(iVar2 + 0xb4));
        }
        iVar8 = FUN_004c8b40();
        if (iVar8 != 0) {
          iVar8 = FUN_004c8b40();
          local_70 = *(undefined4 *)(iVar8 + 0xc);
          local_74 = *(float *)(iVar8 + 8) - 0.1;
          FUN_004c8bb0(&local_7c);
        }
      }
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("nudge_x",7);
    local_c = 2;
    FUN_00988c70(local_50);
    local_c = CONCAT31(local_c._1_3_,3);
    (**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_6c);
    FUN_009e7500();
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    *(undefined1 *)(iVar2 + 0x28) = 1;
    *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
  }
  ExceptionList = local_14;
  return;
}

