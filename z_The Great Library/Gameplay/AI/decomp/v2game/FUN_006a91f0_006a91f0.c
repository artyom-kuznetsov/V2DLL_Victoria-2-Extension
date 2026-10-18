// FUN_006a91f0 @ 006a91f0 body=[[006a91f0, 006a92e3]]


void FUN_006a91f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvStack_10 = ExceptionList;
  puStack_c = &LAB_00b50d67;
  ExceptionList = &pvStack_10;
  *in_ECX = CMilitaryView::vftable;
  local_8 = 0xd;
  iVar4 = in_ECX[0xa1];
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
    if ((in_ECX[0xa1] != 0) && (iVar4 = in_ECX[0xa1] + -1, in_ECX[0xa1] = iVar4, iVar4 == 0)) {
      in_ECX[0xa0] = 0;
    }
    iVar4 = in_ECX[0xa1];
  }
  if (in_ECX[0x1c] != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX[0x1c] + 0x60) + 0x18) + 0x38))();
    if ((undefined4 *)in_ECX[0x1c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x1c])(1);
    }
    in_ECX[0x1c] = 0;
  }
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x9d]);
}

