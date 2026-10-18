// FUN_00866ec0 @ 00866ec0 body=[[00866ec0, 0086700d] [00867016, 008670a7] [008670ab, 00867179] [00867182, 008672e3]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00866ec0(int param_1)

{
  char cVar1;
  byte bVar2;
  void **ppvVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  byte *******pppppppbVar7;
  int iVar8;
  int in_ECX;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  int iStack_194;
  int *piStack_190;
  int iStack_18c;
  uint uStack_188;
  uint uStack_184;
  char *pcStack_180;
  byte *******pppppppbStack_17c;
  int *local_168;
  byte *******local_164 [4];
  undefined4 local_154;
  uint local_150;
  char local_144 [16];
  undefined4 local_134;
  undefined4 local_130;
  char local_128 [8];
  int local_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fb09;
  iVar8 = *(int *)(param_1 + 0x20);
  ppvVar3 = &local_14;
  local_14 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (iVar8 == 4) {
      ExceptionList = local_14;
      return;
    }
    pppppppbStack_17c = (byte *******)param_1;
    pcStack_180 = (char *)0x866efd;
    FUN_009a1440();
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 == 0x3e2) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x866f25;
      FUN_00409350();
    }
    else if (iVar8 == 0x3e3) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x866f53;
      FUN_00409350();
    }
    else if (iVar8 == 0xa9b) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x866f83;
      FUN_00409350();
    }
    else if (iVar8 == 0x2f0) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = (byte *******)((uint)local_164[0] & 0xffffff00);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x866fc7;
      FUN_00409350();
      pppppppbStack_17c = local_164[0];
      if (local_150 < 0x10) {
        pppppppbStack_17c = (byte *******)local_164;
      }
      pcStack_180 = local_128;
      uStack_184 = DAT_012587e4;
      uStack_188 = 0x866fec;
      puVar6 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x7c) = *puVar6;
      *(undefined4 *)(in_ECX + 0x80) = puVar6[1];
      if (0xf < local_150) {
        pppppppbStack_17c = local_164[0];
                    /* WARNING: Subroutine does not return */
        pcStack_180 = &UNK_0086700e;
        FUN_00aae91b();
      }
    }
    else if (iVar8 == 0xaa1) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = (byte *******)((uint)local_164[0]._1_3_ << 8);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x867055;
      FUN_00409350();
      pppppppbVar7 = local_164[0];
      if (local_150 < 0x10) {
        pppppppbVar7 = (byte *******)local_164;
      }
      pbVar9 = &DAT_00dfbbd0;
      do {
        bVar2 = *(byte *)pppppppbVar7;
        bVar12 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00867090:
          iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00867095;
        }
        if (bVar2 == 0) break;
        bVar2 = *(byte *)((int)pppppppbVar7 + 1);
        bVar12 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00867090;
        pppppppbVar7 = (byte *******)((int)pppppppbVar7 + 2);
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_00867095:
      *(bool *)(in_ECX + 0x40) = iVar8 == 0;
      if (0xf < local_150) {
        pppppppbStack_17c = local_164[0];
                    /* WARNING: Subroutine does not return */
        pcStack_180 = &UNK_008670a8;
        FUN_00aae91b();
      }
    }
    else if (iVar8 == 0xab9) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = (byte *******)((uint)local_164[0]._1_3_ << 8);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x867154;
      FUN_00409350();
      pppppppbStack_17c = (byte *******)0x867162;
      uVar4 = FUN_0040b360();
      *(undefined1 *)(in_ECX + 0x41) = uVar4;
      if (0xf < local_150) {
        pppppppbStack_17c = local_164[0];
                    /* WARNING: Subroutine does not return */
        pcStack_180 = &UNK_0086717a;
        FUN_00aae91b();
      }
    }
    else if (iVar8 == 0xab8) {
      pcStack_180 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_180;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppbStack_17c = (byte *******)((int)pcVar5 - (param_1 + 0x22d));
      uStack_184 = 0x8671a7;
      FUN_00409350();
    }
    else if (iVar8 == 0xa9e) {
      pppppppbStack_17c = (byte *******)0x928;
      pcStack_180 = (char *)0x8671bd;
      local_168 = (int *)FUN_00aae9af();
      local_c = 0;
      if (local_168 == (int *)0x0) {
        local_168 = (int *)0x0;
      }
      else {
        pppppppbStack_17c = *(byte ********)(in_ECX + 0xb4);
        uStack_184 = (uint)*(byte *)(in_ECX + 0x41);
        pcStack_180 = (char *)(in_ECX + 0x7c);
        uStack_188 = (uint)*(byte *)(in_ECX + 0x40);
        iStack_18c = in_ECX + 0x44;
        iStack_194 = 0x8671f2;
        piStack_190 = local_168;
        local_168 = (int *)FUN_00860ed0();
      }
      local_c = 0xffffffff;
      pppppppbStack_17c = (byte *******)param_1;
      pcStack_180 = (char *)0x86720f;
      (**(code **)(*local_168 + 0xc))();
      pppppppbStack_17c = (byte *******)&local_168;
      pcStack_180 = (char *)0x86721f;
      FUN_00868340();
    }
    else if (iVar8 == 0x2a1) {
      local_130 = 0xf;
      local_134 = 0;
      local_144[0] = '\0';
      pppppppbStack_17c = (byte *******)0x0;
      pcStack_180 = local_144;
      local_c = 1;
      uStack_184 = 0x867259;
      FUN_009a1750();
      local_168 = &iStack_194;
      FUN_00401320();
      puVar6 = (undefined4 *)FUN_0043ac50();
      *(undefined4 *)(in_ECX + 0x84) = *puVar6;
      local_c = 0xffffffff;
      pppppppbStack_17c = (byte *******)0x867290;
      FUN_00408ad0();
    }
    else if (iVar8 == 0xac5) {
      pppppppbStack_17c = (byte *******)0x8672a9;
      FUN_009a1c10();
    }
    else if (iVar8 == 0xac6) {
      pppppppbStack_17c = (byte *******)0x8672c2;
      FUN_009a1c10();
    }
    else if (iVar8 == 0xac7) {
      pppppppbStack_17c = (byte *******)0x8672df;
      FUN_009a1c10();
    }
    piVar10 = *(int **)(param_1 + 0x1c);
    if ((char)piVar10[0x44] == '\0') {
      pppppppbStack_17c = (byte *******)0x8670c3;
      iVar8 = (**(code **)(*piVar10 + 4))();
      piVar10[2] = iVar8;
      if (iVar8 == 0) {
        piVar10[3] = 0x13;
      }
      *(undefined1 *)(piVar10 + 0x44) = 1;
    }
    piVar10 = piVar10 + 3;
    piVar11 = local_120;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (local_120[0] == 4) {
      ExceptionList = local_14;
      return;
    }
    if (local_120[0] == 0x13) {
      ExceptionList = local_14;
      return;
    }
    iVar8 = *(int *)(param_1 + 0x20);
    ppvVar3 = ExceptionList;
  } while( true );
}

