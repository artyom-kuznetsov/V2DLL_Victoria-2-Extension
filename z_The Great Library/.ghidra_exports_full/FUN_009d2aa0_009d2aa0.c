// FUN_009d2aa0 @ 009d2aa0 body=[[009d2aa0, 009d2c85] [009d2c89, 009d2cad] [009d2cb1, 009d2cd2] [009d2cd6, 009d2d00] [009d2d04, 009d2d28] [009d2d2c, 009d2d4b] [009d2d4f, 009d2d89] [009d2d90, 009d2df6] [009d2e00, 009d2f66] [009d2f6a, 009d2f7e]]


undefined1 * FUN_009d2aa0(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  undefined *puVar5;
  int in_ECX;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char local_184 [32];
  char local_164 [32];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_dc;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined4 ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_18;
  undefined1 local_16;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56cf1;
  local_10 = ExceptionList;
  local_14 = (char *)0x0;
  piVar8 = (int *)(in_ECX + 8);
  local_dc = 0;
  local_134 = 0;
  local_130 = 0;
  local_144 = 0x67452301;
  local_140 = 0xefcdab89;
  local_13c = 0x98badcfe;
  local_138 = 0x10325476;
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
    piVar8 = (int *)*piVar8;
  }
  ExceptionList = &local_10;
  FUN_00a1d420(piVar8);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (undefined4 ***)((uint)local_4c[0] & 0xffffff00);
  local_8 = 0;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x18),local_184,10);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_8 = 1;
  ppppuVar4 = (undefined4 ****)local_4c[0];
  if (local_38 < 0x10) {
    ppppuVar4 = local_4c;
  }
  FUN_00a1d420(ppppuVar4);
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar2 = __itoa(*(int *)(in_ECX + 0xdc),local_164,10);
  iVar9 = 0;
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_20 = 0xf00000000;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 4;
  pcVar2 = __itoa(*(int *)(in_ECX + 0xd8),local_164,10);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_14 = (char *)(in_ECX + 0x5c);
  local_8._0_1_ = 5;
  FUN_00988f20(local_14);
  local_8._0_1_ = 6;
  FUN_00988f20(in_ECX + 0xe0);
  local_8._0_1_ = 7;
  FUN_00988f20(local_30);
  local_8._0_1_ = 8;
  uVar3 = FUN_00988f20(local_68);
  local_8._0_1_ = 9;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d8);
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_20._4_4_) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_20 = 0xf00000000;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ppppuVar4 = (undefined4 ****)local_4c[0];
  if (local_38 < 0x10) {
    ppppuVar4 = local_4c;
  }
  FUN_00a1d420(ppppuVar4);
  iVar10 = 0;
  if (0 < (*(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78)) / 0x1c) {
    do {
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x78) + iVar9);
      if (0xf < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      FUN_00a1d420(puVar7);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (iVar10 < (*(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78)) / 0x1c);
  }
  iVar9 = 0;
  iVar10 = 0;
  if (0 < (*(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x88)) / 0x1c) {
    do {
      piVar8 = (int *)(iVar9 + *(int *)(in_ECX + 0x88));
      if (0xf < *(uint *)(iVar9 + 0x14 + *(int *)(in_ECX + 0x88))) {
        piVar8 = (int *)*piVar8;
      }
      FUN_00a1d420(piVar8);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x1c;
    } while (iVar10 < (*(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x88)) / 0x1c);
  }
  puVar5 = &DAT_00dfd424;
  if (*(char *)(in_ECX + 0xd0) == '\0') {
    puVar5 = &DAT_00e3b3fc;
  }
  FUN_00a1d420(puVar5);
  pcVar6 = local_14;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    pcVar2 = local_14;
    if (0xf < *(uint *)(local_14 + 0x14)) {
      pcVar2 = *(char **)local_14;
    }
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
       (iVar9 = PHYSFS_exists(pcVar2), iVar9 != 0)) {
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_14 = (char *)PHYSFS_openRead(pcVar6);
      local_8._0_1_ = 10;
      FUN_00a1d690();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_14 != (char *)0x0) {
        PHYSFS_close(local_14);
      }
    }
  }
  local_28 = 0x3372306364723468;
  local_18 = 0x6566;
  local_20 = 0x796c3472336d6147;
  local_16 = 0;
  FUN_00a1d420(&local_28);
  FUN_00a1d6f0();
  pcVar2 = (char *)FUN_00a1d7c0(&local_144);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  if (local_38 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

