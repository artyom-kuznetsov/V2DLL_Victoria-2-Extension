// FUN_007e75a0 @ 007e75a0 body=[[007e75a0, 007e7617] [007e7620, 007e77f0] [007e77f4, 007e7831]]


/* WARNING: Type propagation algorithm not settling */

void FUN_007e75a0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int local_138 [65];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 *local_14 [3];
  undefined4 *local_8;
  
  puVar11 = DAT_012589bc;
  local_8 = (undefined4 *)0xffffffff;
  local_14[2] = &LAB_00b6ae99;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  if (DAT_012589bc == (undefined4 *)0x0) {
    ExceptionList = local_14 + 1;
    local_14[0] = (undefined1 *)FUN_00aae9af(0x2c);
    local_8 = puVar11;
    if ((undefined4 *)local_14[0] == (undefined4 *)0x0) {
      DAT_012589bc = (undefined4 *)0x0;
    }
    else {
      DAT_012589bc = (undefined4 *)FUN_007e7440(local_14[0]);
    }
  }
  puVar11 = DAT_012589bc;
  local_8 = (undefined4 *)0xffffffff;
  FUN_0099ec90(DAT_012589bc);
  local_14[0] = (undefined1 *)puVar11;
  FUN_0068f390();
  local_18 = 1;
  do {
    piVar12 = (int *)param_2[7];
    if ((char)piVar12[0x44] == '\0') {
      iVar4 = (**(code **)(*piVar12 + 4))();
      piVar12[2] = iVar4;
      if (iVar4 == 0) {
        piVar12[3] = 0x13;
      }
      *(undefined1 *)(piVar12 + 0x44) = 1;
    }
    piVar12 = piVar12 + 3;
    piVar13 = local_138;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar13 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar13 = piVar13 + 1;
    }
    if (local_138[0] == 0x13) {
      (**(code **)*param_2)(1);
      ExceptionList = local_14[1];
      return;
    }
    (**(code **)(*(int *)param_2[7] + 4))();
    pcVar9 = (char *)(param_2[7] + 0x10);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pcVar5 = pcVar9;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar9,(int)pcVar5 - (param_2[7] + 0x11));
    local_8 = (undefined4 *)0x1;
    puVar6 = (undefined4 *)FUN_00aae9af(0x2c);
    local_8._0_1_ = 2;
    puVar11 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0x18d;
      *puVar6 = CGraphicalCultureType::vftable;
      puVar6[8] = 0xf;
      puVar6[7] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
      local_14[0] = (undefined1 *)puVar6;
      FUN_00408ed0(local_34,0,0xffffffff);
      local_8._0_1_ = 3;
      puVar6[10] = local_18;
      uVar7 = FUN_009902d0(local_34,0);
      local_18 = local_18 + 1;
      puVar6[2] = uVar7;
      puVar11 = puVar6;
    }
    local_8 = (undefined4 *)CONCAT31(local_8._1_3_,1);
    local_14[0] = (undefined1 *)puVar11;
    FUN_0099ec90(puVar11);
    ppuVar2 = *(undefined4 ***)(param_1 + 0x10);
    if ((local_14 < ppuVar2) && (ppuVar3 = *(undefined4 ***)(param_1 + 0xc), ppuVar3 <= local_14)) {
      if (ppuVar2 == *(undefined4 ***)(param_1 + 0x14)) {
        uVar8 = (int)ppuVar2 - (int)ppuVar3 >> 2;
        if (0x3ffffffe < uVar8) {
LAB_007e780b:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar8 = uVar8 + 1;
        uVar10 = (int)*(undefined4 ***)(param_1 + 0x14) - (int)ppuVar3 >> 2;
        if (uVar10 < uVar8) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar8) {
            uVar10 = uVar8;
          }
          FUN_004bf300(uVar10);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) =
             *(undefined4 *)(*(int *)(param_1 + 0xc) + ((int)local_14 - (int)ppuVar3 >> 2) * 4);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    else {
      if (ppuVar2 == *(undefined4 ***)(param_1 + 0x14)) {
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar10 = (int)((int)ppuVar2 - uVar8) >> 2;
        if (0x3ffffffe < uVar10) goto LAB_007e780b;
        uVar10 = uVar10 + 1;
        uVar8 = (int)((int)*(undefined4 ***)(param_1 + 0x14) - uVar8) >> 2;
        if (uVar8 < uVar10) {
          if (0x3fffffff - (uVar8 >> 1) < uVar8) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar8 + (uVar8 >> 1);
          }
          if (uVar8 < uVar10) {
            uVar8 = uVar10;
          }
          FUN_004bf300(uVar8);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) = puVar11;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    local_8 = (undefined4 *)0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  } while( true );
}

