// FUN_0099ff90 @ 0099ff90 body=[[0099ff90, 009a0140] [009a0144, 009a016e] [009a0172, 009a019c] [009a01a0, 009a01c4] [009a01c8, 009a01e3] [009a01e7, 009a020f] [009a0213, 009a0285] [009a02a0, 009a052f]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0099ff90(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  double *pdVar8;
  int *in_ECX;
  undefined2 unaff_BX;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float local_f8;
  int local_f4;
  double local_f0;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  int local_c8;
  int iStack_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c [5];
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  void *local_24;
  uint local_20;
  void *pvStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4a28c;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*in_ECX == 399) {
      ExceptionList = &local_14;
      lVar11 = FUN_00aaf0d0(in_ECX + 1);
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      local_c = 0;
      if ((lVar11 < 0x100000000) && (lVar11 < 0)) {
        lVar11 = CONCAT44(-((int)((ulonglong)lVar11 >> 0x20) + (uint)((int)lVar11 != 0)),
                          -(int)lVar11);
        FUN_00409350(&DAT_00dfe280,1);
      }
      uVar9 = (uint)((ulonglong)lVar11 >> 0x20);
      uVar10 = (uint)lVar11;
      uVar1 = uVar10 >> 0xf;
      local_f8 = (float)(uVar1 | uVar9 << 0x11);
      local_c8 = uVar10 + uVar1 * -0x8000;
      iStack_c4 = (uVar9 - (((int)local_f8 >> 0x1f) << 0xf | uVar9 & 0x7fff)) -
                  (uint)(uVar10 < uVar1 * 0x8000);
      local_f0 = (double)CONCAT44(iStack_c4,local_c8) * 3.0517578125e-05;
      puVar4 = (undefined4 *)FUN_00988dc0(local_6c,5);
      local_c._0_1_ = 1;
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      pcVar5 = (char *)((int)puVar4 + 2);
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      FUN_00409350((char *)((int)puVar4 + 2),(int)pcVar5 - ((int)puVar4 + 3));
      local_c._0_1_ = 2;
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8140,1);
      local_c._0_1_ = 3;
      FUN_009888f0(local_88);
      local_c._0_1_ = 4;
      FUN_00988f20(local_c0);
      local_c._0_1_ = 5;
      uVar6 = FUN_00988f20(local_a4);
      local_c._0_1_ = 6;
      FUN_00448aa0(uVar6,0,0xffffffff);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      local_20 = 0xf;
      local_24 = (void *)0x0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c0[0]);
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_c = (uint)local_c._1_3_ << 8;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(local_e4);
    }
    else {
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      piVar7 = in_ECX + 1;
      do {
        iVar2 = *piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
      } while ((char)iVar2 != '\0');
      ExceptionList = &local_14;
      FUN_00409350(in_ECX + 1,(int)piVar7 - ((int)in_ECX + 5));
      local_c = 7;
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(local_e4);
    }
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4[0]);
    }
  }
  else {
    local_f4 = *in_ECX;
    if (((local_f4 != 0x12) && (local_f4 != 0x10)) && (local_f4 != 0x11)) {
      ExceptionList = &local_14;
      (**(code **)(**(int **)(param_1 + 8) + 0x20))(&local_f4,2);
      if (local_f4 == 0x14) {
        local_f8 = (float)FUN_00aaf0d0(in_ECX + 1);
        (**(code **)(**(int **)(param_1 + 8) + 0x20))(&local_f8,4);
        ExceptionList = pvStack_1c;
        return;
      }
      if (local_f4 == 0xc) {
        local_f8 = (float)FUN_00aaf0c5(in_ECX + 1);
        uVar6 = 4;
        pdVar8 = (double *)&local_f8;
      }
      else if (local_f4 == 0xd) {
        piVar7 = (int *)FUN_0098fb60(in_ECX,&local_c8);
        local_f8 = (float)*piVar7 / 1000.0;
        uVar6 = 4;
        pdVar8 = (double *)&local_f8;
      }
      else {
        if (local_f4 == 0xe) {
          local_f8 = (float)FUN_009885d0();
          local_c = 8;
          FUN_009885d0();
          local_c = CONCAT31(local_c._1_3_,9);
          cVar3 = FUN_00416db0();
          FUN_00408ad0();
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (cVar3 != '\0') {
            (**(code **)(**(int **)(param_1 + 8) + 0x1c))(1);
            ExceptionList = pvStack_18;
            return;
          }
          local_f8 = (float)FUN_009885d0();
          local_c = 10;
          FUN_009885d0();
          local_c = CONCAT31(local_c._1_3_,0xb);
          cVar3 = FUN_00416db0();
          FUN_00408ad0();
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (cVar3 == '\0') {
            ExceptionList = local_14;
            return;
          }
          (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
          ExceptionList = pvStack_18;
          return;
        }
        if (local_f4 == 0xf) {
          piVar7 = in_ECX + 1;
          do {
            iVar2 = *piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
          } while ((char)iVar2 != '\0');
          local_f8 = (float)((int)piVar7 - ((int)in_ECX + 5) & 0xffff);
          (**(code **)(**(int **)(param_1 + 8) + 0x20))(&local_f8,2);
          (**(code **)(**(int **)(param_1 + 8) + 0x20))(in_ECX + 1,unaff_BX);
          ExceptionList = local_24;
          return;
        }
        if (local_f4 != 399) {
          ExceptionList = local_14;
          return;
        }
        local_f0 = (double)FUN_00aaf0d0(in_ECX + 1);
        uVar6 = 8;
        pdVar8 = &local_f0;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x20))(pdVar8,uVar6);
    }
  }
  ExceptionList = local_14;
  return;
}

