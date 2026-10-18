// FUN_00a7f130 @ 00a7f130 body=[[00a7f130, 00a7f2e5] [00a7f2e9, 00a7f307] [00a7f30b, 00a7f444] [00a7f448, 00a7f465] [00a7f46b, 00a7f521] [00a7f525, 00a7f542] [00a7f546, 00a7f5fd] [00a7f601, 00a7f61b] [00a7f621, 00a7f633] [00a7f637, 00a7f64a]]


/* WARNING: Removing unreachable block (ram,0x00a7f62b) */

int FUN_00a7f130(int param_1,undefined8 *param_2,undefined4 *param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *in_ECX;
  int *piVar10;
  undefined4 *puVar11;
  int in_EDX;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b631b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  local_14 = -1;
  pcVar4 = in_ECX;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar4 - (int)(in_ECX + 1));
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (in_EDX != 0) {
    iVar5 = FUN_00a7cc10("shader");
    local_18 = FUN_00a7cc10(&DAT_00dee368);
    local_1c = FUN_00a7cc10(&DAT_00dee334);
    local_20 = FUN_00a7cc10(&DAT_00dee370);
    if (((iVar5 != 0) && (iVar2 = *(int *)(iVar5 + 0x14), iVar2 != 0)) &&
       ((iVar3 = *(int *)(iVar5 + 0x10), iVar3 == 4 || (iVar3 == 5)))) {
      piVar7 = (int *)(iVar5 + 0x18);
      piVar10 = piVar7;
      if (iVar2 != 1) {
        piVar10 = (int *)*piVar7;
      }
      if (piVar10 != (int *)0x0) {
        if ((iVar3 == 4) || (iVar3 == 5)) {
          if (iVar2 != 1) {
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          piVar7 = (undefined4 *)0x0;
        }
        pcVar4 = (char *)*piVar7;
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        pcVar4 = param_4;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00448740(param_4,(int)pcVar4 - (int)(param_4 + 1));
        pcVar4 = param_5;
        if (0xf < *(uint *)(param_5 + 0x14)) {
          pcVar4 = *(char **)param_5;
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 1;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        FUN_00409350("gfx/FX/pdxmesh.fx",0x11);
        local_8._0_1_ = 2;
        iVar5 = FUN_009be510(param_1 + 0x6bcfc,local_3c,local_58,*(undefined4 *)(param_1 + 100));
        local_14 = iVar5;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c[0]);
        }
        local_8._0_1_ = 0;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (iVar5 == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar5 * 4);
        }
        if (0xf < *(uint *)(param_5 + 0x14)) {
          param_5 = *(char **)param_5;
        }
        uVar8 = (**(code **)(*piVar7 + 0x34))(piVar7,param_5);
        *param_3 = uVar8;
        if (iVar5 == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar5 * 4);
        }
        uVar8 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"WorldMatrix");
        param_3[1] = uVar8;
        if (iVar5 == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar5 * 4);
        }
        uVar8 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"matBones");
        param_3[2] = uVar8;
      }
    }
    if (((local_18 != 0) && (iVar5 = *(int *)(local_18 + 0x14), iVar5 != 0)) &&
       ((iVar2 = *(int *)(local_18 + 0x10), iVar2 == 4 || (iVar2 == 5)))) {
      puVar9 = (undefined4 *)(local_18 + 0x18);
      puVar11 = puVar9;
      if (iVar5 != 1) {
        puVar11 = (undefined4 *)*puVar9;
      }
      if (puVar11 != (undefined4 *)0x0) {
        if ((iVar2 == 4) || (iVar2 == 5)) {
          if (iVar5 != 1) {
            puVar9 = (undefined4 *)*puVar9;
          }
        }
        else {
          puVar9 = (undefined4 *)0x0;
        }
        pcVar4 = (char *)*puVar9;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 3;
        uVar8 = FUN_00988f20(local_58);
        local_8._0_1_ = 4;
        uVar8 = FUN_009bcbf0(uVar8,1);
        *(undefined4 *)param_2 = uVar8;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c[0]);
        }
        local_8._0_1_ = 0;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
      }
    }
    if (((local_1c != 0) && (iVar5 = *(int *)(local_1c + 0x14), iVar5 != 0)) &&
       ((iVar2 = *(int *)(local_1c + 0x10), iVar2 == 4 || (iVar2 == 5)))) {
      puVar9 = (undefined4 *)(local_1c + 0x18);
      puVar11 = puVar9;
      if (iVar5 != 1) {
        puVar11 = (undefined4 *)*puVar9;
      }
      if (puVar11 != (undefined4 *)0x0) {
        if ((iVar2 == 4) || (iVar2 == 5)) {
          if (iVar5 != 1) {
            puVar9 = (undefined4 *)*puVar9;
          }
        }
        else {
          puVar9 = (undefined4 *)0x0;
        }
        pcVar4 = (char *)*puVar9;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 5;
        uVar8 = FUN_00988f20(local_58);
        local_8._0_1_ = 6;
        uVar8 = FUN_009bcbf0(uVar8,1);
        *(undefined4 *)((int)param_2 + 4) = uVar8;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c[0]);
        }
        local_8._0_1_ = 0;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
      }
    }
    if (((local_20 != 0) && (iVar5 = *(int *)(local_20 + 0x14), iVar5 != 0)) &&
       ((iVar2 = *(int *)(local_20 + 0x10), iVar2 == 4 || (iVar2 == 5)))) {
      puVar9 = (undefined4 *)(local_20 + 0x18);
      puVar11 = puVar9;
      if (iVar5 != 1) {
        puVar11 = (undefined4 *)*puVar9;
      }
      if (puVar11 != (undefined4 *)0x0) {
        if ((iVar2 == 4) || (iVar2 == 5)) {
          if (iVar5 != 1) {
            puVar9 = (undefined4 *)*puVar9;
          }
        }
        else {
          puVar9 = (undefined4 *)0x0;
        }
        pcVar4 = (char *)*puVar9;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 7;
        uVar8 = FUN_00988f20(local_58);
        local_8._0_1_ = 8;
        uVar8 = FUN_009bcbf0(uVar8,1);
        *(undefined4 *)(param_2 + 1) = uVar8;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c[0]);
        }
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58[0]);
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_14;
}

