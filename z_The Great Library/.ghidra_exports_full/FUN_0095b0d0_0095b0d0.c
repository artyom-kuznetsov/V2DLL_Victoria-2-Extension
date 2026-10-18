// FUN_0095b0d0 @ 0095b0d0 body=[[0095b0d0, 0095b430] [0095b434, 0095b4d7]]


int * FUN_0095b0d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  undefined8 uVar8;
  int local_4c;
  int local_48;
  int *local_44;
  int local_3c;
  int *local_38;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9017e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009692c0();
  iVar2 = DAT_00f20c04;
  if ((DAT_0131b954 - DAT_0131b950 & 0xfffffffcU) == 0) {
    FUN_0057aa50(0);
    iVar2 = DAT_00f20c04;
  }
  else {
    iVar6 = 0;
    iVar4 = *(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2;
    if (0 < iVar4) {
      do {
        *(undefined4 *)(DAT_0131b950 + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  local_48 = 0;
  if (DAT_01258a2c == (int *)0x0) {
    iVar2 = FUN_00aae9af(0x3f0);
    local_c = 0;
    if (iVar2 == 0) {
      DAT_01258a2c = (int *)0x0;
    }
    else {
      DAT_01258a2c = (int *)FUN_0096bbf0();
    }
    local_c = 0xffffffff;
    iVar2 = DAT_00f20c04;
  }
  iVar2 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
  local_4c = 0;
  local_44 = DAT_01258a2c;
  if (0 < iVar2) {
    local_3c = 0;
    iVar6 = DAT_0131b950;
    do {
      if (*(int *)(iVar6 + local_4c * 4) == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x68) + 200);
        if (((*(int *)(iVar4 + 0x24 + local_3c) - *(int *)(iVar4 + 0x20 + local_3c) & 0xfffffffcU)
             != 0) ||
           ((*(int *)(iVar4 + local_3c + 0xc) - *(int *)(iVar4 + local_3c + 8) & 0xfffffff0U) != 0))
        {
          *(int *)(param_2 + 0x14) = param_1;
          piVar3 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x68) + 200) + local_3c)
                                      + 0x18))(&local_38,param_2);
          iVar6 = *piVar3;
          FUN_00401000();
          iVar4 = FUN_00b31c00();
          uVar5 = __alldiv((longlong)iVar4 * (longlong)iVar6,1000,0);
          *(undefined4 *)(DAT_0131b950 + unaff_ESI * 4) = uVar5;
          iVar6 = *(int *)(param_1 + 100);
          if (*(int *)(iVar6 + 0x164) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = **(int **)(iVar6 + 0x15c);
          }
          piVar3 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar6 + 300) * 0x10)
                            + *(int *)(iVar7 + 0x6c) * 4);
          cVar1 = (**(code **)(*piVar3 + 0x34))();
          if ((cVar1 != '\0') && (iVar6 = piVar3[0x1f], 0 < *(int *)(iVar6 + local_4c * 4))) {
            iVar6 = __alldiv((longlong)iVar4 * (longlong)*(int *)(iVar6 + local_4c * 4),1000,0);
            piVar3 = (int *)(DAT_0131b950 + local_4c * 4);
            *piVar3 = *piVar3 + iVar6;
            if (0 < *(int *)(DAT_0131b950 + local_4c * 4)) {
              if (*(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2 < local_4c) {
                local_44 = (int *)FUN_0096bb70();
              }
              else {
                local_44 = *(int **)(*(int *)(DAT_00f20c04 + 0xc) + local_4c * 4);
              }
            }
          }
          iVar6 = DAT_0131b950;
          if (0 < *(int *)(DAT_0131b950 + local_4c * 4)) {
            local_48 = local_48 + *(int *)(DAT_0131b950 + local_4c * 4);
          }
        }
      }
      local_4c = local_4c + 1;
      local_3c = local_3c + 0x30;
    } while (local_4c < iVar2);
  }
  cVar1 = (**(code **)(*local_44 + 0x18))();
  if (cVar1 != '\0') {
    ExceptionList = pvStack_14;
    return local_44;
  }
  iVar2 = *(int *)(param_1 + 600) * 1000;
  uVar8 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  iVar2 = __alldiv(uVar8,1000000,0);
  iVar2 = __alldiv((longlong)iVar2 * (longlong)local_48,1000,0);
  local_44 = (int *)0x0;
  if (DAT_01258a2c == (int *)0x0) {
    piVar3 = (int *)FUN_00aae9af(0x3f0);
    local_c = 1;
    local_38 = piVar3;
    if (piVar3 == (int *)0x0) {
      DAT_01258a2c = (int *)0x0;
    }
    else {
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_00409350("null_pop",8);
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_0096be90();
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_34);
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      *piVar3 = (int)CNullPopType::vftable;
      DAT_01258a2c = piVar3;
    }
    local_c = 0xffffffff;
  }
  iVar4 = 0;
  iVar6 = *(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2;
  piVar3 = DAT_01258a2c;
  if (0 < iVar6) {
    do {
      iVar7 = *(int *)(DAT_0131b950 + iVar4 * 4);
      if (-1 < iVar7) {
        if (0 < iVar7) {
          local_44 = (int *)((int)local_44 + iVar7);
        }
        if (iVar2 < (int)local_44) {
          if (*(int *)(DAT_00f20c04 + 0x10) - *(int *)(DAT_00f20c04 + 0xc) >> 2 < iVar4) {
            piVar3 = (int *)FUN_0096bb70();
          }
          else {
            piVar3 = *(int **)(*(int *)(DAT_00f20c04 + 0xc) + iVar4 * 4);
          }
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  piVar3 = (int *)FUN_004b8c80(piVar3,*(undefined4 *)(param_1 + 100));
  ExceptionList = pvStack_14;
  return piVar3;
}

