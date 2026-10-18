// FUN_009eafc0 @ 009eafc0 body=[[009eafc0, 009eb0ad] [009eb0b1, 009eb0be] [009eb0c2, 009eb1d2] [009eb1d6, 009eb1eb]]


int FUN_009eafc0(char *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined1 local_164 [12];
  undefined *puStack_158;
  uint *local_154;
  char *local_150;
  undefined ***pppuStack_14c;
  undefined **local_c4 [18];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5d8d6;
  local_10 = ExceptionList;
  local_8 = 0;
  if (in_stack_00000018 < 0x10) {
    pppuStack_14c = (undefined ***)&param_1;
  }
  else {
    pppuStack_14c = (undefined ***)param_1;
    ExceptionList = &local_10;
    if (param_1 == (char *)0x0) goto LAB_009eb010;
  }
  ExceptionList = &local_10;
  if (*(char *)pppuStack_14c != '\0') {
    local_150 = (char *)0x9eb005;
    ExceptionList = &local_10;
    iVar3 = PHYSFS_exists();
    if (iVar3 != 0) {
      pppuStack_14c = (undefined ***)0x3c;
      local_150 = (char *)0x9eb0e6;
      iVar3 = FUN_00aae9af();
      local_8._0_1_ = 3;
      if (iVar3 == 0) {
        local_18 = (int *)0x0;
      }
      else {
        local_14 = local_164;
        local_150 = (char *)0xf;
        local_154 = (uint *)0x0;
        local_164[0] = 0;
        local_18 = (int *)iVar3;
        FUN_00409350(&DAT_00ded94d,0);
        local_18 = (int *)FUN_00992740(iVar3,&param_1,0);
      }
      piVar1 = local_18;
      local_8._0_1_ = 0;
      pppuStack_14c = (undefined ***)0x9eb13b;
      pppuStack_14c = (undefined ***)(**(code **)(*local_18 + 0x38))();
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_48 = 0xf;
      local_4c = 0;
      local_5c = 0;
      local_8._0_1_ = 6;
      local_150 = (char *)0x9eb163;
      FUN_009d7290();
      local_8 = CONCAT31(local_8._1_3_,7);
      local_150 = (char *)0x9eb173;
      pppuStack_14c = (undefined ***)&local_7c;
      (**(code **)(*piVar1 + 8))();
      local_150 = local_24;
      local_154 = (uint *)local_20;
      local_14 = (undefined1 *)0x0;
      puStack_158 = (undefined *)0x9eb189;
      cVar2 = FUN_009eb1f0();
      if (cVar2 != '\0') {
        local_150 = (char *)in_stack_00000020;
        local_154 = (uint *)0x9eb199;
        local_14 = (undefined1 *)FUN_009eaec0();
        if (local_14 != (undefined1 *)0x0) {
          local_150 = (char *)0x9eb1aa;
          cVar2 = FUN_009eaf50();
          if (cVar2 == '\0') {
            local_14 = (undefined1 *)0x0;
          }
        }
      }
      local_150 = (char *)0x1;
      local_154 = (uint *)0x9eb1bc;
      (**(code **)*local_18)();
      local_154 = (uint *)0x9eb1c4;
      FUN_009d6f00();
      if (0xf < in_stack_00000018) {
        local_154 = (uint *)param_1;
                    /* WARNING: Subroutine does not return */
        puStack_158 = &UNK_009eb1d3;
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return (int)local_14;
    }
  }
LAB_009eb010:
  pppuStack_14c = (undefined ***)0xf;
  local_150 = "DirectSound.cpp";
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_154 = (uint *)0x9eb02c;
  FUN_00409350();
  pppuStack_14c = (undefined ***)0x1000;
  local_154 = local_40;
  local_150 = (char *)0x26c;
  local_8._0_1_ = 1;
  puStack_158 = (undefined *)0x9eb04a;
  FUN_004015b0();
  local_8._0_1_ = 2;
  pppuStack_14c = (undefined ***)0x9eb05d;
  local_150 = (char *)FUN_00987d20();
  pppuStack_14c = (undefined ***)param_1;
  if (in_stack_00000018 < 0x10) {
    pppuStack_14c = (undefined ***)&param_1;
  }
  local_154 = (uint *)0x9eb06f;
  local_154 = (uint *)FUN_00418e30();
  puStack_158 = (undefined *)0x9eb075;
  FUN_00401280();
  pppuStack_14c = local_c4;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_150 = (char *)0x9eb087;
  FUN_00987ac0();
  pppuStack_14c = local_c4;
  local_c4[0] = std::ios_base::vftable;
  local_150 = (char *)0x9eb09d;
  FUN_00aad52d();
  if (0xf < local_2c) {
    pppuStack_14c = (undefined ***)local_40[0];
                    /* WARNING: Subroutine does not return */
    local_150 = &UNK_009eb0ae;
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000018) {
    pppuStack_14c = (undefined ***)param_1;
                    /* WARNING: Subroutine does not return */
    local_150 = &UNK_009eb0bf;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return 0;
}

