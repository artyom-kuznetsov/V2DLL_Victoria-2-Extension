// FUN_0078e4f0 @ 0078e4f0 body=[[0078e4f0, 0078e511]]


void FUN_0078e4f0(void)

{
  int *in_ECX;
  
  *(undefined1 *)(in_ECX + 2) = 1;
  if (in_ECX[1] != 0) {
    (**(code **)(*(int *)(in_ECX[1] + 0x18) + 0x34))();
  }
                    /* WARNING: Could not recover jumptable at 0x0078e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x24))();
  return;
}

