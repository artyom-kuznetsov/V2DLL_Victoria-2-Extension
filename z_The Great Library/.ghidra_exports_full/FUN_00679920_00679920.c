// FUN_00679920 @ 00679920 body=[[00679920, 00679963]]


undefined4 * FUN_00679920(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d80) != 0) {
    iVar1 = FUN_00868080();
    if (iVar1 != 0) {
      FUN_00868080();
      iVar1 = FUN_008676e0();
      if (iVar1 != 0) {
        FUN_00868080();
        iVar1 = FUN_008676e0();
        return (undefined4 *)(iVar1 + 0x90c);
      }
    }
  }
  return &DAT_00f0ebb0;
}

