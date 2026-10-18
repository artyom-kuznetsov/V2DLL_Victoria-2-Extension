// FUN_00723c20 @ 00723c20 body=[[00723c20, 00723c98] [00723c9c, 00723daa] [00723db0, 00723e55]]


void FUN_00723c20(void)

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
  uint uStack_3c;
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
  FUN_00409350("market_activity_list",0x14);
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
  switch(*(undefined4 *)(in_ECX + 0x280)) {
  case 2:
    bVar3 = true;
  case 1:
    uStack_3c = uStack_3c & 0xffffff00;
    FUN_007246e0(*(int *)(in_ECX + 0x270),*(int *)(in_ECX + 0x274),
                 *(int *)(in_ECX + 0x274) - *(int *)(in_ECX + 0x270) >> 2,uStack_3c);
    break;
  case 4:
    bVar3 = true;
  case 3:
    uStack_3c = (uint)uStack_3c._1_3_ << 8;
    FUN_007247c0(*(int *)(in_ECX + 0x270),*(int *)(in_ECX + 0x274),
                 *(int *)(in_ECX + 0x274) - *(int *)(in_ECX + 0x270) >> 2,uStack_3c);
    break;
  case 6:
    bVar3 = true;
  case 5:
    uStack_3c = (uint)uStack_3c._1_3_ << 8;
    FUN_007248a0(*(int *)(in_ECX + 0x270),*(int *)(in_ECX + 0x274),
                 *(int *)(in_ECX + 0x274) - *(int *)(in_ECX + 0x270) >> 2,uStack_3c);
    break;
  default:
    goto switchD_00723ced_default;
  }
  if (bVar3) {
    puVar8 = *(undefined4 **)(in_ECX + 0x274);
    puVar6 = *(undefined4 **)(in_ECX + 0x270);
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
switchD_00723ced_default:
  (**(code **)(*piVar5 + 0x24))();
  puVar8 = *(undefined4 **)(in_ECX + 0x270);
  uVar7 = extraout_ECX;
  while ((*(undefined4 **)(in_ECX + 0x270) <= puVar8 && (puVar8 < *(undefined4 **)(in_ECX + 0x274)))
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

