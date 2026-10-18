// FUN_0071aa60 @ 0071aa60 body=[[0071aa60, 0071ab7c] [0071ab80, 0071abb1] [0071abb5, 0071ac84] [0071ac88, 0071acb2] [0071acb6, 0071acca]]


/* WARNING: Removing unreachable block (ram,0x0071aca9) */
/* WARNING: Removing unreachable block (ram,0x0071aba8) */

void FUN_0071aa60(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iStack_98;
  undefined4 uStack_5c;
  uint uStack_40;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b50603;
  pvStack_14 = ExceptionList;
  uVar3 = *(undefined4 *)
           (*(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x5fc) + 4 +
           (uint)*(byte *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x5bc +
                          *(int *)(*(int *)(in_ECX + 0x28) + 8)) * 8);
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  uVar2 = FUN_009ca140();
  local_c = CONCAT31(local_c._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  FUN_00408ed0(uVar2);
  FUN_00a5ecc0();
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x2;
  puVar1 = (undefined4 *)
           (*(int *)(iStack_98 + 0x2c8) +
           (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x288 + iStack_98) * 8);
  __allmul(*puVar1,puVar1[1],uStack_5c,uVar3);
  uVar3 = FUN_009ca140(0);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  FUN_00408ed0(uVar3,0);
  FUN_00a5ecc0(uVar3);
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

