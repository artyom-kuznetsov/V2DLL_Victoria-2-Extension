// FUN_00734120 @ 00734120 body=[[00734120, 00734335] [0073433b, 0073435d] [00734361, 00734394] [00734398, 007343bc]]


void FUN_00734120(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  code *pcVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f13f;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CBuildUnitView::vftable;
  local_8 = 0xd;
  if (*(char *)(in_ECX + 0x19) == '\0') {
    pcVar4 = *(code **)(*(int *)in_ECX[0x18] + 0x50);
  }
  else {
    pcVar4 = *(code **)(((int *)in_ECX[0x18])[6] + 0x38);
  }
  (*pcVar4)();
  iVar5 = in_ECX[0x23];
  while (iVar5 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar5 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[0x23] != 0) && (iVar5 = in_ECX[0x23] + -1, in_ECX[0x23] = iVar5, iVar5 == 0)) {
      in_ECX[0x22] = 0;
    }
    iVar5 = in_ECX[0x23];
  }
  iVar5 = in_ECX[0x29];
  while (iVar5 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar5 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[0x29] != 0) && (iVar5 = in_ECX[0x29] + -1, in_ECX[0x29] = iVar5, iVar5 == 0)) {
      in_ECX[0x28] = 0;
    }
    iVar5 = in_ECX[0x29];
  }
  iVar5 = in_ECX[0x2f];
  while (iVar5 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar5 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((in_ECX[0x2f] != 0) && (iVar5 = in_ECX[0x2f] + -1, in_ECX[0x2f] = iVar5, iVar5 == 0)) {
      in_ECX[0x2e] = 0;
    }
    iVar5 = in_ECX[0x2f];
  }
  in_ECX[0x59] = CButtonObserver::vftable;
  in_ECX[0x54] = CWindowObserver::vftable;
  in_ECX[0x50] = CWindowObserver::vftable;
  in_ECX[0x4a] = CScrollbarObserver::vftable;
  in_ECX[0x44] = CScrollbarObserver::vftable;
  if (in_ECX[0x3e] != 0) {
    FUN_005e5d30(in_ECX);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  if (in_ECX[0x3a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3a]);
  }
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  if (in_ECX[0x36] != 0) {
    FUN_004651b0(in_ECX[0x37]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x36]);
  }
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x2b]);
}

