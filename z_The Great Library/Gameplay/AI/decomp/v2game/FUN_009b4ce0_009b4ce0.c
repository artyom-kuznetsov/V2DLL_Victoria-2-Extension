// FUN_009b4ce0 @ 009b4ce0 body=[[009b4ce0, 009b4d00]]


void FUN_009b4ce0(void)

{
  int in_ECX;
  
  FUN_009b4370();
  if (*(int *)(in_ECX + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b4cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x100) + 0x70))();
    return;
  }
  return;
}

