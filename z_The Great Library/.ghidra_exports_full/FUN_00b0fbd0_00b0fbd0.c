// FUN_00b0fbd0 @ 00b0fbd0 body=[[00b0fbd0, 00b0fda2]]


int FUN_00b0fbd0(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  float *pfVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3980a;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  iVar5 = FUN_00ae6930(param_3);
  if (iVar5 == -1) {
    FUN_00b15da0("MotionEventTrack::AddEvent - *** WARNING: Event type \'%s\' has not yet been registered at the EMFX event manager! Event will not be added! ***"
                 ,param_3);
    ExceptionList = local_c;
    return -1;
  }
  uVar6 = FUN_00b0faa0(param_4);
  iVar2 = *(int *)(in_ECX + 0x18);
  if (iVar2 == 0) {
    uVar6 = FUN_00b131a0(param_1,param_2,iVar5,uVar6);
    local_4 = 0;
    FUN_00b0ffe0(uVar6);
  }
  else {
    if ((*(float **)(in_ECX + 0x14))[*(int *)(in_ECX + 0x18) * 4 + -4] <= param_1) {
      uVar6 = FUN_00b131a0(param_1,param_2,iVar5,uVar6);
      local_4 = 1;
      FUN_00b0ffe0(uVar6);
      local_4 = 0xffffffff;
      FUN_00b131d0(uVar4);
      ExceptionList = local_c;
      return *(int *)(in_ECX + 0x18) + -1;
    }
    fVar1 = **(float **)(in_ECX + 0x14);
    if (param_1 < fVar1 == (param_1 == fVar1)) {
      uVar7 = 0;
      param_1 = 0.0;
      if (iVar2 != 1) {
        pfVar8 = *(float **)(in_ECX + 0x14);
        do {
          if ((*pfVar8 <= fVar3) && (fVar3 < pfVar8[4] != (fVar3 == pfVar8[4]))) {
            param_1 = (float)(uVar7 + 1);
            break;
          }
          uVar7 = uVar7 + 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar7 < iVar2 - 1U);
      }
      uVar6 = FUN_00b131a0(fVar3,param_2,iVar5,uVar6);
      local_4 = 3;
      FUN_00b10030(param_1,uVar6);
      local_4 = 0xffffffff;
      FUN_00b131d0(uVar4);
      ExceptionList = local_c;
      return (int)param_1;
    }
    uVar6 = FUN_00b131a0(param_1,param_2,iVar5,uVar6);
    local_4 = 2;
    FUN_00b10030(0,uVar6);
  }
  local_4 = 0xffffffff;
  FUN_00b131d0();
  ExceptionList = local_c;
  return 0;
}

