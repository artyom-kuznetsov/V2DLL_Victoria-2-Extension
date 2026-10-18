// FUN_00a6fc20 @ 00a6fc20 body=[[00a6fc20, 00a6fd5a]]


/* WARNING: Removing unreachable block (ram,0x00a6fc91) */
/* WARNING: Removing unreachable block (ram,0x00a6fcf0) */

void FUN_00a6fc20(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_EAX;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(in_EAX + 0x20);
  uVar4 = FUN_00a3f120();
  uVar4 = uVar4 & uVar1;
  if (*(uint *)(in_EAX + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (uVar1 >> 1));
  }
  iVar7 = *(int *)(in_EAX + 0x10);
  puVar2 = *(undefined4 **)(iVar7 + uVar4 * 8);
  puVar3 = *(undefined4 **)(in_EAX + 4);
  puVar8 = puVar2;
  while( true ) {
    puVar5 = puVar3;
    if (puVar2 != puVar3) {
      puVar5 = (undefined4 *)**(undefined4 **)(iVar7 + uVar4 * 8 + 4);
    }
    if (puVar8 == puVar5) {
      *param_1 = (int)puVar3;
      return;
    }
    uVar1 = *(uint *)(param_2 + 0x10);
    uVar10 = puVar8[6];
    uVar9 = uVar10;
    if (uVar1 <= uVar10) {
      uVar9 = uVar1;
    }
    iVar6 = FUN_00414bd0(uVar9);
    if (((iVar6 == 0) && (uVar1 <= uVar10)) && (uVar10 == uVar1)) break;
    puVar8 = (undefined4 *)*puVar8;
  }
  uVar1 = puVar8[6];
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar10 = uVar4;
  if (uVar1 <= uVar4) {
    uVar10 = uVar1;
  }
  iVar7 = FUN_00414bd0(uVar10);
  if (((iVar7 == 0) && (uVar1 <= uVar4)) && (uVar4 == uVar1)) {
    *param_1 = (int)puVar8;
    return;
  }
  *param_1 = (int)puVar3;
  return;
}

