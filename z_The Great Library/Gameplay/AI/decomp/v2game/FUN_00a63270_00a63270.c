// FUN_00a63270 @ 00a63270 body=[[00a63270, 00a633a9] [00a633ad, 00a63509] [00a6350e, 00a63558] [00a6355c, 00a63575] [00a63579, 00a6358d] [00a63591, 00a635b3]]


void FUN_00a63270(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  uint uVar6;
  int *local_114;
  int local_110;
  undefined **ppuStack_10c;
  undefined **ppuStack_108;
  undefined4 *puStack_104;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  void *pvStack_f8;
  int *local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5cedf;
  pvStack_14 = ExceptionList;
  piVar3 = *(int **)(in_ECX + 0xa0);
  if ((piVar3[0x20] != piVar3[0x20]) ||
     (ExceptionList = &pvStack_14, piVar3[0x20] != piVar3[0x42] + *piVar3)) {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = (int *)((uint)local_f4[0] & 0xffffff00);
    ExceptionList = &pvStack_14;
    local_110 = in_ECX;
    FUN_00409350("server.cpp",10);
    local_c = 0;
    uVar2 = FUN_004015b0(local_f4,0x454,0x301);
    local_c._0_1_ = 1;
    piVar3 = *(int **)(in_ECX + 0xa0);
    uVar6 = (piVar3[0x20] - piVar3[0x42]) - *piVar3;
    FUN_00987d50(uVar2,"Sending ",8,0);
    uVar2 = FUN_00447240(uVar2,((int)uVar6 < 0) - 1 & uVar6,extraout_ECX," commands");
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_c = 0xffffffff;
    in_ECX = local_110;
    piVar3 = local_f4[0];
    if (0xf < local_e0) goto LAB_00a633a5;
  }
  do {
    piVar3 = *(int **)(in_ECX + 0xa0);
    if ((piVar3[0x20] == piVar3[0x20]) && (piVar3[0x20] == piVar3[0x42] + *piVar3)) {
      ExceptionList = pvStack_14;
      return;
    }
    local_114 = (int *)0x0;
    FUN_00a6ab10(in_ECX + 0x9c,&local_114);
    piVar1 = local_114;
  } while (local_114 == (int *)0x0);
  piVar3 = (int *)FUN_00aae9af(0x3c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[0xd] = 0xf;
    piVar3[0xc] = 0;
    *(undefined1 *)(piVar3 + 8) = 0;
  }
  ppuStack_10c = (undefined **)FUN_00aae9af(0x3c);
  local_c = 2;
  if (ppuStack_10c == (undefined **)0x0) {
    uStack_100 = 0;
  }
  else {
    uStack_100 = FUN_009d5450(ppuStack_10c,piVar3,1,0,0);
  }
  ppuStack_108 = &PTR_FUN_00e38528;
  puStack_104 = (undefined4 *)0x0;
  uStack_fb = 1;
  uStack_fc = *(char *)(uStack_100 + 0x13) != '\0';
  local_c = 3;
  (**(code **)(*piVar1 + 0x1c))();
  FUN_009a0940(&ppuStack_108);
  (**(code **)(*piVar1 + 4))(&ppuStack_108);
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_10c = &PTR_FUN_00e38528;
  if ((puStack_104 != (undefined4 *)0x0) && (uStack_100._1_1_ != '\0')) {
    (**(code **)*puStack_104)(1);
  }
  local_110 = *piVar3;
  iVar4 = piVar3[1] - local_110;
  puVar5 = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(0x10);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  pvStack_f8 = (void *)(*(code *)PTR__malloc_00f071f8)(iVar4);
  if (pvStack_f8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  puVar5[2] = pvStack_f8;
  if (ppuStack_10c != (undefined **)0x0) {
    FID_conflict__memcpy(pvStack_f8,ppuStack_10c,(size_t)local_114);
  }
  *puVar5 = 0;
  puVar5[1] = 1;
  puVar5[3] = local_114;
  FUN_00a8ac70(*(undefined4 *)(local_110 + 0x18),0,puVar5);
  if (0xf < (uint)piVar3[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3[8]);
  }
  piVar3[0xd] = 0xf;
  piVar3[0xc] = 0;
  *(undefined1 *)(piVar3 + 8) = 0;
  if (piVar3[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar3[4]);
  }
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar3);
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
LAB_00a633a5:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

