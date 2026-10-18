// FUN_009efef0 @ 009efef0 body=[[009efef0, 009eff20]]


void FUN_009efef0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x6c) == '\0') {
    *(undefined1 *)(in_ECX + 0x4f) = 1;
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x34))();
    if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009eff1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0xa8) + 0xb0))();
      return;
    }
  }
  return;
}

