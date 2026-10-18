// FUN_006ef230 @ 006ef230 body=[[006ef230, 006ef2dc] [006ef2e0, 006ef47a] [006ef47e, 006ef493] [006ef497, 006ef4c0]]


void FUN_006ef230(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int iVar4;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50a0b;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CProductionView::vftable;
  local_8 = 0x1c;
  FUN_006ef840();
  (**(code **)(*(int *)in_ECX[0x1f] + 0x5c))();
  (**(code **)(*(int *)in_ECX[0x20] + 0x5c))();
  (**(code **)(*(int *)in_ECX[0x21] + 0x5c))();
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("project_listbox",0xf);
  local_8._0_1_ = 0x1d;
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x22] + 0x7c))(local_48);
  (**(code **)(*piVar2 + 0x5c))();
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  iVar4 = in_ECX[0x57];
  while (iVar4 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[0x57] != 0) && (iVar4 = in_ECX[0x57] + -1, in_ECX[0x57] = iVar4, iVar4 == 0)) {
      in_ECX[0x56] = 0;
    }
    iVar4 = in_ECX[0x57];
  }
  iVar4 = in_ECX[0x5d];
  while (iVar4 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[0x5d] != 0) && (iVar4 = in_ECX[0x5d] + -1, in_ECX[0x5d] = iVar4, iVar4 == 0)) {
      in_ECX[0x5c] = 0;
    }
    iVar4 = in_ECX[0x5d];
  }
  iVar4 = in_ECX[99];
  while (iVar4 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[99] != 0) && (iVar4 = in_ECX[99] + -1, in_ECX[99] = iVar4, iVar4 == 0)) {
      in_ECX[0x62] = 0;
    }
    iVar4 = in_ECX[99];
  }
  iVar4 = in_ECX[0xee];
  if (iVar4 != 0) {
    FUN_00476a00(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar4);
  }
  iVar4 = in_ECX[0x11d];
  if (iVar4 != 0) {
    FUN_0043d360(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar4);
  }
  in_ECX[0x112] = CButtonObserver::vftable;
  in_ECX[0x107] = CButtonObserver::vftable;
  in_ECX[0xfc] = CButtonObserver::vftable;
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0xf6]);
}

