// FUN_009b5c40 @ 009b5c40 body=[[009b5c40, 009b5c61]]


void FUN_009b5c40(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x009b5c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x38))();
  return;
}

