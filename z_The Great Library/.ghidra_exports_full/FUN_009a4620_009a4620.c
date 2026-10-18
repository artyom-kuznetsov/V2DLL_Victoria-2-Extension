// FUN_009a4620 @ 009a4620 body=[[009a4620, 009a4678]]


float10 FUN_009a4620(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  float10 fVar3;
  float local_8;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x5c);
  puVar1 = puVar2 + (*(int *)(in_ECX + 0x60) - (int)puVar2 >> 2);
  local_8 = DAT_00f092dc;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    fVar3 = (float10)(**(code **)(*(int *)*puVar2 + 0x28))();
    if (local_8 < (float)fVar3) {
      local_8 = (float)fVar3;
    }
  }
  return (float10)local_8;
}

