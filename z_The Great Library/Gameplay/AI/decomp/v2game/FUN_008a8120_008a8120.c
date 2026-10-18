// FUN_008a8120 @ 008a8120  (requested 008A8120, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_008a8120(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_84 [60];
  undefined4 uStack_48;
  int iStack_44;
  void **ppvStack_40;
  int *local_3c;
  int local_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  void *local_20 [3];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar1 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b940d6;
  pvStack_14 = ExceptionList;
  local_20[0] = *(void **)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4) + 0x188);
  if (iVar6 == 0) {
    iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    local_20[0] = *(void **)(iVar6 + 0x128);
    iVar6 = *(int *)(iVar6 + 300);
    if ((iVar6 == 0) && (iVar7 != 0)) {
      local_20[0] = *(void **)(iVar7 + 0x58);
      iVar6 = *(int *)(iVar7 + 0x5c);
    }
  }
  ExceptionList = &pvStack_14;
  if (*(char *)(in_ECX + 0x1a3) != '\0') {
    piVar5 = (int *)(DAT_012588e8 + 0xb64);
    local_24 = (undefined1 *)
               ((uint)(*(int *)(in_ECX + 8) * 0x10000 + *(int *)(in_ECX + 0xc)) %
               *(uint *)(DAT_012588e8 + 0xb68));
    local_3c = (int *)0x8;
    ppvStack_40 = (void **)0x8a81bd;
    ExceptionList = &pvStack_14;
    piVar3 = (int *)FUN_00aae9af();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar7 = *(int *)(*(int *)(iVar1 + 0xb6c) + (int)local_24 * 4);
      *piVar3 = in_ECX;
      piVar3[1] = iVar7;
    }
    *(int **)(*(int *)(iVar1 + 0xb6c) + (int)local_24 * 4) = piVar3;
    *piVar5 = *piVar5 + 1;
  }
  if (((iVar6 < *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
      (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + iVar6 * 4) == 0)) &&
     (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar6 * 4) + 0x208) != 0)) {
    iVar7 = 0;
    iVar6 = *(int *)(in_ECX + 0xb4) - *(int *)(in_ECX + 0xb0) >> 2;
    local_24 = (undefined1 *)0x0;
    local_2c = 0;
    if (0 < iVar6) {
      do {
        local_3c = (int *)param_2;
        ppvStack_40 = local_20;
        iStack_44 = *(int *)(*(int *)(in_ECX + 0xb0) + iVar7 * 4) + 8;
        uStack_48 = 0x8a826d;
        FUN_008aeb00();
        local_2c = local_2c + (int)local_20[0];
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    local_3c = (int *)0x3f000000;
    ppvStack_40 = (void **)0x8a82a4;
    FUN_00401000();
    local_3c = (int *)0x8a82ac;
    iVar6 = FUN_00b31c00();
    if (iVar6 < local_2c) {
      local_24 = (undefined1 *)(((float)local_2c / 1000.0) / 100.0);
      local_3c = (int *)0x8a82ef;
      local_2c = FUN_009b7610();
      local_2c = local_2c % 100;
      iVar6 = *(int *)(in_ECX + 0xb0);
      iVar7 = 0;
      puVar8 = (undefined1 *)0x0;
      if (0 < (int)(*(int *)(in_ECX + 0xb4) - iVar6 & 0xfffffffcU)) {
        do {
          local_3c = (int *)param_2;
          ppvStack_40 = local_20;
          iStack_44 = *(int *)(iVar6 + (int)puVar8 * 4) + 8;
          uStack_48 = 0x8a832a;
          FUN_008aeb00();
          iVar7 = iVar7 + (int)(((float)(int)local_20[0] / 1000.0) / (float)local_24);
          if (local_2c <= iVar7) {
            local_24 = puVar8;
            if (puVar8 != (undefined1 *)0xffffffff) goto LAB_008a8389;
            break;
          }
          iVar6 = *(int *)(in_ECX + 0xb0);
          puVar8 = puVar8 + 1;
        } while ((int)puVar8 < *(int *)(in_ECX + 0xb4) - iVar6 >> 2);
      }
      local_24 = (undefined1 *)0x0;
    }
LAB_008a8389:
    local_3c = (int *)0xb0;
    ppvStack_40 = (void **)0x8a8393;
    pvVar4 = (void *)FUN_00aae9af();
    local_c = 2;
    local_20[0] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_3c = (int *)local_24;
      local_24 = auStack_84;
      FUN_008a88d0();
      piVar5 = (int *)FUN_00907d40(pvVar4,in_ECX);
    }
    local_c = 0xffffffff;
    local_3c = (int *)0x8a83e5;
    iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    ppvStack_40 = (void **)0x8a83f0;
    local_3c = piVar5;
    (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
  }
  else {
    local_3c = &local_2c;
    ppvStack_40 = (void **)0x8a8407;
    iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x58))();
    if (*(int *)(iVar7 + 4) == iVar6) {
      ppvStack_40 = (void **)DAT_012588e8;
      iStack_44 = 0x8a841b;
      iVar6 = FUN_0068b610();
      if (*(char *)(iVar6 + 0x28) != '\0') {
        if (*(char *)(in_ECX + 0x1a1) == '\0') {
          iStack_44 = 0x8a8441;
          cVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xf4))();
          if (cVar2 != '\0') goto LAB_008a849c;
        }
        ppvStack_40 = (void **)0xd0;
        iStack_44 = 0x8a844f;
        puVar8 = (undefined1 *)FUN_00aae9af();
        puStack_10 = (undefined1 *)0x3;
        local_24 = puVar8;
        if (puVar8 == (undefined1 *)0x0) {
          ppvStack_40 = (void **)0x0;
        }
        else {
          puStack_28 = auStack_84;
          FUN_008a88d0();
          ppvStack_40 = (void **)FUN_008a8f30(puVar8);
        }
        puStack_10 = (undefined1 *)0xffffffff;
        iStack_44 = 0x8a8499;
        FUN_006480e0();
      }
    }
  }
LAB_008a849c:
  ppvStack_40 = (void **)0x0;
  iStack_44 = param_2;
  uStack_48 = 0x8a84aa;
  (**(code **)(*(int *)(in_ECX + 0x74) + 0x2c))();
  ExceptionList = local_20[0];
  return;
}

