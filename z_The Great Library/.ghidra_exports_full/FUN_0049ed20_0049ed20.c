// FUN_0049ed20 @ 0049ed20 body=[[0049ed20, 0049ee5e] [0049ee62, 0049eef7] [0049eefb, 0049ef66]]


void FUN_0049ed20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *_Dst;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined1 auStack_174 [16];
  undefined4 uStack_164;
  int local_144 [67];
  undefined1 *local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93706;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    piVar4 = *(int **)(param_2 + 0x1c);
    if ((char)piVar4[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar2;
      if (iVar2 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar6 = local_144;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    if ((local_144[0] == 4) || (local_144[0] == 0x13)) {
      (**(code **)(**(int **)(param_2 + 0x1c) + 4))();
      ExceptionList = local_10;
      return;
    }
    FUN_009a1440();
    pcVar5 = (char *)(param_2 + 0x24);
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    puVar3 = DAT_0125ce80;
    if (DAT_0125ce80 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0x1ff;
        *puVar3 = 0;
        local_14 = puVar3;
        _Dst = (void *)FUN_00aad56b();
        puVar3[2] = _Dst;
        uStack_164 = 0x49ee24;
        _memset(_Dst,0,puVar3[1] * 4);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = (undefined4 *)0x0;
      if ((puVar3 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
        FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_0125ce80 = puVar3;
    local_8._0_1_ = 0;
    puVar3 = (undefined4 *)FUN_004dc420();
    if ((puVar3 == (undefined4 *)0x0) && (puVar3 = DAT_01258730, DAT_01258730 == (undefined4 *)0x0))
    {
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,3);
      local_14 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        DAT_01258730 = (undefined4 *)0x0;
        puVar3 = DAT_01258730;
      }
      else {
        local_38 = auStack_174;
        uStack_164 = 0;
        auStack_174[0] = 0;
        FUN_00409350("nobuilding",10);
        FUN_004d8b60(puVar3);
        *puVar3 = CNullBuilding::vftable;
        DAT_01258730 = puVar3;
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_20) break;
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    uStack_164 = 0x49ef20;
    iVar2 = FID_conflict__sscanf((char *)(param_2 + 0x22c),"%f");
    if (iVar2 == 0) {
      FUN_009a1140();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x340) + puVar3[0x16] * 4) = local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

