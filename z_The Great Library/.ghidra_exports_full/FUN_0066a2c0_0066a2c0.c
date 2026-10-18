// FUN_0066a2c0 @ 0066a2c0 body=[[0066a2c0, 0066a437] [0066a43b, 0066a451] [0066a455, 0066a529] [0066a52d, 0066a543] [0066a547, 0066a563] [0066a567, 0066a577]]


void FUN_0066a2c0(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uVar6;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  int local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
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
  puStack_c = &LAB_00b45241;
  local_10 = ExceptionList;
  uVar6 = 0;
  if (((in_ECX[0x746] != 0) && (*(char *)(in_ECX[0x746] + 0xe1) != '\0')) &&
     ((char)in_ECX[0x17] != '\0')) {
    ExceptionList = &local_10;
    iVar5 = FUN_00aae9af(0x5c);
    local_8 = 0;
    local_84 = iVar5;
    if (iVar5 != 0) {
      uVar6 = FUN_0068b610(DAT_012588e8);
      uVar6 = FUN_0072cef0(iVar5,uVar6,0);
    }
    local_8 = 0xffffffff;
    iVar5 = (**(code **)(*in_ECX + 0x44))();
    (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar6);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  cVar4 = (**(code **)(*in_ECX + 0x144))();
  if ((cVar4 == '\0') || (cVar4 = FUN_00867f20(), cVar4 != '\0')) {
    pcVar1 = *(code **)(*in_ECX + 0x144);
    *(bool *)(in_ECX + 0x54e) = (char)in_ECX[0x54e] == '\0';
    cVar4 = (*pcVar1)();
    if ((cVar4 == '\0') || ((char)in_ECX[0x54e] != '\0')) {
      cVar4 = (**(code **)(*in_ECX + 0x144))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return;
      }
      if ((char)in_ECX[0x54e] != '\0') {
        ExceptionList = local_10;
        return;
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 4;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 5;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("on_pause",8);
      local_8 = CONCAT31(local_8._1_3_,6);
      (**(code **)(*in_ECX + 0x120))(local_2c,local_64,local_bc,0);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      uVar2 = local_bc[0];
      uVar3 = local_a8;
    }
    else {
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 1;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 2;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350("on_unpause",10);
      local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(*in_ECX + 0x120))(local_80,local_48,local_a0,0);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      uVar2 = local_a0[0];
      uVar3 = local_8c;
    }
    if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

