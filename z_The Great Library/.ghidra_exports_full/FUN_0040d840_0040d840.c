// FUN_0040d840 @ 0040d840 body=[[0040d840, 0040d865]]


void FUN_0040d840(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x390) != 0) && (*(char *)(*(int *)(in_ECX + 0x390) + 0x1f0) != '\0')) {
    FUN_004063e0();
  }
                    /* WARNING: Could not recover jumptable at 0x0040d864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x24))();
  return;
}

