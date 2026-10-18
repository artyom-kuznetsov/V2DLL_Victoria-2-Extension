// FUN_0078e820 @ 0078e820 body=[[0078e820, 0078e8c3] [0078e8c7, 0078e929] [0078e932, 0078e983] [0078e987, 0078e9e2] [0078e9e6, 0078eaab] [0078eaaf, 0078eb40] [0078eb44, 0078eba2] [0078eba6, 0078ec27] [0078ec30, 0078ec79] [0078ec82, 0078ecc4] [0078ecc8, 0078ed26] [0078ed2a, 0078eec7] [0078eecb, 0078ef2c] [0078ef30, 0078efa6] [0078efaa, 0078f00c] [0078f015, 0078f088] [0078f08c, 0078f0ea] [0078f0ee, 0078f165] [0078f169, 0078f1c2] [0078f1db, 0078f222] [0078f226, 0078f2cb] [0078f2cf, 0078f32d] [0078f331, 0078f38f] [0078f393, 0078f49e] [0078f4a2, 0078f766] [0078f76a, 0078f78b] [0078f78f, 0078f7c5]]


/* WARNING: Removing unreachable block (ram,0x0078f15c) */
/* WARNING: Removing unreachable block (ram,0x0078f003) */
/* WARNING: Removing unreachable block (ram,0x0078f495) */
/* WARNING: Removing unreachable block (ram,0x0078f1b9) */
/* WARNING: Removing unreachable block (ram,0x0078f0e1) */

