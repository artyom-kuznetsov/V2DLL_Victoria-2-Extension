// FUN_00a70ac0 @ 00a70ac0 body=[[00a70ac0, 00a70ae9]]


void FUN_00a70ac0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 1;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x34))();
  if (*(int **)(in_ECX + 0xac) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a70ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
    return;
  }
  return;
}

