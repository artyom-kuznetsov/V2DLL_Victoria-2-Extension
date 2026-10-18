// FUN_009e3010 @ 009e3010 body=[[009e3010, 009e301c] [009e3020, 009e3069]]


void FUN_009e3010(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  for (puVar1 = *(undefined4 **)(in_ECX + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))(*puVar1);
    (**(code **)(*(int *)*puVar1 + 0x90))();
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x68); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))(*puVar1);
    (**(code **)(*(int *)*puVar1 + 0x90))();
  }
  return;
}