void FUN_0078e820(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint unaff_EBX;
  undefined4 unaff_EDI;
  char *pcStack_150;
  char *pcStack_14c;
  uint *puStack_148;
  uint *puStack_144;
  char *pcStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint local_11c;
  undefined4 uStack_118;
  uint uStack_114;
  undefined4 uStack_104;
  uint uStack_100;
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [188];
  void *pvStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6c590;
  pvStack_14 = ExceptionList;
  puStack_144 = (uint *)0x78e851;
  ExceptionList = &pvStack_14;
  FUN_00790dc0();
  local_120 = 0;
  local_130 = local_130 & 0xffffff00;
  puStack_144 = (uint *)0x12;
  if (*(int *)(*(int *)(in_ECX + 0x23c) + 0x5c) == 0) {
    puStack_148 = (uint *)0xe160d0;
    local_11c = 0xf;
    pcStack_14c = (char *)0x78e945;
    FUN_00409350();
    local_c = 2;
    puStack_144 = &local_130;
    puStack_148 = (uint *)0x78e95f;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    puStack_148 = (uint *)0x78e968;
    (**(code **)(*piVar2 + 0x34))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < local_120) {
      puStack_148 = (uint *)pcStack_134;
                    /* WARNING: Subroutine does not return */
      pcStack_14c = &UNK_0078e984;
      FUN_00aae91b();
    }
    puStack_148 = (uint *)0x12;
    pcStack_14c = "detach_unit_button";
    local_120 = 0xf;
    uStack_124 = 0;
    pcStack_134 = (char *)((uint)pcStack_134 & 0xffffff00);
    pcStack_150 = (char *)0x78e9a4;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x3;
    puStack_148 = (uint *)&pcStack_134;
    pcStack_14c = (char *)0x78e9be;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    pcStack_14c = (char *)0x78e9c7;
    (**(code **)(*piVar2 + 0x38))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      pcStack_150 = &UNK_0078e9e3;
      FUN_00aae91b();
    }
    pcStack_14c = (char *)(in_ECX + -0x1c);
    pcStack_150 = (char *)0x78e9ef;
    iVar3 = FUN_0078f7d0();
    if (iVar3 == 0) {
LAB_0078ea4d:
      pcStack_14c = (char *)0x12;
      pcStack_150 = "attach_unit_button";
      uStack_124 = 0xf;
      uStack_128 = 0;
      FUN_00409350();
      pvStack_14 = (void *)0x4;
      pcStack_14c = &stack0xfffffec8;
      pcStack_150 = (char *)0x78ea84;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      pcVar4 = *(code **)(*piVar2 + 0xbc);
    }
    else {
      pcStack_14c = (char *)0x78e9fe;
      cVar1 = FUN_005cc390();
      if (cVar1 != '\0') goto LAB_0078ea4d;
      pcStack_14c = (char *)0x12;
      pcStack_150 = "attach_unit_button";
      uStack_124 = 0xf;
      uStack_128 = 0;
      FUN_00409350();
      pvStack_14 = (void *)0x5;
      pcStack_14c = &stack0xfffffec8;
      pcStack_150 = (char *)0x78ea3c;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      pcVar4 = *(code **)(*piVar2 + 0xb8);
    }
    pcStack_150 = (char *)0x78ea90;
    (*pcVar4)();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      pcStack_150 = &UNK_0078eaac;
      pcStack_14c = (char *)(unaff_EBX & 0xffffff00);
      FUN_00aae91b();
    }
  }
  else {
    puStack_148 = (uint *)0xe160e4;
    local_11c = 0xf;
    pcStack_14c = (char *)0x78e885;
    FUN_00409350();
    local_c = 0;
    puStack_144 = &local_130;
    puStack_148 = (uint *)0x78e89b;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    puStack_148 = (uint *)0x78e8a4;
    (**(code **)(*piVar2 + 0x34))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < local_120) {
      puStack_148 = (uint *)pcStack_134;
                    /* WARNING: Subroutine does not return */
      pcStack_14c = &UNK_0078e8c4;
      FUN_00aae91b();
    }
    puStack_148 = (uint *)0x12;
    pcStack_14c = "attach_unit_button";
    local_120 = 0xf;
    uStack_124 = 0;
    pcStack_134 = (char *)((uint)pcStack_134 & 0xffffff00);
    pcStack_150 = (char *)0x78e8e8;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1;
    puStack_148 = (uint *)&pcStack_134;
    pcStack_14c = (char *)0x78e902;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    pcStack_14c = (char *)0x78e90b;
    (**(code **)(*piVar2 + 0x38))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      pcStack_150 = &UNK_0078e92a;
      FUN_00aae91b();
    }
  }
  pvStack_14 = (void *)0xffffffff;
  pcStack_14c = (char *)0x78eac1;
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x38))();
  if (cVar1 == '\0') {
    pcStack_14c = (char *)0xd;
    pcStack_150 = "unload_button";
    uStack_124 = 0xf;
    uStack_128 = 0;
    FUN_00409350();
    pvStack_14 = (void *)0x18;
    pcStack_14c = &stack0xfffffec8;
    pcStack_150 = (char *)0x78f2a8;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    pcStack_150 = (char *)0x78f2b1;
    (**(code **)(*piVar2 + 0x38))();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pcStack_150 = (char *)0xb;
    uStack_128 = 0xf;
    uStack_12c = 0;
    FUN_00409350("load_button");
    uStack_18 = 0x19;
    pcStack_150 = &stack0xfffffec4;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    (**(code **)(*piVar2 + 0x38))();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EDI);
    }
    uStack_12c = 0xf;
    local_130 = 0;
    FUN_00409350("enable_rebel_button",0x13);
    uStack_1c = 0x1a;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
    (**(code **)(*piVar2 + 0x38))();
    uStack_24 = 0xffffffff;
    if ((char *)0xf < pcStack_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_148);
    }
    pcStack_134 = (char *)0xf;
    puStack_148 = (uint *)((uint)puStack_148 & 0xffffff00);
    FUN_00409350("disable_rebel_button",0x14);
    uStack_24 = 0x1b;
  }
  else {
    pcStack_14c = (char *)0x78ead6;
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x2c))();
    pcStack_14c = (char *)0xd;
    uStack_124 = 0xf;
    uStack_128 = 0;
    pcStack_150 = "unload_button";
    if (*(int *)(iVar3 + 0x1b4) == 0) {
      FUN_00409350();
      pvStack_14 = (void *)0xa;
      pcStack_14c = &stack0xfffffec8;
      pcStack_150 = (char *)0x78eca1;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      pcStack_150 = (char *)0x78ecaa;
      (**(code **)(*piVar2 + 0x38))();
      uStack_18 = 0xffffffff;
      if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pcStack_150 = (char *)0xb;
      uStack_128 = 0xf;
      uStack_12c = 0;
      FUN_00409350("load_button");
      uStack_18 = 0xb;
      pcStack_150 = &stack0xfffffec4;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      (**(code **)(*piVar2 + 0x34))();
      uStack_1c = 0xffffffff;
      if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EDI);
      }
      iVar3 = FUN_0078e720(in_ECX + -0x1c);
      if (iVar3 == 0) {
        FUN_0078e7d0();
        if ((*(int *)(*(int *)(in_ECX + 0x244) + 0x2c) - *(int *)(*(int *)(in_ECX + 0x244) + 0x28))
            / 0x2c < 1) {
          FUN_009885d0();
          uStack_1c = 0xe;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
          (**(code **)(*piVar2 + 0x48))(1);
          uStack_24 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_24 = 0xf;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
          pcVar4 = *(code **)(*piVar2 + 0xbc);
        }
        else {
          FUN_009885d0();
          uStack_1c = 0xc;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
          (**(code **)(*piVar2 + 0x48))(2);
          uStack_24 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_24 = 0xd;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
          pcVar4 = *(code **)(*piVar2 + 0xb8);
        }
        (*pcVar4)();
        uStack_20 = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        uStack_12c = 0xf;
        local_130 = 0;
        FUN_00409350("load_button",0xb);
        uStack_1c = 0x10;
        piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
        (**(code **)(*piVar2 + 0x48))(1);
        uStack_24 = 0xffffffff;
        if ((char *)0xf < pcStack_134) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_148);
        }
        pcStack_134 = (char *)0xf;
        puStack_148 = (uint *)((uint)puStack_148 & 0xffffff00);
        FUN_00409350("load_button",0xb);
        uStack_24 = 0x11;
        piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
        (**(code **)(*piVar2 + 0xb8))();
        uStack_20 = 0xffffffff;
        if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_144);
        }
      }
      cVar1 = FUN_005cc390();
      if (cVar1 == '\0') {
        local_130 = 0xf;
        pcStack_134 = (char *)0x0;
        puStack_144 = (uint *)((uint)puStack_144 & 0xffffff00);
        if (*(char *)(*(int *)(in_ECX + 0x23c) + 0x78) == '\0') {
          FUN_00409350("enable_rebel_button",0x13);
          uStack_20 = 0x16;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_144);
          (**(code **)(*piVar2 + 0x34))();
          uStack_24 = 0xffffffff;
          if ((char *)0xf < pcStack_134) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puStack_148);
          }
          pcStack_134 = (char *)0xf;
          puStack_148 = (uint *)((uint)puStack_148 & 0xffffff00);
          FUN_00409350("disable_rebel_button",0x14);
          uStack_24 = 0x17;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
          pcVar4 = *(code **)(*piVar2 + 0x38);
        }
        else {
          FUN_00409350("enable_rebel_button",0x13);
          uStack_20 = 0x14;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_144);
          (**(code **)(*piVar2 + 0x38))();
          uStack_24 = 0xffffffff;
          if ((char *)0xf < pcStack_134) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puStack_148);
          }
          pcStack_134 = (char *)0xf;
          puStack_148 = (uint *)((uint)puStack_148 & 0xffffff00);
          FUN_00409350("disable_rebel_button",0x14);
          uStack_24 = 0x15;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
          pcVar4 = *(code **)(*piVar2 + 0x34);
        }
        (*pcVar4)();
        goto LAB_0078f0f3;
      }
    }
    else {
      FUN_00409350();
      pvStack_14 = (void *)0x6;
      pcStack_14c = &stack0xfffffec8;
      pcStack_150 = (char *)0x78eb1d;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      pcStack_150 = (char *)0x78eb26;
      (**(code **)(*piVar2 + 0x34))();
      uStack_18 = 0xffffffff;
      if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pcStack_150 = (char *)0xb;
      uStack_128 = 0xf;
      uStack_12c = 0;
      FUN_00409350("load_button");
      uStack_18 = 7;
      pcStack_150 = &stack0xfffffec4;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
      (**(code **)(*piVar2 + 0x38))();
      uStack_1c = 0xffffffff;
      if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EDI);
      }
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x2c))();
      uStack_12c = 0xf;
      local_130 = 0;
      if (*(char *)(*(int *)(*(int *)(iVar3 + 0xdc) + 0x5c) + 0x2a) == '\0') {
        FUN_00409350("unload_button",0xd);
        uStack_1c = 8;
        piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
        (**(code **)(*piVar2 + 0xbc))();
        uStack_20 = 0xffffffff;
        if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_144);
        }
      }
      else {
        FUN_00409350("unload_button",0xd);
        uStack_1c = 9;
        piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&stack0xfffffec0);
        (**(code **)(*piVar2 + 0xb8))();
        uStack_20 = 0xffffffff;
        if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puStack_144);
        }
      }
    }
    local_130 = 0xf;
    pcStack_134 = (char *)0x0;
    puStack_144 = (uint *)((uint)puStack_144 & 0xffffff00);
    FUN_00409350("enable_rebel_button",0x13);
    uStack_20 = 0x12;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_144);
    (**(code **)(*piVar2 + 0x38))();
    uStack_24 = 0xffffffff;
    if ((char *)0xf < pcStack_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_148);
    }
    pcStack_134 = (char *)0xf;
    puStack_148 = (uint *)((uint)puStack_148 & 0xffffff00);
    FUN_00409350("disable_rebel_button",0x14);
    uStack_24 = 0x13;
  }
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&puStack_148);
  (**(code **)(*piVar2 + 0x38))();
