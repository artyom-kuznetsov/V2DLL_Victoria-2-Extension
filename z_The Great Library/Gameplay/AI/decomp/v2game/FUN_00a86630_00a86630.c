// FUN_00a86630 @ 00a86630 body=[[00a86630, 00a8667e]]


void FUN_00a86630(void)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  pcVar1 = *(code **)(in_ECX[0x1d] + 0x2c);
  *(undefined1 *)((int)in_ECX + 0x4f) = 1;
  puVar3 = (undefined4 *)(*pcVar1)();
  for (piVar2 = (int *)*puVar3; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*(int *)(*piVar2 + 0x1c) + 0x28))();
  }
  (**(code **)(*(int *)in_ECX[0x2e] + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x00a8667d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xe4))();
  return;
}

