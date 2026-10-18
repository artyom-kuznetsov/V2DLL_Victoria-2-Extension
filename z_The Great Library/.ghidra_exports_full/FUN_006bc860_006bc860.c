// FUN_006bc860 @ 006bc860 body=[[006bc860, 006bc9ed] [006bc9f1, 006bca1e] [006bca22, 006bcbf0]]


/* WARNING: Removing unreachable block (ram,0x006bc9e4) */

void FUN_006bc860(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  float fVar7;
  undefined4 uStack_84;
  int *piStack_78;
  undefined4 uStack_58;
  undefined1 local_54 [16];
  uint local_44;
  undefined4 local_40;
  char local_38 [32];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6e558;
  pvStack_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x5cc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x5cc) + -8;
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  iVar5 = *(int *)(in_ECX + 0x998);
  fVar7 = 0.0;
  if (iVar5 == 6) {
    fVar7 = *(float *)(*(int *)(iVar2 + 0x350) + *(int *)(*(int *)(in_ECX + 0xaa8) + 0x58) * 4);
  }
  else if (iVar5 == 5) {
    fVar7 = *(float *)(iVar2 + 0x6c);
  }
  else if (iVar5 == 7) {
    fVar7 = *(float *)(iVar2 + 0x1dc);
  }
  fVar7 = fVar7 * 57.295776 - 5.0;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 360.0;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("nudge_rotation",0xe);
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  pcVar3 = __itoa((int)fVar7,local_38,10);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_c = CONCAT31(local_c._1_3_,2);
  (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))(local_54);
  FUN_009e7500();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  iVar5 = piStack_78[0x266];
  if (iVar5 == 6) {
    *(undefined4 *)(*(int *)(iVar2 + 0x350) + *(int *)(piStack_78[0x2aa] + 0x58) * 4) = uStack_84;
  }
  else {
    if (iVar5 == 5) {
      *(undefined4 *)(iVar2 + 0x6c) = uStack_84;
      iVar2 = *(int *)(iVar2 + 0xb4);
      iVar4 = (**(code **)(*piStack_78 + 0x38))();
      iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x20d8) + iVar2 * 4) + 8);
      FUN_007f18b0(iVar4 + 0x20bc,iVar2,iVar5 + 0x3c,*(undefined4 *)(iVar5 + 0x6c),
                   *(undefined4 *)(iVar5 + 0x70));
      ExceptionList = pvStack_18;
      return;
    }
    if (iVar5 != 7) {
      if (iVar5 == 8) {
        iVar2 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
        DAT_012589a8 = DAT_012589a8 + -1;
        if (iVar2 <= DAT_012589a8) {
          DAT_012589a8 = iVar2 + -1;
        }
        if (DAT_012589a8 < 0) {
          DAT_012589a8 = 0;
        }
        FUN_004959b0();
        FUN_0044ed90();
        FUN_0044ed90();
        FUN_006bcea0();
      }
      ExceptionList = pvStack_18;
      return;
    }
    *(undefined4 *)(iVar2 + 0x1dc) = uStack_84;
  }
  if (piStack_78[0x173] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = piStack_78[0x173] + -8;
  }
  *(undefined1 *)(iVar2 + 0x28) = 1;
  *(undefined1 *)(*(int *)(piStack_78[0x2d] + 0x124) + 0x3a28) = 1;
  FUN_006b6e70(piStack_78,iVar5);
  ExceptionList = pvStack_18;
  return;
}

