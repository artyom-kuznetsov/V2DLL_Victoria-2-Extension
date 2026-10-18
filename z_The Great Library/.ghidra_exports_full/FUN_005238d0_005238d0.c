// FUN_005238d0 @ 005238d0 body=[[005238d0, 00523c08] [00523c12, 00523c24]]


void FUN_005238d0(char param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  int in_ECX;
  int iVar11;
  int *_Dst;
  int iVar12;
  bool bVar13;
  int *local_40;
  int *local_3c;
  int local_38;
  undefined8 local_28;
  int *local_20;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9e7c8;
  local_10 = ExceptionList;
  local_1c = (undefined4 *)CONCAT31(local_1c._1_3_,1);
  ExceptionList = &local_10;
  FUN_0054c6e0(*(int *)(in_ECX + 0xe8c),*(int *)(in_ECX + 0xe90),
               *(int *)(in_ECX + 0xe90) - *(int *)(in_ECX + 0xe8c) >> 2,in_ECX + 0x1c,local_1c);
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  local_38 = 0;
  local_8 = 0;
  local_20 = *(int **)(in_ECX + 0xe8c);
  while ((((*(int **)(in_ECX + 0xe8c) <= local_20 && (local_20 < *(int **)(in_ECX + 0xe90))) &&
          (-1 < param_2)) && ((0 < param_2._4_4_ || ((uint)param_2 != 0))))) {
    iVar3 = *local_20;
    uVar4 = *(uint *)(iVar3 + 0x18);
    iVar5 = *(int *)(iVar3 + 0x1c);
    iVar12 = uVar4 - (uint)param_2;
    iVar11 = (iVar5 - param_2._4_4_) - (uint)(uVar4 < (uint)param_2);
    if ((iVar11 < 0) ||
       ((iVar11 == 0 ||
         SBORROW4(iVar5,param_2._4_4_) !=
         SBORROW4(iVar5 - param_2._4_4_,(uint)(uVar4 < (uint)param_2)) && (iVar12 == 0)))) {
      local_28 = CONCAT44(iVar5,(int *)local_28);
      if (*(int *)(iVar3 + 0xc) != 0) {
        iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0xc) * 4) + 0xe88);
        puVar1 = (uint *)(iVar3 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - uVar4;
        *(int *)(iVar3 + 0x1c) = (*(int *)(iVar3 + 0x1c) - iVar5) - (uint)(uVar2 < uVar4);
        if ((*(int *)(iVar3 + 0x1c) < 1) && (*(int *)(iVar3 + 0x1c) < 0)) {
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
      }
      puVar1 = (uint *)(in_ECX + 0xe78);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      *(int *)(in_ECX + 0xe7c) = (*(int *)(in_ECX + 0xe7c) - iVar5) - (uint)(uVar2 < uVar4);
      param_2 = CONCAT44(-(iVar11 + (uint)(iVar12 != 0)),-iVar12);
      piVar8 = (int *)FUN_00aae9af(0x10);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        *piVar8 = *local_20;
        piVar8[1] = (int)local_3c;
        piVar8[2] = 0;
        *(undefined1 *)(piVar8 + 3) = 0;
      }
      if (local_38 == 0) {
        local_20 = local_20 + 1;
        local_40 = piVar8;
        local_3c = piVar8;
        local_38 = local_38 + 1;
      }
      else {
        local_3c[2] = (int)piVar8;
        local_20 = local_20 + 1;
        local_3c = piVar8;
        local_38 = local_38 + 1;
      }
    }
    else {
      if (*(int *)(iVar3 + 0xc) != 0) {
        iVar5 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0xc) * 4) + 0xe88);
        puVar1 = (uint *)(iVar5 + 0x18);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - (uint)param_2;
        *(int *)(iVar5 + 0x1c) =
             (*(int *)(iVar5 + 0x1c) - param_2._4_4_) - (uint)(uVar4 < (uint)param_2);
        if ((*(int *)(iVar5 + 0x1c) < 1) && (*(int *)(iVar5 + 0x1c) < 0)) {
          *(undefined4 *)(iVar5 + 0x18) = 0;
          *(undefined4 *)(iVar5 + 0x1c) = 0;
        }
      }
      puVar1 = (uint *)(in_ECX + 0xe78);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - (uint)param_2;
      *(int *)(in_ECX + 0xe7c) =
           (*(int *)(in_ECX + 0xe7c) - param_2._4_4_) - (uint)(uVar4 < (uint)param_2);
      *(int *)(iVar3 + 0x18) = iVar12;
      *(int *)(iVar3 + 0x1c) = iVar11;
      param_2 = 0;
      local_20 = local_20 + 1;
    }
  }
  local_1c = *(undefined4 **)(in_ECX + 0xe7c);
  local_28 = 0;
  local_20 = *(int **)(in_ECX + 0xe78);
  if (((int)local_1c < 0) || (((int)local_1c < 1 && (*(int **)(in_ECX + 0xe78) == (int *)0x0)))) {
    ppiVar9 = (int **)&local_28;
  }
  else {
    ppiVar9 = &local_20;
  }
  piVar8 = ppiVar9[1];
  *(int **)(in_ECX + 0xe78) = *ppiVar9;
  *(int **)(in_ECX + 0xe7c) = piVar8;
  uVar7 = local_28;
  piVar8 = local_40;
  do {
    if (piVar8 == (int *)0x0) {
      local_28._5_3_ = (undefined3)((ulonglong)uVar7 >> 0x28);
      local_28._0_4_ = (int *)uVar7;
      local_28._0_5_ = CONCAT14(1,(int *)local_28);
      FUN_0054c6e0(*(int *)(in_ECX + 0xe8c),*(int *)(in_ECX + 0xe90),
                   *(int *)(in_ECX + 0xe90) - *(int *)(in_ECX + 0xe8c) >> 2,in_ECX + 0x1c,
                   local_28._4_4_);
      if (((*(int *)(in_ECX + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) && (param_1 != '\0')) &&
         (*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd7c) == 2)) {
        FUN_0060ca30(*(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0xd80) + 8));
      }
      if (local_40 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_1c = (undefined4 *)*piVar8;
    piVar10 = *(int **)(in_ECX + 0xe90);
    piVar8 = (int *)piVar8[2];
    piVar6 = *(int **)(in_ECX + 0xe8c);
    for (_Dst = piVar6; (_Dst != piVar10 && ((undefined4 *)*_Dst != local_1c)); _Dst = _Dst + 1) {
    }
    local_28 = uVar7;
    if (((((int)piVar10 - (int)piVar6 & 0xfffffffcU) != 0) && (piVar6 <= _Dst)) && (_Dst < piVar10))
    {
      if (_Dst == piVar10 + -1) {
        bVar13 = piVar6 == piVar10;
      }
      else {
        FID_conflict__memcpy(_Dst,_Dst + 1,((int)piVar10 - (int)(_Dst + 1) >> 2) * 4);
        piVar10 = *(int **)(in_ECX + 0xe90);
        if (((int)piVar10 - (int)*(int **)(in_ECX + 0xe8c) & 0xfffffffcU) == 0) goto LAB_00523b76;
        bVar13 = *(int **)(in_ECX + 0xe8c) == piVar10;
      }
      if (!bVar13) {
        *(int **)(in_ECX + 0xe90) = piVar10 + -1;
      }
    }
LAB_00523b76:
    uVar7 = local_28;
    if (local_1c != (undefined4 *)0x0) {
      (**(code **)*local_1c)(1);
      uVar7 = local_28;
    }
  } while( true );
}

