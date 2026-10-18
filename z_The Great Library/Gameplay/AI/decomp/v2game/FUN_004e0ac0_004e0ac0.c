// FUN_004e0ac0 @ 004e0ac0  (requested 004E0AC0, first bytes: 8B 40 14 85 C0 74 0D 8B)


undefined4 FUN_004e0ac0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int in_ECX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 0x14);
      (puVar1 != (undefined4 *)0x0 && (*(int *)*puVar1 != in_ECX)); puVar1 = (undefined4 *)puVar1[2]
      ) {
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),puVar1 != (undefined4 *)0x0);
}

