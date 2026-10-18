// FUN_00724120 @ 00724120 body=[[00724120, 00724198] [0072419c, 007242d6] [007242e0, 00724385]]


void FUN_00724120(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float10 fVar9;
  float fStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("common_market_list",0x12);
  local_c = 0;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  if (piVar5[0x41] == 0) {
    fStack_40 = DAT_00f092dc;
  }
  else {
    fVar9 = (float10)(**(code **)(*(int *)(piVar5[0x41] + 0x54) + 0x10))();
    fStack_40 = (float)fVar9;
  }
  bVar3 = false;
  switch(*(undefined4 *)(in_ECX + 0x3b0)) {
  case 2:
    bVar3 = true;
  case 1:
    iStack_3c = (uint)iStack_3c._1_3_ << 8;
    FUN_007246e0(*(int *)(in_ECX + 0x3a0),*(int *)(in_ECX + 0x3a4),
                 *(int *)(in_ECX + 0x3a4) - *(int *)(in_ECX + 0x3a0) >> 2,iStack_3c);
    break;
  case 4:
    bVar3 = true;
  case 3:
    iStack_3c = (uint)iStack_3c._1_3_ << 8;
    FUN_00724a60(*(int *)(in_ECX + 0x3a0),*(int *)(in_ECX + 0x3a4),
                 *(int *)(in_ECX + 0x3a4) - *(int *)(in_ECX + 0x3a0) >> 2,iStack_3c);
    break;
  case 6:
    bVar3 = true;
  case 5:
    iStack_3c = (uint)iStack_3c._1_3_ << 8;
    FUN_00724b40(*(int *)(in_ECX + 0x3a0),*(int *)(in_ECX + 0x3a4),
                 *(int *)(in_ECX + 0x3a4) - *(int *)(in_ECX + 0x3a0) >> 2,iStack_3c);
    break;
  case 8:
    bVar3 = true;
  case 7:
    iStack_3c = (uint)iStack_3c._1_3_ << 8;
    FUN_00724c20(*(int *)(in_ECX + 0x3a0),*(int *)(in_ECX + 0x3a4),
                 *(int *)(in_ECX + 0x3a4) - *(int *)(in_ECX + 0x3a0) >> 2,iStack_3c);
    break;
  default:
    goto switchD_007241ed_default;
  }
  if (bVar3) {
    puVar8 = *(undefined4 **)(in_ECX + 0x3a4);
    puVar6 = *(undefined4 **)(in_ECX + 0x3a0);
    if (puVar6 != puVar8) {
      do {
        puVar8 = puVar8 + -1;
        if (puVar6 == puVar8) break;
        uVar7 = *puVar6;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        *puVar8 = uVar7;
      } while (puVar6 != puVar8);
    }
  }
switchD_007241ed_default:
  (**(code **)(*piVar5 + 0x24))();
  puVar8 = *(undefined4 **)(in_ECX + 0x3a0);
  uVar7 = extraout_ECX;
  while ((*(undefined4 **)(in_ECX + 0x3a0) <= puVar8 && (puVar8 < *(undefined4 **)(in_ECX + 0x3a4)))
        ) {
    piVar1 = (int *)*puVar8;
    puVar8 = puVar8 + 1;
    cVar4 = (**(code **)(*piVar1 + 0x30))();
    uVar7 = extraout_ECX_00;
    if (cVar4 != '\0') {
      (**(code **)(*piVar5 + 0x10))(piVar1,1);
      uVar7 = extraout_ECX_01;
    }
  }
  iVar2 = piVar5[0x41];
  if ((iVar2 != 0) && (DAT_00f092dc < fStack_40)) {
    FUN_00401000((fStack_40 + 0.0005) * 1000.0,uVar7,1,1);
    uVar7 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))(uVar7);
  }
  ExceptionList = pvStack_18;
  return;
}

