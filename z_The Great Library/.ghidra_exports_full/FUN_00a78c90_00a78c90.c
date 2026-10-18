// FUN_00a78c90 @ 00a78c90 body=[[00a78c90, 00a78d15]]


/* WARNING: Removing unreachable block (ram,0x00a78ccb) */

undefined4 * FUN_00a78c90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)local_8[1] + 0x41) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    puVar4 = (undefined4 *)local_8[1];
    do {
      uVar2 = puVar4[7];
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      uVar3 = FUN_00414bd0(uVar3);
      if (uVar3 == 0) {
        if (uVar1 <= uVar2) {
          uVar3 = (uint)(uVar2 != uVar1);
          goto LAB_00a78cf8;
        }
LAB_00a78cfa:
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
LAB_00a78cf8:
        if ((int)uVar3 < 0) goto LAB_00a78cfa;
        puVar5 = (undefined4 *)*puVar4;
        local_8 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0x41) == '\0');
  }
  return local_8;
}

