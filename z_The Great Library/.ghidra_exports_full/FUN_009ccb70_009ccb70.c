// FUN_009ccb70 @ 009ccb70 body=[[009ccb70, 009ccbce]]


void FUN_009ccb70(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  (**(code **)(**(int **)(in_ECX + 0xac) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x38))();
  if (*(int **)(in_ECX + 0x200) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x200) + 0x38))();
  }
  if (*(int **)(in_ECX + 0x204) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009ccbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x204) + 0x38))();
    return;
  }
  return;
}

