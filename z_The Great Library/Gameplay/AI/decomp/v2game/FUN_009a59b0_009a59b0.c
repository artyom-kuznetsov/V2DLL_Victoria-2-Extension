// FUN_009a59b0 @ 009a59b0 body=[[009a59b0, 009a5a35]]


/* WARNING: Removing unreachable block (ram,0x009a59eb) */

undefined4 * FUN_009a59b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)local_8[1] + 0x35) == '\0') {
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
          goto LAB_009a5a18;
        }
LAB_009a5a1a:
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
LAB_009a5a18:
        if ((int)uVar3 < 0) goto LAB_009a5a1a;
        puVar5 = (undefined4 *)*puVar4;
        local_8 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0x35) == '\0');
  }
  return local_8;
}

