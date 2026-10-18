// FUN_00654120 @ 00654120 body=[[00654120, 00654241] [00654245, 00654438] [00654440, 00654522]]


void FUN_00654120(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *unaff_ESI;
  float10 fVar6;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  float local_2c;
  float local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbb7f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(unaff_ESI[0x58f] + 0xc) != '\0') &&
     (ExceptionList = &local_10, cVar1 = FUN_007952d0(), cVar1 == '\0')) {
    (**(code **)(*unaff_ESI + 0xbc))();
  }
  if ((unaff_ESI[0x36a] == 1) && (unaff_ESI[0x591] == 0)) {
    if (param_2 != '\0') {
      *(undefined1 *)unaff_ESI[0x590] = 1;
    }
    FUN_00791bb0(unaff_ESI[0x590]);
  }
  if (unaff_ESI[0x591] != 0) {
    FUN_007810a0(unaff_ESI[0x591]);
  }
  iVar2 = unaff_ESI[0x742];
  if ((iVar2 != 0) && (*(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0')) {
    FUN_0073f300(iVar2);
  }
  iVar2 = (**(code **)(*unaff_ESI + 200))();
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (iVar2 == 2) {
    FUN_00409350("reorganizebutton",0x10);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(*(int *)unaff_ESI[0x592] + 0x34))(local_54);
    pcVar4 = *(code **)(*piVar3 + 0xb8);
  }
  else {
    FUN_00409350("reorganizebutton",0x10);
    local_8 = 1;
    piVar3 = (int *)(**(code **)(*(int *)unaff_ESI[0x592] + 0x34))(local_54);
    pcVar4 = *(code **)(*piVar3 + 0xbc);
  }
  (*pcVar4)();
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_18 = 0;
  _param_2 = 0;
  if (unaff_ESI[0x786] < unaff_ESI[0x36a]) {
    local_18 = (int)(short)unaff_ESI[0x785];
    _param_2 = CONCAT22(*(short *)((int)unaff_ESI + 0x1e16) * (short)unaff_ESI[0x786],0xffff);
    FUN_009cb4a0(_param_2);
    iVar5 = (**(code **)(*(int *)(unaff_ESI[0x592] + 0x18) + 0x3c))(local_30);
    local_2c = (float)(int)(short)((short)unaff_ESI[0x787] + (short)unaff_ESI[0x784]);
    iVar2 = unaff_ESI[0x593];
    local_28 = (float)(int)(short)(*(short *)((int)unaff_ESI + 0x1e12) - *(short *)(iVar5 + 2));
    *(float *)(iVar2 + 0x80) = local_2c;
    *(float *)(iVar2 + 0x84) = local_28;
    local_38 = (int)((float)(*(int *)(*(int *)(iVar2 + 0x78) + 0x6b9bc) / 2) +
                    *(float *)(iVar2 + 0x80));
    local_34 = (int)((float)(*(int *)(*(int *)(iVar2 + 0x78) + 0x6b9c0) / 2) +
                    *(float *)(iVar2 + 0x84));
    (**(code **)(*(int *)(iVar2 + 0x260) + 0xcc))(&local_38);
    if (*(char *)(unaff_ESI[0x593] + 0x4f) == '\0') {
      (**(code **)(*(int *)unaff_ESI[0x593] + 0x34))();
    }
    iVar2 = *(int *)(unaff_ESI[0x593] + 0x238);
    fVar6 = (float10)(**(code **)(*(int *)(unaff_ESI[0x593] + 0x54) + 0x10))();
    _param_2 = (int)((float)(unaff_ESI[0x36a] - unaff_ESI[0x786]) *
                    (float)(fVar6 / (float10)((float)iVar2 / 1000.0)));
  }
  else if (*(char *)(unaff_ESI[0x593] + 0x4f) != '\0') {
    (**(code **)(*(int *)unaff_ESI[0x593] + 0x38))();
  }
  if (1 < unaff_ESI[0x36a]) {
    local_28 = (float)(int)(short)unaff_ESI[0x784];
    local_20 = 0;
    iVar2 = (int)*(short *)((int)unaff_ESI + 0x1e12);
    piVar3 = (int *)unaff_ESI[0x368];
    while (piVar3 != (int *)0x0) {
      local_24 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      local_1c = iVar2;
      if ((local_20 < _param_2) || (unaff_ESI[0x786] + _param_2 <= local_20)) {
        (**(code **)(*(int *)(piVar3[8] + 0x18) + 0x38))();
      }
      else {
        local_14 = CONCAT22((short)iVar2,SUB42(local_28,0));
        (**(code **)(*(int *)piVar3[8] + 0x18))(local_14);
        (**(code **)(*(int *)(piVar3[8] + 0x18) + 0x34))();
        (**(code **)(*piVar3 + 0x20))();
        FUN_007992c0(local_18);
        local_1c = iVar2 + *(short *)((int)unaff_ESI + 0x1e16);
      }
      if (param_1 != (undefined4 *)0x0) {
        iVar2 = piVar3[10];
        iVar5 = param_1[1];
        piVar3 = (int *)FUN_00aae9af(0x10);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = iVar2;
          piVar3[1] = iVar5;
          piVar3[2] = 0;
          *(undefined1 *)(piVar3 + 3) = 0;
        }
        iVar2 = param_1[2];
        param_1[1] = piVar3;
        param_1[2] = iVar2 + 1;
        if (iVar2 == 0) {
          *param_1 = piVar3;
        }
        else {
          *(int **)(iVar5 + 8) = piVar3;
        }
      }
      local_20 = local_20 + 1;
      iVar2 = local_1c;
      piVar3 = local_24;
    }
  }
  ExceptionList = local_10;
  return;
}

