// FUN_009b3e00 @ 009b3e00 body=[[009b3e00, 009b3e3f]]


void FUN_009b3e00(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x60);
  *(undefined1 *)(in_ECX + 0x53) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  if (*(int **)(in_ECX + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xe0) + 0x38))();
  }
                    /* WARNING: Could not recover jumptable at 0x009b3e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0x38))();
  return;
}

