// FUN_00ad4c80 @ 00ad4c80 body=[[00ad4c80, 00ad4cd6]]


undefined4 FUN_00ad4c80(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 local_8;
  
  uVar1 = *(uint *)(in_ECX + 0xbc);
  uVar5 = 0;
  uVar4 = 0;
  local_8 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = *(undefined4 *)
               (*(int *)(in_ECX + 0x80) + *(int *)(*(int *)(in_ECX + 0xb8) + uVar4 * 4) * 4);
      uVar2 = FUN_00ae8d30();
      if (uVar5 < uVar2) {
        uVar5 = uVar2;
        local_8 = uVar3;
      }
      uVar4 = uVar4 + 1;
      uVar3 = local_8;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

