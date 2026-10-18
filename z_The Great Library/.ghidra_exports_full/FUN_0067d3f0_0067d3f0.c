// FUN_0067d3f0 @ 0067d3f0 body=[[0067d3f0, 0067d429]]


void FUN_0067d3f0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0067d428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x128) + 0x38))();
  return;
}

