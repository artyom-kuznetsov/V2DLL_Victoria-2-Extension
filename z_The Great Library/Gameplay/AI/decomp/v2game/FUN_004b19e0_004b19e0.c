// FUN_004b19e0 @ 004b19e0 body=[[004b19e0, 004b1a0f]]


void FUN_004b19e0(void)

{
  int in_ECX;
  
  FUN_00648040(*(undefined4 *)(in_ECX + 0x50));
  if (*(int *)(in_ECX + 0x4c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004b1a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x4c) + 0x30))();
    return;
  }
  return;
}