LAB_0078f0f3:
  uStack_28 = 0xffffffff;
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x3c))();
  if (cVar1 == '\0') {
    pcStack_14c = (char *)((uint)pcStack_14c & 0xffffff00);
    FUN_00409350();
    uStack_28 = 0x1c;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x3c))(&pcStack_14c);
    (**(code **)(*piVar2 + 0x38))();
    uStack_2c = 0xffffffff;
    pcStack_150 = (char *)((uint)pcStack_150 & 0xffffff00);
    FUN_00409350("select_land",0xb);
    uStack_2c = 0x1d;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    (**(code **)(*piVar2 + 0x38))();
  }
  else {
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x30))();
    if (*(int *)(iVar3 + 0x1ac) < 1) {
      FUN_009885d0();
      uStack_28 = 0x1f;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&pcStack_14c);
      pcVar4 = *(code **)(*piVar2 + 0xbc);
    }
    else {
      FUN_009885d0();
      uStack_28 = 0x1e;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(&pcStack_14c);
      pcVar4 = *(code **)(*piVar2 + 0xb8);
    }
    (*pcVar4)();
    uStack_2c = 0xffffffff;
    FUN_00408ad0();
    pcStack_150 = (char *)((uint)pcStack_150 & 0xffffff00);
    FUN_00409350("LOAD_CAPACITY_LABEL",0x13);
    uStack_2c = 0x20;
    FUN_009a8ee0(auStack_f4,&pcStack_150);
    uStack_2c._0_1_ = 0x22;
    pcStack_150 = (char *)((uint)pcStack_150 & 0xffffff00);
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x23c) + 0x30))();
    if (*(int *)(iVar3 + 0x1ac) == 0) {
      FUN_009885d0();
      uStack_2c._0_1_ = 0x23;
      FUN_009888f0();
      uStack_2c = CONCAT31(uStack_2c._1_3_,0x24);
      FUN_009a9980();
      FUN_00408ad0();
    }
    else {
      iVar3 = *(int *)((*(int **)(in_ECX + 0x23c))[0x29] + 600);
      (**(code **)(**(int **)(in_ECX + 0x23c) + 0x30))();
      iVar5 = FUN_005dc560();
      local_130 = iVar3 / 1000 - iVar5;
      FUN_009885d0();
      uStack_2c._0_1_ = 0x25;
      FUN_009885d0();
      uStack_2c._0_1_ = 0x26;
      FUN_009885d0();
      uStack_2c._0_1_ = 0x27;
      pcStack_134 = (char *)FUN_009888f0();
      uStack_2c._0_1_ = 0x28;
      FUN_009888f0();
      uStack_2c._0_1_ = 0x29;
      FUN_00988f20();
      uStack_2c._0_1_ = 0x2a;
      FUN_00988f20();
      uStack_2c._0_1_ = 0x2b;
      FUN_00988f20();
      uStack_2c = CONCAT31(uStack_2c._1_3_,0x2c);
      FUN_009a9980();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    uStack_2c._0_1_ = 0x22;
    FUN_00408ad0();
    uStack_118 = 0xf;
    local_11c = 0;
    uStack_12c = uStack_12c & 0xffffff00;
    FUN_00409350("header",6);
    uStack_2c._0_1_ = 0x2d;
    iVar3 = FUN_00475500();
    uVar6 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    uStack_2c = CONCAT31(uStack_2c._1_3_,0x2e);
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))();
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_114);
    }
    uStack_100 = 0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    uStack_30 = 0xffffffff;
    FUN_009a9740(auStack_f8);
  }
  ExceptionList = pvStack_38;
  return;
}

