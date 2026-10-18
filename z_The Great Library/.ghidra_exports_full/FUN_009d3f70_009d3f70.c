// FUN_009d3f70 @ 009d3f70 body=[[009d3f70, 009d3f98] [009d3fa0, 009d4002]]


/* WARNING: Removing unreachable block (ram,0x009d3fb5) */

undefined4 * FUN_009d3f70(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)local_8[1] + 0x129) == '\0') {
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
          goto LAB_009d3fe2;
        }
LAB_009d3fe4:
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
LAB_009d3fe2:
        if ((int)uVar3 < 0) goto LAB_009d3fe4;
        puVar5 = (undefined4 *)*puVar4;
        local_8 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0x129) == '\0');
  }
  return local_8;
}

