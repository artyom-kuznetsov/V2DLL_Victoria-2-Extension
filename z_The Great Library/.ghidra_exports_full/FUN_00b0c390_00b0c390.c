// FUN_00b0c390 @ 00b0c390 body=[[00b0c390, 00b0c50e]]


/* WARNING: Removing unreachable block (ram,0x00b0c406) */

undefined4 * FUN_00b0c390(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  bool bVar7;
  undefined4 *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar6 = 0;
  puStack_20 = (undefined4 *)
               (*(code *)PTR_FUN_00f01b08)
                         (0x34,0xcd,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffd0);
  uStack_4 = 0;
  bVar7 = puStack_20 == (undefined4 *)0x0;
  if (bVar7) {
    puStack_20 = (undefined4 *)0x0;
  }
  else {
    FUN_00b13660(0,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_00b12a60(&DAT_00ded94d);
    *puStack_20 = &PTR_FUN_00ddfe94;
    puStack_20[5] = 0;
    puStack_20[6] = 0;
    puStack_20[7] = 0;
    *(undefined2 *)(puStack_20 + 8) = 1;
    puStack_20[9] = 0;
    puStack_20[10] = 0;
    puStack_20[0xb] = 0;
    *(undefined2 *)(puStack_20 + 0xc) = 0xcd;
  }
  uStack_4 = 0xffffffff;
  if (!bVar7) {
    FUN_00b13650();
  }
  FUN_00b12f60(puStack_20);
  FUN_00b0d5d0(in_ECX + 0x14);
  uVar2 = *(uint *)(in_ECX + 0x28);
  uVar3 = puStack_20[10];
  if (((uVar2 != uVar3) && (puStack_20[10] = uVar2, uVar3 < uVar2)) &&
     ((uint)puStack_20[0xb] < uVar2)) {
    FUN_00aeb6c0(uVar2);
  }
  if (*(int *)(in_ECX + 0x28) == 0) {
    ExceptionList = local_c;
    return puStack_20;
  }
  do {
    iVar4 = puStack_20[9];
    iVar1 = uVar6 * 4;
    uVar5 = FUN_00b0b8a0();
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar4 + iVar1) = uVar5;
  } while (uVar6 < *(uint *)(in_ECX + 0x28));
  ExceptionList = local_c;
  return puStack_20;
}

