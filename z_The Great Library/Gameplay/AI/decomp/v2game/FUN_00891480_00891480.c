// FUN_00891480 @ 00891480 body=[[00891480, 008914dc] [008914e0, 008915fe] [00891602, 0089162c] [00891630, 008919dd]]


void FUN_00891480(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_48;
  int local_40;
  int local_3c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_008852b0();
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  uVar2 = *(uint *)(iVar7 + 0xd3c);
  uVar1 = *(uint *)(iVar7 + 0xd38);
  for (uVar10 = uVar1; (uVar10 != uVar2 && (*(int *)(uVar10 + 4) != local_3c)); uVar10 = uVar10 + 8)
  {
  }
  if (((uVar10 < uVar1) || (uVar2 <= uVar10)) &&
     (iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_3c * 4),
     0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU))) {
    piVar8 = *(int **)(iVar7 + 0x9d8);
    while ((*(int **)(iVar7 + 0x9d8) <= piVar8 && (piVar8 < *(int **)(iVar7 + 0x9dc)))) {
      iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar8 * 4);
      iVar6 = *(int *)(iVar5 + 0x14c);
      iVar4 = *(int *)(iVar5 + 0x148);
      piVar8 = piVar8 + 1;
      if (iVar4 != iVar6) {
        do {
          if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xc)) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar6);
        if ((iVar4 != iVar6) &&
           ((*(int *)(iVar5 + 0x134) == local_3c ||
            (*(int *)(iVar5 + 0x134) == *(int *)(param_1 + 0xc))))) {
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_c = 0;
          FUN_004e9b90();
          FUN_004b5a90(&local_28,(int *)(param_1 + 8),DAT_012588e8 + 0x2c3,0);
          local_c = 0xffffffff;
          if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
        }
      }
    }
    piVar8 = (int *)DAT_012588e8[0x2cf];
    while (piVar8 != (int *)0x0) {
      iVar7 = *piVar8;
      piVar8 = (int *)piVar8[2];
      for (iVar5 = *(int *)(iVar7 + 0x2c);
          (iVar5 != *(int *)(iVar7 + 0x30) && (*(int *)(iVar5 + 4) != local_3c)); iVar5 = iVar5 + 8)
      {
      }
      if (iVar5 == *(int *)(iVar7 + 0x30)) {
        iVar5 = *(int *)(iVar7 + 0x40);
        iVar6 = *(int *)(iVar7 + 0x3c);
        if (iVar6 != iVar5) {
          do {
            if (*(int *)(iVar6 + 4) == local_3c) break;
            iVar6 = iVar6 + 8;
          } while (iVar6 != iVar5);
          if (iVar6 != iVar5) {
            FUN_00936070(iVar7,local_40,local_3c);
          }
        }
      }
      else {
        FUN_009351c0(iVar7,local_40,local_3c);
      }
    }
    local_48 = 0;
    iVar7 = (**(code **)(*DAT_012588e8 + 0x1c))();
    if (0 < iVar7) {
      do {
        iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_3c * 4) + 0xbe8) +
                        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_48 * 4) + 0x20) * 4);
        piVar8 = *(int **)(iVar7 + 0x20);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x2c))();
          for (puVar9 = (undefined4 *)DAT_012588e8[0x2a1];
              (puVar9 != (undefined4 *)0x0 && ((int *)*puVar9 != piVar8));
              puVar9 = (undefined4 *)puVar9[2]) {
          }
          FUN_005f2ae0();
          (**(code **)*piVar8)();
        }
        piVar8 = *(int **)(iVar7 + 0x24);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x2c))();
          for (puVar9 = (undefined4 *)DAT_012588e8[0x2a1];
              (puVar9 != (undefined4 *)0x0 && ((int *)*puVar9 != piVar8));
              puVar9 = (undefined4 *)puVar9[2]) {
          }
          FUN_005f2ae0();
          (**(code **)*piVar8)();
        }
        local_48 = local_48 + 1;
        iVar7 = (**(code **)(*DAT_012588e8 + 0x1c))();
      } while (local_48 < iVar7);
    }
    iVar7 = DAT_012588e8[0x2c3];
    piVar8 = (int *)FUN_00aae9af();
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      FUN_0057fb40();
      *piVar8 = (int)CVassal::vftable;
    }
    iVar5 = *(int *)(param_1 + 8);
    piVar8[3] = *(int *)(param_1 + 0xc);
    piVar8[4] = local_40;
    piVar8[6] = iVar7;
    piVar3 = DAT_012588e8;
    piVar8[2] = iVar5;
    piVar8[5] = local_3c;
    iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                             0xbe8) + local_3c * 4);
    *(undefined1 *)(iVar7 + 0x71) = 1;
    *(int **)(iVar7 + 0x24) = piVar8;
    iVar7 = piVar3[0x2a2];
    puVar9 = (undefined4 *)FUN_00aae9af();
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = piVar8;
      puVar9[1] = iVar7;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
    }
    iVar5 = piVar3[0x2a3];
    piVar3[0x2a2] = (int)puVar9;
    piVar3[0x2a3] = iVar5 + 1;
    if (iVar5 == 0) {
      piVar3[0x2a1] = (int)puVar9;
    }
    else {
      *(undefined4 **)(iVar7 + 8) = puVar9;
    }
    (**(code **)(*piVar8 + 0x28))();
    iVar7 = DAT_012587e4;
    FUN_005179e0();
    FUN_00513a90(*(undefined4 *)
                  (*(int *)(*(int *)(iVar7 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbd0),1,0);
    FUN_00515490();
    FUN_00515490();
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    if ((char)DAT_012588e8[0x347] != '\0') {
      FUN_005b53d0(DAT_012588e8 + 0x2ad);
      iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x20) * 4) + 0x9e8);
      while (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 8);
        FUN_004b7c50();
      }
      FUN_005dbd90();
    }
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_3c * 4);
    if ((char)DAT_012588e8[0x347] != '\0') {
      FUN_005b53d0(DAT_012588e8 + 0x2ad);
      iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x20) * 4) + 0x9e8);
      while (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 8);
        FUN_004b7c50();
      }
      FUN_005dbd90();
    }
  }
  ExceptionList = local_14;
  return;
}

