// FUN_0067d3a0 @ 0067d3a0 body=[[0067d3a0, 0067d3e2]]


void FUN_0067d3a0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xf6) == '\0') {
    *(undefined1 *)(in_ECX + 0x4f) = 1;
    *(undefined4 *)(in_ECX + 0xb8) = 0;
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x34))();
  }
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x0067d3e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x128) + 0x34))();
  return;
}

