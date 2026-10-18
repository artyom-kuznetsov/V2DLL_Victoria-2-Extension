// FUN_008230a0 @ 008230a0 body=[[008230a0, 0082332d] [00823337, 0082336a]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008230a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  int *local_38;
  int *local_34;
  int local_30;
  undefined1 local_2c;
  float local_28;
  int *local_24;
  float local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4add8;
  ppvVar3 = &local_10;
  piVar2 = (int *)param_1[0x1a];
  local_10 = ExceptionList;
  do {
    do {
      do {
        ExceptionList = ppvVar3;
        if (piVar2 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
        local_24 = (int *)piVar2[2];
        piVar1 = (int *)*piVar2;
        iVar5 = piVar1[0x28];
        ppvVar3 = ExceptionList;
        piVar2 = local_24;
      } while (((iVar5 < 1) || (piVar1[0x1d] != 0)) || ((char)piVar1[0x41] != '\0'));
      if (iVar5 == 0) {
        if (piVar1[0x3b] < 1) {
          local_18 = 0;
        }
        else {
          local_18 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar1[0x3a] * 4);
        }
      }
      else {
        local_18 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4);
      }
      iVar5 = local_18;
    } while (*(char *)(*(int *)(local_18 + 0x5c) + 0x2a) != '\0');
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0;
    local_34 = (int *)FUN_00aae9af(0x10);
    if (local_34 == (int *)0x0) {
      local_34 = (int *)0x0;
    }
    else {
      *local_34 = (int)piVar1;
      local_34[1] = 0;
      local_34[2] = 0;
      *(undefined1 *)(local_34 + 3) = 0;
    }
    piVar2 = local_34;
    if (local_30 != 0) {
      _DAT_00000008 = local_34;
      piVar2 = local_38;
    }
    local_38 = piVar2;
    local_30 = local_30 + 1;
    FUN_00549920();
    fVar7 = (float10)(**(code **)(*param_1 + 0x1dc))(&local_38,1,0,1);
    local_28 = (float)fVar7;
    fVar7 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar5 + 0xec,0,1,0);
    local_20 = (float)fVar7;
    if (local_20 == 0.0) {
      for (piVar2 = (int *)param_1[0x2a]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (*piVar2 == *(int *)(iVar5 + 0x58)) goto LAB_00823317;
      }
      iVar5 = *(int *)(local_18 + 0x5c);
      iVar6 = 0;
      if (0 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24) {
        local_1c = 0;
        do {
          iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(iVar5 + 200) + 4 + local_1c) * 4);
          if (*(char *)(*(int *)(iVar5 + 0x5c) + 0x2a) == '\0') {
            fVar7 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar5 + 0xec,0,1,0);
            local_20 = (float)fVar7;
            if ((0.0 < local_20) && (local_20 <= local_28)) {
              (**(code **)(*piVar1 + 0x30))();
              goto LAB_00823303;
            }
          }
          iVar5 = *(int *)(local_18 + 0x5c);
          local_1c = local_1c + 0x24;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24);
      }
      iVar5 = DAT_012588e8;
      uVar8 = 0;
      uVar4 = (**(code **)(*piVar1 + 0x30))(0);
      iVar6 = FUN_008252b0(param_1,uVar4,uVar8);
      iVar5 = *(int *)(*(int *)(iVar5 + 0xacc) + iVar6 * 4);
      (**(code **)(*piVar1 + 0x30))();
LAB_00823303:
      if (*(int *)(iVar5 + 0x58) != 0) {
        FUN_008255a0(param_1,iVar5,0);
      }
    }
LAB_00823317:
    local_8 = 0xffffffff;
    ppvVar3 = ExceptionList;
    piVar2 = local_24;
    if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
  } while( true );
}

