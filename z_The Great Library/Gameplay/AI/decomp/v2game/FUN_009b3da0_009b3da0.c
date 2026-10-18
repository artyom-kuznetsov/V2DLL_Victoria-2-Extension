// FUN_009b3da0 @ 009b3da0 body=[[009b3da0, 009b3dde]]


void FUN_009b3da0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x53) = 1;
  if (*(int **)(in_ECX + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xe0) + 0x34))();
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x60); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x009b3ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x34))();
  return;
}

