// FUN_0071a390 @ 0071a390 body=[[0071a390, 0071a4c9] [0071a4cd, 0071a505] [0071a509, 0071a641] [0071a645, 0071a667] [0071a66b, 0071a696] [0071a69a, 0071a6cb] [0071a6cf, 0071a6e3]]


/* WARNING: Removing unreachable block (ram,0x0071a65e) */
/* WARNING: Removing unreachable block (ram,0x0071a4fc) */

void FUN_0071a390(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uStack_7c;
  uint uStack_60;
  uint uStack_40;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b50674;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(DAT_012588e8 + 0xb5c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  uVar3 = *(uint *)(*(int *)(iVar2 + 0x11cc) +
                   (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x118c + iVar2) * 8);
  iVar2 = *(int *)(*(int *)(iVar2 + 0x1224) +
                  (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x11e4 + iVar2) * 8);
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  uVar6 = FUN_009ca140();
  local_c = CONCAT31(local_c._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  FUN_00408ed0(uVar6);
  FUN_00a5ecc0();
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar1 = iVar1 - iVar2;
  *(uint *)(in_ECX + 0x30) = uVar3;
  *(int *)(in_ECX + 0x34) = iVar1;
  if ((iVar1 < 1) && ((iVar1 < 0 || (uVar3 < 0x50000)))) {
    FUN_009ca140(2);
    puStack_10 = (undefined1 *)0x2;
    bVar5 = true;
    bVar4 = false;
  }
  else {
    FUN_009ca140(0);
    puStack_10 = (undefined1 *)0x3;
    bVar5 = false;
    bVar4 = true;
  }
  FUN_00409350();
  puStack_10 = (undefined1 *)0x4;
  uVar6 = FUN_00988fa0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  FUN_00408ed0(uVar6,0);
  FUN_00a5ecc0(uVar6);
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bVar4) && (0xf < uStack_60)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bVar5) && (0xf < uStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

