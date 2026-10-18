// FUN_0049d040 @ 0049d040 body=[[0049d040, 0049d06b] [0049d070, 0049d10e] [0049d112, 0049d145]]


/* WARNING: Removing unreachable block (ram,0x0049d0bf) */

int * FUN_0049d040(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_34 [5];
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  puVar5 = *(undefined4 **)(param_1 + 0x2a78);
  ExceptionList = &pvStack_14;
  while( true ) {
    uStack_c = 0xffffffff;
    if ((puVar5 < *(undefined4 **)(param_1 + 0x2a78)) ||
       (*(undefined4 **)(param_1 + 0x2a7c) <= puVar5)) {
      ExceptionList = pvStack_14;
      return (int *)0x0;
    }
    piVar1 = (int *)*puVar5;
    puVar5 = puVar5 + 1;
    iVar3 = (**(code **)(*piVar1 + 0x2c))(local_34);
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar2 = *(uint *)(iVar3 + 0x10);
    uVar6 = uVar2;
    if (uVar4 <= uVar2) {
      uVar6 = uVar4;
    }
    iVar3 = FUN_00414bd0(uVar6);
    bVar7 = false;
    if (iVar3 == 0) {
      if (uVar2 < uVar4) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar2 != uVar4);
      }
      bVar7 = uVar4 == 0;
    }
    uStack_c = 0xffffffff;
    if (0xf < uStack_20) break;
    if (bVar7) {
      ExceptionList = pvStack_14;
      return piVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

