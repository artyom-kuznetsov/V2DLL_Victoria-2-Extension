// FUN_005d0fe0 @ 005d0fe0  (requested 005D0FE0, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005d0fe0(char param_1)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  int *unaff_ESI;
  float10 fVar6;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ca98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_ESI + 0x67) = 0;
  if (unaff_ESI[0x42] != 0) {
    if (unaff_ESI[0x43] != 0) {
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350("attack",6);
      local_8 = 0;
      (**(code **)(*(int *)unaff_ESI[0x43] + 0x124))(local_54,0);
      local_8 = 0xffffffff;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
    }
    local_8 = 0xffffffff;
    FUN_005d57a0(unaff_ESI);
    if (param_1 == '\0') {
      cVar5 = (**(code **)(*unaff_ESI + 0x38))();
      iVar3 = *(int *)(unaff_ESI[0x37] + 0x5c);
      uVar1 = *(undefined8 *)(iVar3 + 0x118);
      local_24 = *(float *)(iVar3 + 0x120);
      local_38._0_4_ = (float)uVar1;
      fVar2 = (float)local_38;
      if (cVar5 == '\0') {
        local_38 = *(undefined8 *)(iVar3 + 0x124);
        local_30 = *(float *)(iVar3 + 300);
        local_2c = uVar1;
        fVar6 = (float10)FUN_005c5c80(local_30 - local_24,fVar2 - (float)local_38);
        fVar6 = (float10)1.5707963705062866 + (float10)(float)(fVar6 - (float10)1.5707963705062866);
      }
      else {
        local_2c = *(undefined8 *)(iVar3 + 0x124);
        fVar2 = (float)local_38 - (float)local_2c;
        fVar4 = *(float *)(iVar3 + 300) - local_24;
        local_38 = uVar1;
        local_30 = local_24;
        local_24 = *(float *)(iVar3 + 300);
        fVar6 = (float10)FUN_005c5c80(fVar4,fVar2);
        fVar6 = fVar6 - (float10)1.5707963705062866;
      }
      fVar2 = (float)fVar6;
      unaff_ESI[0x2e] = (int)fVar2;
      unaff_ESI[0x2d] = (int)fVar2;
      if ((int *)unaff_ESI[0x43] != (int *)0x0) {
        (**(code **)(*(int *)unaff_ESI[0x43] + 0x94))(fVar2);
      }
      local_20 = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x124);
      local_18 = *(int *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 300);
    }
    else {
      cVar5 = (**(code **)(*unaff_ESI + 0x38))();
      iVar3 = *(int *)(unaff_ESI[0x37] + 0x5c);
      local_2c = *(undefined8 *)(iVar3 + 0x124);
      local_24 = *(float *)(iVar3 + 300);
      local_30 = *(float *)(iVar3 + 0x120);
      local_38 = *(undefined8 *)(iVar3 + 0x118);
      if (cVar5 == '\0') {
        fVar6 = (float10)FUN_005c5c80(local_30 - local_24,(float)local_2c - (float)local_38);
        fVar6 = (float10)1.5707963705062866 + (float10)(float)(fVar6 - (float10)1.5707963705062866);
      }
      else {
        fVar6 = (float10)FUN_005c5c80(local_30 - local_24,(float)local_2c - (float)local_38);
        fVar6 = fVar6 - (float10)1.5707963705062866;
      }
      fVar2 = (float)fVar6;
      unaff_ESI[0x2e] = (int)fVar2;
      unaff_ESI[0x2d] = (int)fVar2;
      if ((int *)unaff_ESI[0x43] != (int *)0x0) {
        (**(code **)(*(int *)unaff_ESI[0x43] + 0x94))(fVar2);
      }
      local_20 = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x118);
      local_18 = *(int *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x120);
    }
    if ((int *)unaff_ESI[0x43] != (int *)0x0) {
      (**(code **)(*(int *)unaff_ESI[0x43] + 0x168))(&local_20);
    }
    *(undefined8 *)(unaff_ESI + 0x56) = local_20;
    unaff_ESI[0x58] = local_18;
    if (((char)unaff_ESI[1] != '\0') && ((int *)unaff_ESI[0x44] != (int *)0x0)) {
      cVar5 = (**(code **)(*(int *)unaff_ESI[0x44] + 0x3c))();
      if (cVar5 == '\0') {
        (**(code **)(*(int *)unaff_ESI[0x44] + 0x34))();
      }
      (**(code **)(*(int *)unaff_ESI[0x44] + 0x168))(&local_20);
    }
    FUN_004c8580(*(undefined4 *)(unaff_ESI[0x37] + 0x5c),unaff_ESI);
  }
  ExceptionList = local_10;
  return;
}

