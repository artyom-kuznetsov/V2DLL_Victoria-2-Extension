// FUN_00ad5260 @ 00ad5260 body=[[00ad5260, 00ad53bc]]


void FUN_00ad5260(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int in_ECX;
  uint local_8;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  local_8 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x80) + local_8 * 4);
      puVar5 = (undefined4 *)FUN_00b15770(*(undefined4 *)(iVar2 + 0x10));
      puVar6 = (undefined1 *)*puVar5;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_00ded94d;
      }
      uVar4 = FUN_00ad4ef0(puVar6,param_1,param_2,1);
      if (uVar4 != 0xffff) {
        puVar5 = (undefined4 *)
                 FUN_00b15770(*(undefined4 *)
                               (*(int *)((uint)uVar4 * 4 + *(int *)(in_ECX + 0x80)) + 0x10));
        puVar6 = (undefined1 *)*puVar5;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00ded94d;
        }
        puVar5 = (undefined4 *)FUN_00b15770(*(undefined4 *)(iVar2 + 0x10));
        puVar7 = (undefined1 *)*puVar5;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00ded94d;
        }
        FUN_00b15e80("%s <---> %s",puVar7,puVar6);
        puVar5 = (undefined4 *)
                 FUN_00b15770(*(undefined4 *)
                               (*(int *)((uint)uVar4 * 4 + *(int *)(in_ECX + 0x80)) + 0x10));
        puVar6 = (undefined1 *)*puVar5;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00ded94d;
        }
        puVar5 = (undefined4 *)FUN_00b15770(*(undefined4 *)(iVar2 + 0x10));
        puVar7 = (undefined1 *)*puVar5;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00ded94d;
        }
        piVar8 = (int *)FUN_00ad8640(puVar7);
        iVar2 = *piVar8;
        if (iVar2 != -1) {
          piVar8 = (int *)FUN_00ad8640(puVar6);
          iVar3 = *piVar8;
          if (iVar3 != -1) {
            iVar9 = *(int *)(in_ECX + 0x104);
            if (iVar9 == 0) {
              iVar9 = FUN_00ad4780();
            }
            *(short *)(iVar9 + iVar3 * 2) = (short)iVar2;
            *(short *)(iVar9 + iVar2 * 2) = (short)iVar3;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar1);
  }
  return;
}

