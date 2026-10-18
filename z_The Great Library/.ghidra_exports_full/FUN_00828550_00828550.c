// FUN_00828550 @ 00828550 body=[[00828550, 00828aad]]


void FUN_00828550(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined1 local_38 [4];
  float local_34;
  undefined1 local_30 [8];
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  char local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52c38;
  local_10 = ExceptionList;
  if (param_1[0x2d] == 0) {
    return;
  }
  ExceptionList = &local_10;
  iVar3 = (**(code **)(**(int **)param_1[0x2b] + 0x2c))();
  if (*(char *)(iVar3 + 0x164) != '\0') {
    ExceptionList = local_10;
    return;
  }
  if (*(char *)(iVar3 + 0x104) != '\0') {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(iVar3 + 0x74) != 0) {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(iVar3 + 0x1b4) != 0) {
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(iVar3 + 0xec) < 1) ||
     (cVar2 = FUN_0082a880(param_1,iVar3,
                           *(undefined4 *)
                            (*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar3 + 0xe4) * 4)),
     cVar2 != '\0')) {
    local_15[0] = '\0';
    if (*(char *)((int)param_1 + 0xf6) == '\0') {
      cVar2 = FUN_00829f70(param_1,iVar3,local_15);
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return;
      }
      if (local_15[0] != '\0') goto LAB_00828a50;
    }
    else {
      if (0 < *(int *)(iVar3 + 0xa0)) {
        iVar3 = *(int *)(iVar3 + 0xdc);
        iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
        if (*(int *)(iVar3 + 0x134) == *(int *)(iVar4 + 0x20)) {
          ExceptionList = local_10;
          return;
        }
        if ((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(iVar3 + 0x134) * 4) + 0x34) == 0)
           && (((*(char *)(iVar3 + 0x130) != 'R' || (*(char *)(iVar3 + 0x131) != 'E')) ||
               (*(char *)(iVar3 + 0x132) != 'B')))) {
          if (*(char *)(iVar4 + 0x1c) != 'R') {
            ExceptionList = local_10;
            return;
          }
          if (*(char *)(iVar4 + 0x1d) != 'E') {
            ExceptionList = local_10;
            return;
          }
          if (*(char *)(iVar4 + 0x1e) != 'B') {
            ExceptionList = local_10;
            return;
          }
        }
        FUN_0084fea0(param_1[0x19],local_30,iVar3);
        local_8 = 0;
        if (local_28 == 0) {
          FUN_0082e780();
          *(undefined1 *)((int)param_1 + 0xf6) = 0;
        }
        FUN_009a63f0();
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)((int)param_1 + 0xf6) = 0;
    }
    cVar2 = FUN_0082c380(iVar3);
    if (cVar2 != '\0') {
LAB_00828a50:
      if ((*(int *)(iVar3 + 0x70) != 0) && (cVar2 = FUN_00416e40(), cVar2 != '\0')) {
        iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xd0) / 1000;
        if (iVar4 < *(int *)(iVar3 + 0x98)) {
          FUN_00828f90(iVar3,*(int *)(iVar3 + 0x98) - iVar4);
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar4 = FUN_0082c540();
    if (iVar4 != 0) {
      FUN_0082c4d0();
      ExceptionList = local_10;
      return;
    }
    cVar2 = FUN_0082c6e0();
    if (cVar2 != '\0') {
      FUN_0082c7f0(param_1);
      FUN_0082e5d0(param_1);
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(*(int *)(iVar3 + 0xdc) + 300) != 0) &&
       (cVar2 = FUN_0048f070(*(undefined4 *)(*(int *)(iVar3 + 0xdc) + 0xe8),0), cVar2 != '\0')) {
      piVar5 = (int *)FUN_005cfa20();
      local_24 = (float)*piVar5 / 1000.0;
      if (local_24 < 0.34) {
        iVar4 = iVar3;
        uVar6 = (**(code **)(*param_1 + 0xe8))(iVar3);
        iVar7 = FUN_00850b20(uVar6,iVar4);
        iVar4 = DAT_012588e8;
        if (iVar7 != 0) {
          *(undefined1 *)((int)param_1 + 0xf5) = 1;
          local_34 = *(float *)(*(int *)(iVar4 + 0xacc) + iVar7 * 4);
          if ((local_34 != *(float *)(iVar3 + 0xdc)) &&
             (fVar8 = (float)FUN_00826f50(), local_34 != fVar8)) {
            FUN_0082e5d0(param_1);
          }
        }
      }
      if (((*(char *)((int)param_1 + 0xf5) != '\0') && (local_24 < DAT_00f1783c)) &&
         (piVar5 = (int *)FUN_00519d60(*(undefined4 *)
                                        (*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4),&local_34),
         (float)*piVar5 / 1000.0 < 0.3)) {
        ExceptionList = local_10;
        return;
      }
    }
    fVar8 = 1e+06;
    *(undefined1 *)((int)param_1 + 0xf5) = 0;
    local_24 = 1e+06;
    iVar4 = FUN_00826f50();
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar3 + 0xdc);
    }
    cVar2 = FUN_0082d340(param_1,iVar3,iVar4);
    if (cVar2 != '\0') {
      FUN_0082aea0(param_1,iVar3,iVar4);
      local_24 = fVar8;
    }
    local_20 = 1e+06;
    iVar4 = FUN_0082c1d0(param_1,iVar3,&local_20);
    if (iVar4 != 0) {
      bVar1 = false;
      local_1c = iVar4;
      if (((0 < *(int *)(iVar3 + 0xec)) &&
          (local_34 = (float)FUN_00826f50(), local_20 < local_24 - 50.0)) &&
         (iVar4 != *(int *)((int)local_34 + 0x58))) {
        local_24 = *(float *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar3 + 0xe4) * 4);
        cVar2 = FUN_004c3e90(iVar4);
        if ((cVar2 == '\0') || (cVar2 = FUN_004c3e90(local_1c), cVar2 != '\0')) {
          if (local_24 == local_34) {
            FUN_005d24a0(local_38);
            local_24 = (float)FUN_00457630();
            iVar4 = FUN_00457630();
            if ((int)local_24 - iVar4 < 0xb) goto LAB_00828a24;
            local_28 = param_1[0xd];
            iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
            if (((*(int *)((int)local_34 + 0x134) != *(int *)(iVar4 + 0x20)) &&
                (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)((int)local_34 + 0x134) * 4)
                           + 0x34) != 0 ||
                  (((*(char *)((int)local_34 + 0x130) == 'R' &&
                    (*(char *)((int)local_34 + 0x131) == 'E')) &&
                   (*(char *)((int)local_34 + 0x132) == 'B')))) ||
                 (((*(char *)(iVar4 + 0x1c) == 'R' && (*(char *)(iVar4 + 0x1d) == 'E')) &&
                  (*(char *)(iVar4 + 0x1e) == 'B')))))) ||
               (iVar4 = FUN_005dc8b0(param_1[0xd],param_1[0xe]), 0 < iVar4)) goto LAB_00828a24;
          }
          bVar1 = true;
        }
      }
LAB_00828a24:
      if ((0 < *(int *)(iVar3 + 0xa0)) && (!bVar1)) {
        ExceptionList = local_10;
        return;
      }
      FUN_0082e5d0(param_1);
      ExceptionList = local_10;
      return;
    }
    local_1c = 0;
    if (*(int *)(iVar3 + 0xa0) < 1) {
      ExceptionList = local_10;
      return;
    }
  }
  FUN_0082e780();
  ExceptionList = local_10;
  return;
}

