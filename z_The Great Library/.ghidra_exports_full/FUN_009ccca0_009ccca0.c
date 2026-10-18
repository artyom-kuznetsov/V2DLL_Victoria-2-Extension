// FUN_009ccca0 @ 009ccca0 body=[[009ccca0, 009ccd0b]]


void FUN_009ccca0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x70))();
  (**(code **)(**(int **)(in_ECX + 0xac) + 0x70))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x70))();
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x70))();
  if (*(int *)(in_ECX + 0x200) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x200) + 0x128))();
  }
  if (*(int *)(in_ECX + 0x204) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009ccd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x204) + 0x128))();
    return;
  }
  return;
}

